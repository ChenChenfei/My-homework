#include<iostream>
#include<cstdlib>
//#include"rand-arr.hpp"

using namespace std;

template <class T>
class Rand_Arr
{
    public:
    T* Creat_arr();
    void Delet_arr(T*);
    private:
    T* p1,*p2;
    T ptr;
};
void Merge(int *souce,int* index,int start,int end);
void Mergesort(int* souce,int*index,int start,int end);
int main()
{
    cout<<"1";
    Rand_Arr<int> R;
    int n=100;
    int *pr= R.Creat_arr();
    int *index=new int[100];
     cout<<"1";
    Mergesort(pr,index,0,99);
    
    for (int i = 0; i < n; i++)
    {
        cout<<*(pr+i)<<"\t";
        if (i%10==0)
        {
            cout<<endl;
        }
        
    }
    R.Delet_arr(pr);
    delete index;
}

void Merge(int *sorce,int *index,int start,int mid,int end)
{
    int k=start;
    int i=start;
    int j=mid;
    while (i!=mid&&j!=end+1)
    {
        if(sorce[i]<sorce[j])
        {
            index[k++]=sorce[i++];
        }
        else
        {
            index[k++]=sorce[j++];
        }
    }
    while (i!=mid)
    {
        index[k++]=sorce[i++];
    }
    while (j!=end+1)
    {
        index[k++]=sorce[j++];
    }
}

void Mergesort(int* souce,int*index,int start,int end)
{
    int mid=(start-end)/2+1;
    if(start<end)
    {
    Mergesort(souce,index,start,mid);
    Mergesort(souce,index,mid,end);
    Merge(souce,index,start,mid,end);
    }
}
template<class T>
T* Rand_Arr<T>::Creat_arr()
{
    p1=new T[100];
    p2=new T[100];
    ptr=0;
    for (int i = 0; i < 100; i++)
    {
        *(p1+i)=i;
        *(p2+i)=0;
    }
     for (int i = 0; i < 100; i++)
    {
        ptr=rand()%100;
         if(*(p1+ptr)!=-1)
        {
            *(p2+i)=*(p1+ptr);
            *(p1+ptr)=-1;
        }
        else
        {
            i--;
        }
    }
    /*
    for (int i = 0; i < 100; i++)
    {
       cout<<*(p2+i)<<"\t";
       if (i%10==0)
       {
           cout<<endl;
       }
    }
    */
   return p2;
}
template<class T>
void Rand_Arr<T>::Delet_arr(T*pr)
{
    delete pr;
}

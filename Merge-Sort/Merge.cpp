#include<iostream>
#include<cstdlib>
#include"rand-arr.hpp"

using namespace std;
void Merge(int *sorce,int *index,int start,int mid,int end);
void Mergesort(int* souce,int*index,int start,int end);

int main()
{
    Rand_Arr<int> R;
    int n=100;
    int *pr= R.Creat_arr();
    int *index=new int[100];
    Mergesort(pr,index,0,99);
    
     for (int i = 0; i < 1000; i++)
    {
       cout<<*(pr+i)<<"\t";
       if (i%10==0)
       {
           cout<<endl;
       }
    }
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
    return 0;
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

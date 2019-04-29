#include"rand-arr.h"
#include<iostream>
#include<cstdlib>
using namespace std;
template<class T>
T* Rand_Arr<T>::Creat_arr(int n)
{
    p1=new T[n];
    p2=new T[n];
    ptr=0;
    for (int i = 0; i < n; i++)
    {
        *(p1+i)=i;
        *(p2+i)=0;
    }
     for (int i = 0; i < n; i++)
    {
        ptr=rand()%n;
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
    for (int i = 0; i < n; i++)
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

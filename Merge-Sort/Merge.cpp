#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int *p1=new int(1000); 
    int *p2=new int(500);
    int ptr=0;
    for (int i = 0; i < 1000; i++)
    {
        *(p1+i)=i;
        *(p2+i)=0;
    }
    /*
    for (int i = 0; i < 1000; i++)
    {
       cout<<*(p1+i)<<"\t";
       if(i % 10==0)
       {
           cout<<endl;
       }
    }
    */
    for (int i = 0; i < 500; i++)
    {
        ptr=rand()%1000;
        //cout<<"prt= "<<ptr<<"\t";cout<<*(p1+ptr)<<endl;
        if(*(p1+ptr)!=-1)
        {
            *(p2+i)=*(p1+ptr);
            *(p1+ptr)=-1;
            //cout<<"p2= "<<*(p2+i)<<"\t"<<"p1= "<<*(p1+i)<<"\t"<<"ptr= "<<ptr<<endl;
        }
        else
        {
            i--;
        }
    }
    for (int i = 0; i < 500; i++)
    {
       cout<<*(p2+i)<<"\t";
       if (i%10==0)
       {
           cout<<endl;
       }
    }
    cout<<"text";
    getchar();
    delete p1,p2;
    return 0;
}
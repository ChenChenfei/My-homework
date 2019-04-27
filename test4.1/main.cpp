#include "Stock.h"
#include<iostream>
using namespace std;
int main()
{
    Stock arr[5];
    Stock* a,*b;
    void add(Stock&,Stock&);

    Stock m(0,0,0,0,0);
    m.Show_Stock();
   
    //使用Set_Stock进行赋值
    for (int i = 0; i < N; i++)
    {
        arr[i].Set_Stock();
    }
    for (int i = 0; i < N; i++)
    {
        arr[i].Show_Stock();
    }
    for (int i = 0; i < N-1; i++)
    {
        add(arr[i],arr[i+1]);
    }
    cout<<"the number of data is: "<<Stock::Get_N_count()<<endl;

    //使用Assign_Stock进行赋值
    Stock p1[2],p2[2];
    int i;
    for ( i = 0; i < 2; i++)
    {
       p1[i].Set_Stock();
    }
    for ( i = 0; i < 2; i++)
    {
        p2[i].Assign_Stock(p1[i]);
    }
    for ( i = 0; i < 2; i++)
    {
        p2[i].Show_Stock();
    }

    //计算当日收盘价与开盘价的大小关系
    int m1;
    for (int i = 0; i < 2; i++)
    {
        m1=Compare_Stock(p1[i]);
        if (m1==1)
        {
            cout<<"today's Begin is higher than End"<<endl;
        }
        if (m1==-1)
        {
            cout<<"today's Begin is lower than End"<<endl;
        }
        if (m1==0)
        {
            cout<<"today's Begin as same as End"<<endl;
        }
    
    }
    
    getchar();
    return 0;
}
void add(Stock &a,Stock &b)
{
 	float n;
 	n=(b.Get_End()-a.Get_End())/a.Get_End();
    cout<<n<<endl;
}

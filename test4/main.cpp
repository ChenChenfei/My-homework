#include "Stock.h"
#include<iostream>
using namespace std;
int main()
{
    Stock arr[5];
    Stock* a,*b;
    void add(Stock&,Stock&);
    //测试代码
    Stock m(0,0,0,0,0);
    m.Show_Stock();
    //测试结束
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
    getchar();
    return 0;
}
void add(Stock &a,Stock &b)
{
 	float n;
 	n=(b.Get_End()-a.Get_End())/a.Get_End();
    cout<<n<<endl;
}

#include"Stock.h"
using namespace std;
//设置当日的天数、股票开盘价，收盘价，最高价格，最低价格

void Stock::Set_Stock(int n,float ma,float mi,float b,float e)
{
    N_count++;
    Number=n;
    Max=ma;
    Min=mi;
    Begin=b;
    End=e;
}

//获取当天的收盘价格
float Stock::Get_End()
{
    return End;
}
//显示当天的所有数据
void Stock::Show_Stock()
{
    cout<<"Number："<<Number<<"\t";
    cout<<"Max："<<Max<<"\t";
    cout<<"Min："<<Min<<"\t";
    cout<<"Begin："<<Begin<<"\t";
    cout<<"End："<<End<<"\t";
}
//通过输入确当天数据
void Stock::Set_Stock()
{
    cout<<"Number: ";cin>>Number;
    cout<<"Begin： ";cin>>Begin;
    cout<<"End： ";cin>>End;
    cout<<"Max： ";cin>>Max;
    cout<<"Min： ";cin>>Min;
}
//获取目前对象个数
int Stock::Get_N_count()
{
    return N_count;
}
//将数据复制到当前对象
void Stock::Assign_Stock(Stock& p)
{
    if(this!=&p)
    {
        Number=p.Number;
        Max=p.Max;
        Min=p.Min;
        Begin=p.Begin;
        End=p.End;
    }
}
//比较当日的开盘价与收盘价，若是开盘价>收盘价，返回真，否则，返回假
int Compare_Stock(Stock &p)
{
    if (p.Begin>p.End)
    {
        return 1;
    }
    if (p.Begin<p.End)
    {
        return -1;
    }
    if (p.End==p.Begin)
    {
        return 0;
    }
    
    
    
}
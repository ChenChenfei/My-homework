#include"Stock.h"
using namespace std;
//带有默认参数的构造函数及不带参数的构造函数
Stock::Stock()
{
    Max=0;
    Min=0;
    Begin=0;
    End=0;
    Number=0;
}
Stock::Stock(int n,float ma,float mi,float b,float e)
{
    Number=n;
    Max=ma;
    Min=mi;
    Begin=b;
    End=e;
}
//设置当日的天数、股票开盘价，收盘价，最高价格，最低价格
void Stock::Set_Stock(int n,float ma,float mi,float b,float e)
{
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
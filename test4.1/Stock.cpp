#include"Stock.hpp"
#include<iostream>

using namespace std;

int Stock::N_count=0;
//���õ��յ���������Ʊ���̼ۣ����̼ۣ���߼۸���ͼ۸�
 Stock::Stock(int n,float ma,float mi,float b,float e)
{
    N_count++;
    Number=n;
    Max=ma;
    Min=mi;
    Begin=b;
    End=e;
}

//��ȡ��������̼۸�
float Stock::Get_End()
{
    return End;
}
//��ʾ�������������
void Stock::Show_Stock()
{
    cout<<"Number��"<<Number<<"\t";
    cout<<"Max��"<<Max<<"\t";
    cout<<"Min��"<<Min<<"\t";
    cout<<"Begin��"<<Begin<<"\t";
    cout<<"End��"<<End<<endl;
}
//ͨ������ȷ��������
void Stock::Set_Stock()
{
    cout<<"Number: ";cin>>Number;
    cout<<"Begin�� ";cin>>Begin;
    cout<<"End�� ";cin>>End;
    cout<<"Max�� ";cin>>Max;
    cout<<"Min�� ";cin>>Min;
}
//��ȡĿǰ�������
int Stock::Get_N_count()
{
    return N_count;
}
//�����ݸ��Ƶ���ǰ����
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
//�Ƚϵ��յĿ��̼������̼ۣ����ǿ��̼�>���̼ۣ������棬���򣬷��ؼ�
int Compare_Stock(Stock &p)
{
    if (p.Begin>p.End)
    {
        return 1;
    }
    else if (p.Begin<p.End)
    {
        return -1;
    }
    else if (p.End==p.Begin)
    {
        return 0;
    }
   else 
   {
       return 2;
   }
}
#include"Time.h"
using namespace std;
void Time::set_time()
{
    cout<<"������ʱ��ʱ���֡���"<<endl;
    cin>>clock>>minute>>second;
}
void Time::print_time()
{
    cout<<"����ʱ��Ϊ�� "<<endl;
    cout<<clock<<":"<<minute<<":"<<second<<endl;
}
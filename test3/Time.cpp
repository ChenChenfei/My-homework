#include"Time.h"
using namespace std;
void Time::set_time()
{
    cout<<"请输入时间时、分、秒"<<endl;
    cin>>clock>>minute>>second;
}
void Time::print_time()
{
    cout<<clock<<":"<<minute<<":"<<second<<endl;
}
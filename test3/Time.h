//Time.h
#ifndef TIME
#define TIME
#include<iostream>
using namespace std;
class Time
{
public:
    Time()
    {
        clock=0;
        minute=0;
        second=0;
    }
    Time(int c,int m,int s)
    {
        clock=c;
        minute=m;
        second=s;
    }
    ~Time()
    {
        cout<<"Goodbye!"<<endl;
    }
    void set_time();
    void print_time();
    private:
    int clock,minute,second;
};
#endif
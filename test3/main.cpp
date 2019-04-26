#include"Time.h"
int main()
{
    Time t1,t2,t3(10,20,30);
    t1.print_time();
    t2.set_time();
    t2.print_time();
    t3.print_time();
    return 0; 
}
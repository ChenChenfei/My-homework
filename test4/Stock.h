#ifndef STOCK
#define STOCK
#include<iostream>
using namespace std;
const int N=5;
class Stock
{
public:
    Stock();
    Stock(int,float,float,float,float);
    void Set_Stock();
    void Set_Stock(int,float,float,float,float);
    void Show_Stock();
    float Get_End();
    private:
    int Number;
    float Max,Min,Begin,End;
};
#endif
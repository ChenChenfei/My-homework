//Stock.h

#define STOCK
#include<iostream>
using namespace std;
const int N=5;
class Stock
{
public:
    Stock(){N_count++;};
    Stock(int,float,float,float,float);
    void Set_Stock();
    void Set_Stock(int,float,float,float,float);
    void Show_Stock();
    float Get_End();
    static int Get_N_count();
    void Assign_Stock(Stock&);
    friend int Compare_Stock(Stock&);
private:
    static int N_count;
    int Number;
    float Max,Min,Begin,End;
};

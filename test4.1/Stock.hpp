//Stock.h
#ifndef STOCK
#define STOCK

const int N=2;
class Stock
{
public:
    Stock(){N_count++;};
    Stock(int,float,float,float,float);
    void Set_Stock();
    void Show_Stock();
    float Get_End();
    static int Get_N_count();
    void Assign_Stock(Stock&);
    friend int Compare_Stock(Stock&);
    static int N_count;
private:
    int Number;
    float Max,Min,Begin,End;
};

#endif


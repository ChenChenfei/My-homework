//Stack.h
#include<iostream>
using namespace std;
template<class Type>
class note
{
public:
    Type data;
    node<Type> *next;
};
template<class Type>
class Stacklink
{
    private:
    node<Type>*top;
    public:
    Stacklink();
    ~Stacklink();
    void push(Type value);
    Type pop();
    int isnull();
};
//my laptap to my computer,test
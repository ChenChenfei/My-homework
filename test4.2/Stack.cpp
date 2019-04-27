//Stack.cpp
#include"Stack.h"
using namespace std;

//set the head of Stacklink
template<class Type>
Stacklink<Type>::Stacklink()
{
   node<Type>*T;
   T=new node<Type>;
   T->next=NULL;
   top=T; 
}

//delete the Stacklink
template<class Type>
Stacklink<Type>::~Stacklink()
{
    node<Type>*N,*Temp;
    for (N = top; N->next!=NULL;)
    {
        Temp=N;
        N=N->next;
        delete Temp;
    }
}

//push a value
template<class Type>
void Stacklink<Type>::push(Type value)
{
    node<Type>*T;
    T=new node<Type>;
    if(T!=NULL)
    {
    T->data=value;
    T->next=top;
    top=T;
    }
    else{
        cout<<endl<<"The Stack is NULL!";
        exit(1);
    }
}

//pop a value
template<class Type>
Type Stacklink<Type>::pop()
{
    Type value;
    node<Type>*T=top;
    if (top->next==Null)
    {
        cout<<endl<<"The Stack is NULL!";
        return 0;
    }
    value=top->data;
    top=top->next;
    delete T;
    return value;
}

//is next node is NUll?1:0
template<class Type>
int Stacklink<Type>::isnull()
{
    if(top->next==NULL)return 1;
    else return 0;
}

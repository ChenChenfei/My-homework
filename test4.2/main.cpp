#include"Stack.h"
using namespace std;
int main()
{
    int j;
    Stacklink<int> ss;
    for (int i = 0; i < 5; i++)
    {
        ss.push(i);
    }
    cout<<endl;
    while (!ss.isnull())
    {
        j=ss.pop();
        cout<<j<<"\t";
    }
    cout<<endl;
    return 0;
}
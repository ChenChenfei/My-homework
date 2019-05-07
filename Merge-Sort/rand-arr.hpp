#include<cstdlib>
template <class T>
class Rand_Arr
{
    public:
    T* Creat_arr();
    void Delet_arr(T*);
    private:
    T* p1,*p2;
    T ptr;
};

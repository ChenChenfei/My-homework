//Tree.h
template<class T>
class Tree
{
    public:
    T* creat();
    void destroy();
    bool isempty();
    void clear();
    bool root(T);
    void maketree(T,T*,T*);
    void breaktree(T,T*,T*);
    void preorder(visit);
    void inorder(visit);
    void postorder(visit);
};
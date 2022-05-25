#include<iostream>
using namespace std;

template <class T>
class Example{
    T x;
    public:
    void set(T i)
    {
        x=i;
    }
    T getNum()
    {return x;}
};

int main()
{
    Example<int>obj1;
    Example<char>obj2;
    Example<double>obj3;
    //int a;
    //cin>>a;
    //obj1.set(a);
    obj1.set(20);
    obj2.set('c');
    obj3.set(20.5);
    cout<<obj1.getNum()<<endl<<obj2.getNum()<<endl<<obj3.getNum();
    return 0;
}


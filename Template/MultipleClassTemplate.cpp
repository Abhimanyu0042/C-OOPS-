#include<iostream>
using namespace std;

template <class S, class T, class U>
class Example
{
    S num1;
    T num2;
    U num3;
    public:
    void set(S n1, T n2, U n3)
    {num1 = n1; num2 = n2; num3 = n3;}
    T getTotal()
    {return num1 + num2 + num3;}
};
int main()
{
    Example<float,float,int>obj1;
    Example<int,int,float>obj2;
    obj1.set(7.5,6.9,5);
    obj2.set(6,7,2.6);
    cout<<obj1.getTotal()<<endl;
    cout<<obj2.getTotal();
    return 0;
}
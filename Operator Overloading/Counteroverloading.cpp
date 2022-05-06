
#include <iostream>

using namespace std;

class counter
{
    int count;
    public:
    counter()
    {count = 20;}
    void operator++()
    {count++;}
    void operator--()
    {count--;}
    void disp()
    {cout<<count<<" ";}
};

int main()
{
    counter C1,C2;
    ++C1;
    ++C1;
    --C2;
    C1.disp();
    C2.disp();
    return 0;

}

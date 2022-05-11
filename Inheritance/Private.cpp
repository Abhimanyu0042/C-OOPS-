
#include <iostream>

using namespace std;

class A
{
    int x;
    protected:
    int y;
    public:
    int z;
    void set_x()
    {
        cin>>x;
    }
    void disp_x()
    {
        cout<<"x = "<<x;
    }
};

class B: private A
{
    public:
    void set()
    {
        cout<<"enter x ";
        set_x();
        cout<<"enter values of y and z ";
        cin>>y>>z;
    }
    void disp()
    {
        disp_x();
        cout<<"y = "<<y<<endl<<"z = "<<z;
    }
};

int main()
{
    B obj1;
    obj1.x = 10; //error
    obj1.y = 20; //error
    obj1.z = 30; //error
    obj1.set();
    obj1.disp();
}

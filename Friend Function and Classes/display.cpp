
#include <iostream>

using namespace std;

class C
{
    int x;
    public :
    void setvalue(int i)
    {
        x = i;
    }
    friend void display();
};
void display()
{
    C obj;
    obj.setvalue(20);
    cout<<obj.x;
}
int main()
{
    display();
}


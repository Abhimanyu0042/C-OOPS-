
#include <iostream>

using namespace std;

class integer
{
    int a,b ;
    public :
    void setvalue(int x,int y)
    {a = x; b = y;}
    friend float mean (integer);
};

int main()
{
    int i,j ; integer obj;
    cout << "Enter the two numbers: ";
    cin>>i>>j;
    obj.setvalue(i,j);
    cout<<mean(obj);
    
}
float mean(integer obj1)
{
    float r;
    r = (obj1.a + obj1.b)/2;
    return r;
}


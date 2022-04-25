#include <iostream>

using namespace std;

class Example{
    int *p;
    public:
    Example(){
        p=new int;
    }
    void set(int i){
        *p=i;
    }
    void disp(){
    cout<<*p<<"is shared at"<<p;
    }};
    
int main()
{
    Example E1;
    E1.set(10);
    E1.disp();

    return 0;
}
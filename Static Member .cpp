#include <iostream>

using namespace std;

class counter {
    int count;
    public:
    void set(){
        count=0;
    };
    void integer(){
        count++;
        };
    void display(){
        cout<<"the count of num is :-" <<count;
    };
};

int main()
{
    counter obj1,obj2,obj3;
    obj1.set();
    obj2.set();
    obj3.set();
    obj1.integer();
    obj2.integer();
    obj3.integer();
    obj3.integer();
    obj3.integer();
    obj3.integer();
    obj1.display();
    obj2.display();
    obj3.display();
    

    return 0;
};

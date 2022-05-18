#include <iostream>
using namespace std;

class shapes{
    int a,b;
    public:
    void set_a(int i,int j){
        a=i,b=j;
    }
    void area_r(){
        int A;
        A=a*b;
        cout<<A; 
    }
    void area_t(){
        int A;
        A=1/2*a*b;
        cout<<A; 
    }        
};

class Rect :public shapes{
    public:
    void area(){
        cout<<"area of rectangle is :";
        area_r();    
    }
};

class Sq :public shapes{
    public:
    void area(){
        cout<<"area of Square is :";
        area_r(); 
    }
};

class Tri :public shapes{
    public:
    void area(){
        cout<<"area of triangle is :";
        area_t();    
    }
};



int main(){
    int i,j;
    Rect obj1;
    Sq obj2;
    Tri obj3;
    obj1.area();
    obj2.area();
    obj3.area();
}
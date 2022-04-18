

#include <iostream>

using namespace std;

class B;
class A
{
    int a;
    public :
    void setvalue(int i)
    {a = i;}
    friend float mean(A,B);
    friend int max(A,B);
    friend int min(A,B);
};
class B
{
    int b;
    public :
    void setvalue(int j)
    {b = j;}
    friend float mean(A, B);
    friend int max(A,B);
    friend int min(A,B);
};
float mean (A obj1, B obj2)
{
    float r ;
    r = (obj1.a + obj2.b)/2;
    return r;
};
int max(A obj1, B obj2)
{
    int m ;
    if(obj1.a > obj2.b){
        m = obj1.a; 
    }
    else{
        m=obj2.b;
    }
    return m;
};
int min(A obj1, B obj2)
{
    int n ;
    if(obj1.a < obj2.b){
        n = obj1.a; 
    }
    else{
        n=obj2.b;
    }
    return n;
};

int main()
{
    A obj1;
    B obj2;
    obj1.setvalue(10);
    obj2.setvalue(20);
    cout<<"Average of the Number is : "<<mean(obj1,obj2)<<endl;
    cout<<"Maximum number is : "<<max(obj1,obj2)<<endl;
    cout<<"Minimum number is : "<<min(obj1,obj2)<<endl;
    
}


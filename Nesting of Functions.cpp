#include <iostream>

using namespace std;

class set {
    int num1,num2;
    public:
    void setData(int n1,int n2){
        num1=n1,num2=n2;
    };
    int largest(){
        if(num1>num2)
            return num1;
        else
            return num2;
        };
    void display(){
        cout<<"the largest num :-" <<largest();
    };
};

int main()
{
    set S1,S2;int a,b;
     cin>>a>>b;
    S1.setData(a,b);
    cin>>a>>b;
    S2.setData(a,b);
    S1.display();
    S2.display();

    return 0;
};

#include <iostream>
#include <climits>
 using namespace std;
int main(){
    int a,b,sum,dif,mul,div,mod;
    cout<<"Enter the two digits : "<<endl;
    cin>> a >> b;
    char x;
    cout<<"Enter the operation to be executed : "<<endl;
    cin>>x;
    switch(x){
        case '+': sum = a + b;
        cout<<"Sum is "<<sum<<endl;
        break;

        case '-': dif = a - b;
        cout<<"Difference is "<<dif<<endl;
        break;

        case '*': mul = a * b;
        cout<<"Product is "<<mul<<endl;
        break;

        case '/': div = a / b;
        cout<<"Quotient is "<<div<<endl;
        break;

        case '%': mod = a % b;
        cout<<"Remainder is "<<mod<<endl;
        break;
    }
 }
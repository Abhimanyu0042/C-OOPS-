//WAP a program to swap two numbers without using third variable 

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the two numbers :-";
    cin>>a>>b ;
    a = a+b;
    b = a-b;
    a = a-b;
    cout << "a =" << a << "b ="<<b ;
    return 0;
}
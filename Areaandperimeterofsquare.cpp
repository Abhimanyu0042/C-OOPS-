//WAP a program to find the perimeter and area of the square.

#include <iostream>
using namespace std;

int main() {
    int A, s, P;
    cout << "Enter the side of square :-";
    cin>>s ;
    A = s*s ;
    P = 4*s;
    cout << "The perimeter of a square is:" << P;
    cout << "The area of a square is:" << A;
    return 0;
}
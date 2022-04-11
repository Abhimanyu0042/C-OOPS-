#include <iostream>
using namespace std;

int main(){
	int a, b, s, d, q, p, m;
	char oper;
	cout << "Enter the two numbers = " ;
	cin >> a >> b ;
	cin >> oper ;
	if (oper == '+'){
	s = a + b;
	cout << a << "+" << b << "=" << s;}
	if (oper == '-'){
	d = a - b; 
	cout << a << "-" << b << "=" << d;}
	if (oper == '/'){
	q = a/b;
	cout <<  a << "/" << b << "=" << q;}
	if (oper == '*'){
	p = a*b;
	cout <<  a << "*" << b << "=" << p;}
	if (oper == '%'){
	m = a%b;
	cout <<  a << "%" << b << "=" << m;}
	return 0;
}
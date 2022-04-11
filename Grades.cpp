#include <iostream>
using namespace std;

int main(){
	int a, b, c, s, x;
	cout <<"Enter the marks of Subjects = ";
	cin >> a >> b >> c;
	s = a + b + c;
	x = s/3;
	if (80 <= x && x <= 100){
	cout << "A";}
	if (70 <= x && x <= 79){
	cout << "B";}
	if (60 <= x && x <= 69){
	cout << "C"; }
	if (50 <= x && x <= 59){
	cout << "D"; }
	if (x < 50){
	cout << "F";}
	return 0;   
}
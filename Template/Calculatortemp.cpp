#include<iostream>
using namespace std;

int sum(int n1,int n2)
{return n1+n2;}
int sub(int n1,int n2)
{return n1-n2;}
int mul(int n1,int n2)
{return n1*n2;}
int divide(int n1,int n2)
{return n1/n2;}

double sum(double n1,double n2)
{return n1+n2;}
double sub(double n1,double n2)
{return n1-n2;}
double mul(double n1,double n2)
{return n1*n2;}
double divide(double n1,double n2)
{return n1/n2;}

template <class U>
U sum(U n1, U n2)
{return n1+n2;}
U sub(U n1, U n2)
{return n1-n2;}
U mul(U n1, U n2)
{return n1*n2;}
U divide(U n1, U n2)
{return n1/n2;}

int main()
{
    int a, b;
    double x, y;
    cin>>a>>b;
    cout<<sum(a,b) <<sub(a,b) <<mul(a,b) <<divide(a,b) <<endl;
    cin>>x>>y;
    cout<<sum(x,y) <<sub(x,y) <<mul(x,y) <<divide(x,y) <<endl;
    return 0;
}
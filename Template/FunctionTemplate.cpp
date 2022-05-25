#include<iostream>
using namespace std;

int sum(int n1,int n2)
{return n1+n2;}
float sum(float n1, float n2)
{return n1+n2;}
double sum(double n1, double n2)
{return n1+n2;}

template <class T>
T sum(T n1, T n2)
{return n1+n2;}
int main()
{
    int a, b, c;
    float x, y, z;
    double i, j, k;
    cin>>a>>b;
    cout<<sum(a,b)<<endl;
    cin>>x>>y;
    cout<<sum(x,y)<<endl;
    cin>>i>>j;
    cout<<sum(i,j);
    // cout<<sum(a,i); it will be error
    return 0;
}
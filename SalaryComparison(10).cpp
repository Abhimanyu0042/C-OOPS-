#include <iostream>
using namespace std;

struct employee {
  int empid;
  float salary;
  char name[40];
};

int main()
{
    employee e[10];
    cout<<"Enter the details of Employees :";
    for ( var i; i=0; i<=10; i++){
        cin>>e[i].empid;
        cin>>e[i].name;
        cin>>e[i].salary;
    }
    
    
    return 0;
}
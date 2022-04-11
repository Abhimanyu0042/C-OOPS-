#include <iostream>
using namespace std;

struct employee {
  int empid;
  float salary;
  char name[40];
};

int main()
{
    employee E1;
    employee E2;
    cout<<"Enter the details of Employees :";
    cin>>E1.empid>>E1.salary>>E1.name;
    cin>>E2.empid>>E2.salary>>E2.name;
    if (E1.salary > E2.salary){
        cout<<"Employee with Higher Salary : "<<E1.name;
    }
    else{
        cout<<"Employee with Higher Salary : "<<E2.name;
    }
    return 0;
}

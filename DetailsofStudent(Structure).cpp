#include <iostream>
using namespace std;

struct student {
  int rollno;
  float marks;
  int phoneno;
  char name[20];
};

int main()
{
    student S1;
    cout<<"Enter the details of students :";
    cin>>S1.rollno>>S1.marks>>S1.phoneno>>S1.name ;
    cout<<"Student details are -";
    cout<<" Roll number - "<<S1.rollno<<" Marks - "<<S1.marks<<" Phone number - "<<S1.phoneno<<" Name - "<<S1.name;
    return 0;
}

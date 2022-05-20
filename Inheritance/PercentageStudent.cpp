/*Write a C++ program to calculate the percentage of a student using multi-level inheritance. Accept the marks of three subjects in base
class. A class will derived from the above mentioned class which includes a function to find the total marks obtained and another class
derived from this class which calculates and displays the percentage of student.*/

#include<iostream>
using namespace std;

class AddData      //Base Class
{
    protected:
        int E, M, H, i;
    public:
        void accept_details()
        {
                cout<<"\n Enter Marks for Three Subjects ";
                cout<<"\n ------------------------------- \n";
                cout<<"\n English : ";
                cin>>E;
                cout<<"\n Maths : ";
                cin>>M;
                cout<<"\n History : ";
                cin>>H;
        }
};
//Class Total – Derived Class. Derived from class AddData and Base class of class Percentage
class Total : public AddData   
{
    protected:
        int total;
    public:
        void total_of_three_subjects()
        {
                total = E + M + H;
        }
};
class Percentage : public Total       //Class Percentage – Derived Class. Derived from class Total
{
    private:
        float per;
    public:
        void calculate_percentage()
        {
                per=total/3;
        }
        void show_result()
        {
                cout<<"\n ------------------------------- \n";
                cout<<"\n Percentage of a Student : "<<per;
        }
};
int main()
{
        Percentage p;
        p.accept_details();
        p.total_of_three_subjects();
        p.calculate_percentage();
        p.show_result();
        return 0;
}

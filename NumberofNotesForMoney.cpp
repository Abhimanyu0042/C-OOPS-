#include <iostream>
#include <climits>
 using namespace std;
int main(){
    int money,hund,fif,twen,one;
    cout<<"Enter the amount of money : "<< endl;
    cin>>money;
    int cal = 1;
    switch(cal){
        case 1: hund = money/100;
        cout<<"No. of 100 notes : "<<hund<<endl;
        money = money - (hund * 100);

        case 2: fif = money/50;
        cout<<"No. of 50 notes : "<<fif<<endl;
        money = money - (fif*50);

        case 3: twen = money/20;
        cout<<"No. of 20 notes : "<<twen<<endl;
        money = money - (twen*20);

        case 4: one = money;
        cout<<"No. of 1 notes : "<<one<<endl;
    }
 }
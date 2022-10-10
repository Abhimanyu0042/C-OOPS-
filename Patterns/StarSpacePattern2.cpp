#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row<=n){
        //print stars
        int col = 1;
        while(col<=n-row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}
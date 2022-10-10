#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row = 1;
    while(row<=n){
        //space print
        int space = row - 1;
        while(space){
            cout<<" ";
            space = space - 1;
        }

        //print stars
        int col = 1;
        while(col<=n-row+1){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;
    }
}
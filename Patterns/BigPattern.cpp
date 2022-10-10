// 123456654321
// 12345**54321
// 1234****4321
// 123******321
// 12********21
// 1**********1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int row = 1;
    while (row <= n)
    {
        int j = 1;
        while(j<=n-row+1){
            cout<<j;
            j++;
        }

        //stars print
        int l = 1;
        while(l<=row-1){
            cout<<"*";
            l++;
        }

        //stars print #2
        int r = 1;
        while(r<=row-1){
            cout<<"*";
            r++;
        }

        int k = 1;
        while(k<=n-row+1){
            cout<<n-row - k + 2;
            k++;
        }
        cout<<endl;
        row++;
    }
}

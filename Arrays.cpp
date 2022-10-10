#include <iostream>
using namespace std;

int
main ()
{
  int arr[100];
  int size;
  cout << "Enter the array size " << endl;
  cin >> size;
  for (int i = 0; i < size; i++)
    {
      cin >> arr[i];
    }
  for (int i = 0; i < size; i++)
    {
      cout << arr[i] << " " << endl;
    }
  int sum = 0;
  for (int i = 0; i < size; i++)
    {
      sum = sum + arr[i];
    }
  cout << "The sum of Array is " << sum << endl;

  int even = 0;
  for (int i = 0; i < size; i++)
    {
      if (arr[i] % 2 == 0)
	{
	  even = even + 1;
	  //cout<<arr[i]<<"is an even number"<<endl;

	}
    }
  cout << "Total number of even elements " << even << endl;
  int odd = 0;
  for (int i = 0; i < size; i++)
    {
      if (arr[i] % 2 != 0)
	{
	  odd = odd + 1;
	  //cout<<arr[i]<<"is an odd number"<<endl;
	}
    }
  cout << "Total number of odd elements " << odd << endl;
}

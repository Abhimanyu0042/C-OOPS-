
#include <iostream>
using namespace std;

class Matrix
{
  int mat[3][3];
public:
  void set ()
  {
    int i, j;
    for (i = 0; i <= 2; i++)
      {
	for (j = 0; j <= 2; j++)
	  {
	    cin >> mat[i][j];
	  }
      }
  }
  Matrix operator+ (Matrix m2)
  {
    int i, j;
    Matrix m3;
    for (i = 0; i <= 2; i++)
      {
	for (j = 0; j <= 2; j++)
	  {
	    m3.mat[i][j] = mat[i][j] + m2.mat[i][j];
	  }
      }
    return m3;
  }
  void display ()
  {
    int i, j;
    for (i = 0; i <= 2; i++)
      {
	for (j = 0; j <= 2; j++)
	  {
	    cout << mat[i][j] << " ";
	  }
	cout << endl;
      }
  }
};

int
main ()
{
  Matrix m1, m2, m3, m4;
  m1.set ();
  m2.set ();
  m3 = m1 + m2;
  m3.display();
  return 0;
}

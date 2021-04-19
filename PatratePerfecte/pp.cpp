#include <iostream>
#include <math.h>
using namespace std;

// ses citeste un numar n de la tastatura
// sa se afiseze toate numerele patrate perfecte mai mici sau egale decat n
// [5.6] = 5
// floor(5.6) = 5
// ceil(5.6) = 6

int main()
{
  int n;
  cin >> n;
  // for(int i = 0; i <= n; i++)
  // {
  //   if(sqrt(i) == floor(sqrt(i)))
  //   {
  //     cout << i << " ";
  //   }
  // }
  for(int i = 0; i<= sqrt(n); i++)
  {
    cout<< i* i << " ";
  }
  cout << endl;
  return 0;
}

// n = 16
// 4
// 0, 1, 2, 3,  4  // i
// 0, 1, 4, 9, 16  // 
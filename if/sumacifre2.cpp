#include <iostream>
using namespace std;
int main()
{
  // sa se afiseze suma cifrelor lui n (de 2 cifre)
  int n;
  cin >>n;
  cout << n % 10+ n / 10;
  return 0;
}
// 76 -> 13
// % 10
// 76 / 10 -> 7 
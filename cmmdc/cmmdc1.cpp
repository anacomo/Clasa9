#include <iostream>
using namespace std;
int main()
{
  int a, b;
  int a1, b1;
  cin >> a >> b;
  a1 = 1, b1 = b;
  while(a != b)
    if(a > b)
      a = a - b;
    else
      b = b - a;
  cout << a << endl;
  cout << a1 * b1 / a << endl;
  return 0;
}

/*
cmmdc(a, b) * cmmmc(a, b) = a * b
cmmmc(a, b) = a * b / cmmdc

a = 15; b = 25;
a = 15  b = 10;
a = 5;  b = 10;
a = 5;  b = 5;

a = 30; b = 9
a = 21  b = 9
a = 12  b = 9
a = 3   b = 9
a = 3   b = 6
a = 3   b = 3

a = 55  b = 33
a = 22  b = 33
a = 22  b = 11
a = 11  b = 11

*/



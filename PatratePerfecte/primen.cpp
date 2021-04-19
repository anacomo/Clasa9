#include <iostream>
#include <math.h>
using namespace std;

// pentru un numar n, sa se aafiseze numerele prime <= n

int main()
{
  int n;
  cin >> n;
  for(int i = 2; i <= n; i++)
  {
    int x = i;
    bool prim = true;
    for(int d = 2; d <= sqrt(x); d++)
    {
      if(x % d == 0)
        prim = false;
    }

    if(prim == true)
      cout << x << " ";
  }
  cout << endl;
  return 0;
}
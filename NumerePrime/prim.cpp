#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  long long n;
  cin >> n;
  if(n < 2)
  {
    cout << "NU";
    return 0;
  }

  bool prim = 1;
  // algoritmul de numar prim
  int r = sqrt(n);
  for(int i = 2;i <= r; i++)
  {
    if(n % i == 0)
      prim = false;
  }
  // afisare
  if (prim==true)
  cout<<"DA";
  else 
  cout<<"NU";
  return 0;
}



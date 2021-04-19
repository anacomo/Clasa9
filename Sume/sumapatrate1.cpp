#include <iostream>
#include <math.h>
using namespace std;

int main()
{
  long long n, suma = 0;
  cin >> n;
  for(int i = 1; i <= sqrt(n); i++)
  {
    suma = suma + i * i;
  }
  cout << "Rezultatul este "<< suma;
  return 0;
}

// i * i <= n
// i <= sqrt(n)
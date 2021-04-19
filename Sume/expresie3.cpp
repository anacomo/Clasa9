#include <iostream>
using namespace std;
int main()
{
  long long n, suma = 0, semn = 1;
  cin >> n;
  for(long long i = 1; i <= n; i++)
  {
    suma = suma + semn * i * (i + 1);
    semn = semn * (- 1);
  }
  cout << "Rezultatul este " << suma;
  return 0;
}


// S = + 1 * 2 - 2 * 3 + 3 * 4 - ... ± n * (n + 1)

#include <iostream>
using namespace std;

int main()
{
  int n, suma = 0;
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    suma = suma + i * (n - i + 1);
  }
  cout << "Rezultatul este " << suma;
  return 0;
}

// S = 1 * n + 2 * (n - 1)+ 3 * (n - 2) + ... + n * 1 
// n = 5;
// 1 * 5, 2 * 4
#include <iostream>
using namespace std;

int main()
{
  long long n, suma = 0;
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    suma = suma + i * i;
  }
  cout << suma % 10234573;
  return 0;
}


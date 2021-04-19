// Se dă un număr natural n. Afișați în ordine crescătoare numerele naturale pare nenule mai mici sau egale cu n.
#include <iostream>
using namespace std;
int main()
{
  int n, i;
  cin >> n;
  i = 1;
  while(i <= n)
  {
    if(i % 2 == 0)
      cout << i  << " ";
    i++;
  }
  return 0;
}

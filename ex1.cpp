#include <iostream>
using namespace std;
// 327 pbinfo
// Se dă un număr natural n. Afișați în ordine crescătoare primele n numere naturale nenule.
int main()
{
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++)
    cout << i << " ";
  return 0;
}
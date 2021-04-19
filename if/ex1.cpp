#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  //for(int i = 1; i <= n; i++)
  //  cout << i << " ";
  int i = 1; // intializare
  while(i <= n) // stop
  {
    cout << i << " ";
    i++; // pas
  }
  return 0;
}
// 327 pbinfo
// Se dă un număr natural n. Afișați în ordine crescătoare primele n numere naturale nenule.

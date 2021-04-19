// Se dă un număr natural n. Afișați pe o linie primele n numere naturale nenule în ordine crescătoare, iar pe linia următoare aceleași numere, dar în ordine descrescătoare.
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    cout << i << " ";
  }
  cout << endl;
  for(int i = n; i >= 1; i--)
  {
    cout << i << " ";
  }
  return 0;
}
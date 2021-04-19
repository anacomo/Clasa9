// Se dă un număr natural n. Afișați în ordine crescătoare primele n numere naturale pare nenule.
#include <iostream>
using namespace std;
int main()
{
  int n, i;
  cin >> n;
  i = 1;
  while(i <= n )
  {
    cout << i * 2  << " ";
    i++;
  }
  return 0;
}

/*
5
2 4 6 8 10 -> rezultat
1 2 3 4 5 - > index
if(i % 2 == 0)
  cout << i;
*/
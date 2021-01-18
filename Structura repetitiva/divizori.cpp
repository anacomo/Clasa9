#include <iostream>
using namespace std;
int i, n, nr;
int main()
{
  cin >> n;
  for (i=1; i<= n; i++)
  {
      if (n%i == 0)
          nr++;
  }
  cout << nr;
  return 0;
}

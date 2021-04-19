#include <iostream>
using namespace std;
int main()
{
  // 5
  // 9 5 2 6 7
  int n, a;
  int nr = 0;
  cin >> n;
  for(int i = 1; i <= n; i++)
  {
    cin >> a;
    if(a % 2 == 0)
      nr++;
  }
  cout << nr;
  return 0;
}
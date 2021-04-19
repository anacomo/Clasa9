#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long x = 2;
  while(x < LONG_MAX)
  {
    long long sumadiv = 1;
    for(long long d = 2; d <= sqrt(x); d++)
    {
      if(x % d == 0)
      {
        sumadiv = sumadiv + d;
        long long per = x / d;
        sumadiv += per;
      }
    }
    if(sumadiv == x)
    {
      cout << x << endl;
    }
    x++;
  }
  return 0;
}
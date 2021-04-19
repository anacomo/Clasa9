#include <iostream>
#include <math.h>
using namespace std;
int main()
{
  int x;
  cin >> x;
  if(x <= 1)
  {
    cout << "Nu";
    return 0;
  }
  int sumadiv = 1;
  for(int d = 2; d <= sqrt(x); d++)
  {
    if(x % d == 0)
    {
      sumadiv = sumadiv + d;
      int per = x / d;
      sumadiv += per;
    }
  }
  if(sumadiv == x)
  {
    cout << x <<" este perfect" << endl;
  }
  else
  {
    cout << x <<" nu este perfect" << endl;
  }
  return 0;
}
#include<iostream>
using namespace std;
int main()
{
  // se citeste un numar natural n
  // sa se calculeze factorialul lui
  // n! = 1 * 2 * .. * n
  int n;
  int fact = 1;
  cin >> n;
  for(int i = 1; i <= n; i = i + 1)
  {
    fact = fact * i;
  }
  cout << fact << endl;

  return 0;
}
 
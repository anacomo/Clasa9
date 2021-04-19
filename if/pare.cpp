#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int i = 0;
  while (n != 0)
  {
    if (n % 2 == 0)
    {
      i++;
    }
    cin >> n;
  }
  if(i == 0)
    cout << "NU EXISTA";
  else 
    cout << i;
  return 0;
}
// 3 15 7 0
// n = 8
// i = 0
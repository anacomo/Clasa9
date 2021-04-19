// n = 5;
// ####* #### -- 9
// ###** *###
// ##*** **##
// #**** ***#
// ***** ****

// #*******#
// ##*****##
// ###***###
// ####*####

// n * 2 - 1
#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int x = n - 1; // numarul de #-uri
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= x; j++)
    {
      cout << '#';
    }
    for(int j = 1; j <= n - x; j++)
    {
      cout << '*';
    }
    for(int j = 1; j < n - x; j++)
    {
      cout << '*';
    }
    for(int j = 1; j <= x; j++)
    {
      cout << '#';
    }
    x--;
    cout << endl;
  }

  x = 1;
  for(int i = 1; i < n; i++)
  {
    for(int j = 1; j <= x; j++)
    {
      cout << '#';
    }
    for(int j = 1; j <= n - x; j++)
    {
      cout << '*';
    }
    for(int j = 1; j < n - x; j++)
    {
      cout << '*';
    }
    for(int j = 1; j <= x; j++)
    {
      cout << '#';
    }
    cout << endl;
    x++;
  }
  return 0;
}
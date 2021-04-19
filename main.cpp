#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  bool prim = 1; // presupun ca n e prim
  int i = 2; // inceput-> o sa il modific pana la n-1
  // verificam daca n este prim
  while(i < n) // conditia de oprire
  {
    if(n % i == 0) // daca i este divizor al lui n
      {
        // n nu este prim
        prim = 0;
      }
    i++; // i = i + 1; pasul
  }
if(prim == true)
  cout << "prim\n";
else
  cout << "nu e prim\n";


  /* 
  n = 5
  i = 2 3 4
  consola : 3 2 1
  */
  return 0;
}

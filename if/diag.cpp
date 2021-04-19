#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float B, b, l;
    cin >> B >> b >> l;
    float a = (B - b) / 2;
    float d = l * l + (b + a) * (b + a);
    d = sqrt(d);
    cout << d;
    return 0;
}
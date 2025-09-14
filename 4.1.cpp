#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
using namespace std;
int main()
{
    setlocale(0, "");
    int r, v;
    cin >> r;
    v = 4.0 / 3.0 * M_PI * r * r * r;
    cout << "Объем шара: " << v;
    return 0;
}
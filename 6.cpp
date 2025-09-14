#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double r, h, v, s;
    cout << "Введите r = ";
    cin >> r;
    cout << "Введите h = ";
    cin >> h;
    v = M_PI * r * r * h;
    s = 2 * M_PI * r * (r + h);
    cout << "объем = " << v << endl;
    cout << "площадь поверхности = " << s;
    return 0;
}
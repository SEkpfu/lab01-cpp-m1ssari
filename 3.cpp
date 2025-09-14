#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    max(max(a, b), c) % 2 == 0 ? cout << a * a << endl
                                      << b * b << endl
                                      << c * c
                               : cout << a + b;
}
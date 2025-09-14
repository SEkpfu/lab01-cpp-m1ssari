#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double x, y, ans1, ans2, ctg, ln1, ln2;
    cin >> x >> y;
    ctg = 1.0 / tan(3 * x);
    ln1 = log(exp(cos(x)));
    ln2 = log(exp(1 + x * x));
    ans1 = exp(x) - (y * y + 12 * x * y - 3 * x * x) / (18 * y - 1);
    ans2 = 2 * ctg - (ln1 / ln2);
    ans1 < 0 ? cout << fixed << setprecision(5) << ans1 << endl : cout << fixed << setprecision(5) << "+" << ans1 << endl;
    ans2 < 0 ? cout << uppercase << scientific << ans2 << endl : cout << uppercase << scientific << "+" << ans2 << endl;
    return 0;
}

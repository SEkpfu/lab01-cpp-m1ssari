#include <iostream>
using namespace std;
int main()

{
    setlocale(0, "");
    int c, f, k;
    cin >> c;
    f = 9.0 / 5.0 * c + 32.0;
    k = c + 273.0;
    cout << "Температура по шкале Фаренгейта: " << f << endl;
    cout << "Температура по шкале Кельвина: " << k;
    return 0;
}
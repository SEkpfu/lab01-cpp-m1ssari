#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
int main()
{
    setlocale(0, "");
    double h, r, vk, vc;
    std::cout << "Введите радиус: ";
    std::cin >> r;
    std::cout << "Введите высоту: ";
    std::cin >> h;
    vc = M_PI * r * 2 * h;
    vk = 1.0 / 3.0 * M_PI * r * r * h;
    std::cout << "Объем цилиндра: " << vc << std::endl;
    std::cout << "Объем конуса: " << vk;
    return 0;
}

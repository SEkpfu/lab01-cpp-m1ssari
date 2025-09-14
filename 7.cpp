
#include <iostream>

int main()
{
    int r, h, c; // радиус, длина окружности, площадь
    std::cin >> r;
    std::cin >> h;
    // c = (r+h)%10
    c = (r % 10 + h % 10);
    std::cout << c;
    return 0;
}

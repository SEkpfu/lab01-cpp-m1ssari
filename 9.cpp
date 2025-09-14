
#include <iostream>

int main()
{
    int a, b, c, d;
    std::cin >> a;
    b = a / 3600;
    c = (a - b * 3600) / 60;
    d = a - (c * 60) - (b * 3600);
    std::cout << b << "h" << std::endl;
    std::cout << c << "m" << std::endl;
    std::cout << d << "s";
    return 0;
}

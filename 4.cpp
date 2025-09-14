#include <iostream>
int main()
{
    int x, x2, x3, x4, x5;
    std::cout << "x = ";
    std::cin >> x;
    x2 = x * x;
    x3 = x * x2;
    x4 = x * x3;
    x5 = x * x4;
    std::cout << "y = " << (7 * x5 + x4 - 2 * x3 + 11 * x2 - 2 * x + 3);
    return 0;
}
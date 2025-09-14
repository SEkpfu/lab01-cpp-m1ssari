#include <iostream>
int main()
{
    int a, b, d;
    std::cout << "Введите трехзначное число: ";
    std::cin >> a;
    b = a % 10;
    d = a / 10;
    std::cout << b << d;
    return 0;
}

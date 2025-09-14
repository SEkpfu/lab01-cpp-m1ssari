#include <iostream>
int main()
{
    setlocale(0, "");
    double a, b;
    std::cin >> a >> b;
    std::cout << "Сумма: " << a + b << std::endl;
    std::cout << "Разность: " << a - b << std::endl;
    std::cout << "Произведение: " << a * b;
    return 0;
}
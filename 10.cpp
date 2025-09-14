
#include <iostream>

int main()
{
    int a, b, c, v, s;
    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    v = a * b * c;
    s = 2 * (a * b + b * c + a * c);
    std::cout << "v: " << v << std::endl;
    std::cout << "s: " << s << std::endl;
    return 0;
}

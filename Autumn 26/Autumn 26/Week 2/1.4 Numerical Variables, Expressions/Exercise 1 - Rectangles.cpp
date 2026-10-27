#include <iostream>

int main() {
    double l1, l2, p, a;
    std::cout << "Enter first side length: " << std::endl;
    std::cin >> l1;
    std::cout << "Enter second side length: " << std::endl;
    std::cin >> l2;
    p = 2 * (l1 + l2);
    a = l1 * l2;
    std::cout << "Perimeter: " << p << std::endl;
    std::cout << "Area: " << a << std::endl;
}
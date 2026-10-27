#include <iostream>

void peri_area(double x, double y, double& p, double& a) {
    p = 2*(x+y);
    a = x*y;
}

int main() {
    double x, y, p, a;
    std::cout << "Enter the two side lengths: " << std::endl;
    std::cin >> x >> y;
    peri_area(x, y, p, a);
    std::cout << "Perimeter: " << p << std::endl;
    std::cout << "Area: " << a << std::endl;
}
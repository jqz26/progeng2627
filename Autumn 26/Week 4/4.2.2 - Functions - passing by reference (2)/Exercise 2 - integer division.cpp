#include <iostream>

void int_div (int n, int d, int& q, int& r) {
    q = n/d;
    r = n%d;
}

int main() {
    int a, b, q, r;
    std::cout << "Enter the dividend: " << std::endl;
    std::cin >> a;
    std::cout << "Enter the divisor: " << std::endl;
    std::cin >> b;
    int_div (a, b, q, r);
    std::cout << "The result is " << q << " remainder " << r << std::endl;
}
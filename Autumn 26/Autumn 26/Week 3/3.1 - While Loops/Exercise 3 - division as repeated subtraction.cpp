#include <iostream>

int main() {
    int n, d, q, r;
    std::cout << "Enter the dividend: " << std::endl;
    std::cin >> n;
    std::cout << "Enter the divisor: " << std::endl;
    std::cin >> d;
    q = 0;
    r = n;
    while (r >= d) {
        r = r - d;
        q = q + 1;
    }
    std::cout << "Quotient: " << q << std::endl;
    std::cout << "Remainder: " << r << std::endl;
}

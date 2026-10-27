#include <iostream>

int main() {
    double a, n, i, t;
    a = 0;
    i = 0;
    t = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    while (n != 0) {
        i = i + 1.0;
        t = t + n;
        a = t / i;
        std::cout << "The average so far is: " << std::endl;
        std::cout << a << std::endl;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> n;
    }
}
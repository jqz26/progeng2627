#include <iostream>

int main() {
    int n, f, c;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    f = 1;
    c = n;
    for (int i = 0; i < n; i++) {
        f = f * c;
        c = c - 1;
    }
    std::cout << "Factorial: " << f << std::endl;
}
#include <iostream>

int main() {
    int s, n;
    s = 0;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n;
    while (n != 0) {
        s = s + n;
        std::cout << "The sum so far is: " << std::endl;
        std::cout << s << std::endl;
        std::cout << "Enter a number: " << std::endl;
        std::cin >> n;
    }
}
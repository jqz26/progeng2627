#include <iostream>

int main() {
    double bp, ex, eu;
    std::cout << "Enter value in British Pounds: " << std::endl;
    std::cin >> bp;
    std::cout << "Enter exchange rate from Pounds to Euros: " << std::endl;
    std::cin >> ex;
    eu = bp * ex;
    std::cout << "Value in Euros: " << eu << std::endl;
}
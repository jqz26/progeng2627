#include <iostream>

int main() {
    double tC, tF;
    std::cout << "Enter temperature in degress Celsius: " << std::endl;
    std::cin >> tC;
    tF = 9.0/5.0 * tC + 32.0;
    std::cout << "Temperature in degrees Fahrenheit: " << tF << std::endl;
}
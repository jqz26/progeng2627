#include <iostream>
#include <cmath>

int main() {
    double m, h, bmi;
    std::cout << "Enter your weight in kilograms: " << std::endl;
    std::cin >> m;
    std::cout << "Enter your height in meters: " << std::endl;
    std::cin >> h;
    bmi = m / (h * h);
    std::cout << "BMI: " << (round(bmi * 10.0) / 10.0) << std::endl;
}
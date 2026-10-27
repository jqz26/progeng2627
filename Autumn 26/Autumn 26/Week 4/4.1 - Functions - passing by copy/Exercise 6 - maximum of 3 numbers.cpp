#include <iostream>

double max (double in1, double in2, double in3) {
    double max;
    max = in3;
    if (in2 > max) {
        max = in2;
    }
    if (in1 > max) {
        max = in1;
    }
    return max;
}

int main() {
    double n1, n2, n3;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> n1;
    std::cout << "Enter a second number: " << std::endl;
    std::cin >> n2;
    std::cout << "Enter a third number: " << std::endl;
    std::cin >> n3;
    std::cout << "The largest number is: " << max(n1, n2, n3) << std::endl;
}
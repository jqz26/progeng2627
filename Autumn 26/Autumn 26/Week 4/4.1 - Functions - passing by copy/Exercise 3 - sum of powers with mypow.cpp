#include <iostream>

double mypow(double base, int exp){
    double result; 
    result = 1;
    for (int i = 0; i < exp; i++) {
        result = result * base;
    }
    return result;
}

int main() {
    double x, s;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter the power: ";
    std::cin >> n;
    s = 0;
    for (int i = 1; i < (n + 1); i++) {
        s = s + mypow(x, i); 
    }
    std::cout << "The sum of powers from x^1 to x^n is: " << s << std::endl;
}
#include <iostream>
#include <cmath>

int main(){
    double x, s;
    int n;
    std::cout << "Enter a number: ";
    std::cin >> x;
    std::cout << "Enter the power: ";
    std::cin >> n;
    s = 0;
    for (int i = 1; i < (n + 1); i++) {
        s = s + std::pow(x, i); 
    }
    std::cout << "The sum of powers from x^1 to x^n is: " << s << std::endl;
}
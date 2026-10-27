#include <iostream>

double mypow(double base, int exp){
    double result; 
    result = 1;
    for (int i = 0; i < exp; i++) {
        result = result * base;
    }
    return result;
}

int main () {
    double b, n, s;
    std::cout << "Enter a base: " << std::endl;
    std::cin >> b;
    std::cout << "Enter n: " << std::endl;
    std::cin >> n;
    s=0;
    for (int i = 1; i < (n+1); i++) {
        s = s + mypow(b, i);
    }
    std::cout << "The sum is: " << s << std::endl;
}
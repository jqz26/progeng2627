#include <iostream>

double mypow(double base, int exp){
    double result; 
    result = 1;
    if (exp >= 0) {
        for (int i = 0; i < exp; i++) {
            result = result * base;
        }
    }
    else {
        for (int i = 0; i < (-exp); i++) {
            result = result/base;
        }
    }
    return result;
}

int main(){
    double b;
    int e; 
    std::cout << "Enter a number: "; 
    std::cin >> b;
    std::cout << "Enter the power: ";
    std::cin >> e;
    std::cout << "The result is: " << mypow(b, e) << std::endl;
}
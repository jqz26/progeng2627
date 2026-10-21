#include <iostream>

int main(){
    double x, n, p;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> x;
    std::cout << "Enter the power: " << std::endl;
    std::cin >> n;
    p = x;
    for(int i = 1; i < n; i++){
        p = p * x;
    }
    std::cout << "Result: " << p << std::endl;
}
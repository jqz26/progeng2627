#include <iostream>

int smallest_factor(int n) {
    int cf;
    for(cf = 2; cf < n; cf++){
        if( (n % cf) == 0){ 
            return cf;
        }
    }
    cf = 1;
    return cf;
}

int main() {
    int a, f;
    std::cout << "Enter a number: " << std::endl;
    std::cin >> a;
    f = 0;
    f = smallest_factor(a);
    if (f == 1){
        std::cout << "The number is prime" << std::endl;
    }
    else {
        std::cout << "The smallest prime factor is " << f << std::endl;
    }
}
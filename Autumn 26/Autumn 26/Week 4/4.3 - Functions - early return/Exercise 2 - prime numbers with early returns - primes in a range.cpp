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
    int a, b;
    std::cout << "Enter a range: " << std::endl;
    std::cin >> a >> b;
    std::cout << "The primes in this range are: " << std::endl;
    for (int i = a; i <= b; i++) {
        if (smallest_factor(i) == 1 && i > 1) {
            std::cout << i << " ";
        }

    }
}
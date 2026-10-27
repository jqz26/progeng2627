#include <iostream>

int main(){
    int n, s, m;
    std::cout << "Enter a natural number: " << std::endl;
    std::cin >> n;
    m = n;
    if ( n%2 == 0) {
        n = n / 2;
    }
    else {
        n = 3*n + 1;
    }
    if (n > m) {
        m = n;
    }
    s = 1;
    std::cout << n << "\t";
    while (n != 1) {
        if ( n%2 == 0) {
            n = n / 2;
        }
        else {
            n = 3*n + 1;
        }
        std::cout << n << "\t";
        s++;
        if (n > m) {
            m = n;
        }
    }
    std::cout << std::endl;
    std::cout << "Number of steps: " << s << std::endl;
    std::cout << "Maximum number: " << m << std::endl;
}
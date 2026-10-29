#include <iostream>
#include <vector>

int main() {
    int n, temp, t;
    std::vector<double> v;
    std::cout << "Enter the size of the vector: " << std::endl;
    std::cin >> n;
    std::cout << "Enter " << n << " numbers" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "Enter a number: " << std::endl;
    std::cin >> t;
    std::cout << "The numbers less than " << t << " are: " << std::endl;
    for (int i = 0; i < n; i++) {
        if (v[i] < t) {
            std::cout << v[i] << "\t";
        }
    }
}
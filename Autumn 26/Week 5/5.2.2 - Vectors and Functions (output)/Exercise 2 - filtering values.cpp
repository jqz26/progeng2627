#include <iostream>
#include <vector>

void filter_v(const std::vector<double>& vin, double t, std::vector<double>& vout) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] < t) {
            vout.push_back(vin[i]);
        }
    }
}

int main() {
    int a, u, temp;
    std::vector<double> v, vl;
    std::cout << "Enter the number of elements in the vector: " << std::endl;
    std::cin >> a;
    std::cout << "Enter " << a << " elements: " << std::endl;
    for (int i = 0; i < a; i++) {
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "Enter a number: " << std::endl;
    std::cin >> u;
    filter_v(v, u, vl);
    std::cout << "The elements in the vector less than " << u << " are: " << std::endl;
    for (int i = 0; i < vl.size(); i++) {
        std::cout << vl[i] << "\t";
    }
}
#include <iostream>
#include <vector>

void append_vectors(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& vout) {
    for (int i = 0; i < vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }
    for (int i = 0l; i < vin2.size(); i++) {
        vout.push_back(vin2[i]);
    }
}

int main() {
    int a, temp;
    std::vector<int> vin1, vin2, vc;
    std::cout << "Enter the number of elements in vector 1: " << std::endl;
    std::cin >> a;
    std::cout << "Enter " << a << " elements: " << std::endl;
    for (int i = 0; i < a; i++) {
        std::cin >> temp;
        vin1.push_back(temp);
    }
    std::cout << "Enter the number of elements in vector 2: " << std::endl;
    std::cin >> a;
    std::cout << "Enter " << a << " elements: " << std::endl;
    for (int i = 0; i < a; i++) {
        std::cin >> temp;
        vin2.push_back(temp);
    }
    append_vectors(vin1, vin2, vc);
    std::cout << "The combined vector is: " << std::endl;
    for (int i = 0; i < vc.size(); i++) {
        std::cout << vc[i] << "\t";
    }
}
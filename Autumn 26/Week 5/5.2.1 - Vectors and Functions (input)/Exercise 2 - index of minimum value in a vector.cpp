#include <iostream>
#include <vector>

int min_vector_element(const std::vector<double>& vin) {
    int min;
    min = vin[0];
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] < min) {
            min = vin[i];
        }
    }
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == min) {
            return i;
            i == vin.size();
        }
    }
    return -1;
}

int main() {
    int n;
    double temp;
    std::vector<double> v;
    std::cout << "Enter the number of elements in the vector: " << std::endl;
    std::cin >> n;
    std::cout << "Enter " << n << " elements: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "The index of smallest element is: " << min_vector_element(v) << std::endl;
}
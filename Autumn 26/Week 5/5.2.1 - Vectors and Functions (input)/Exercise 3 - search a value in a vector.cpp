#include <iostream> 
#include <vector>

int search_vector(int n, const std::vector<int>& vin) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == n) {
            return i;
            i = vin.size();
        }
    }
    return -1;
}

int main() {
    int a, b;
    double temp;
    std::vector<int> v;
    std::cout << "Enter the number of elements in the vector: " << std::endl;
    std::cin >> a;
    std::cout << "Enter " << a << " elements: " << std::endl;
    for (int i = 0; i < a; i++) {
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "Enter number to be searched: " << std::endl;
    std::cin >> b;
    if (search_vector(b, v) == -1) {
        std::cout << "Not found" << std::endl;
    }
    else {
        std::cout << b << " is found at " << search_vector(b, v) << std::endl;
    }
}
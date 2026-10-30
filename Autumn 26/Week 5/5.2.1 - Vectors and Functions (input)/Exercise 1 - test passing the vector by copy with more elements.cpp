#include <iostream>
#include <vector>

double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    int n, temp;
    std::vector<double> v;
    std::cout << "Enter the number of elements in vector: " << std::endl;
    std::cin >> n;
    std::cout << "Enter " << n << " elements: " << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}
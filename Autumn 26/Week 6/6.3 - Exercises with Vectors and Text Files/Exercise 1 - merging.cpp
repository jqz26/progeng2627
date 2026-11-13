#include <iostream> 
#include <vector>

void merge_vectors_int(const std::vector<int>& vin1, const std::vector<int>& vin2, std::vector<int>& merged) {
    int a = 0;
    int b = 0;
    for (int i = 0; i < (vin1.size() + vin2.size()); i++) {
        
        while (a < vin1.size() && b < vin2.size()) {
            if (vin1[a] < vin2[b]) {
                merged.push_back(vin1[a]);
                if (a < vin1.size()) {
                    a++;
                }
            }
            else {
                merged.push_back(vin2[b]);
                if (b < vin2.size()) {
                    b++;
                }
            }
            
        }

        if (a == vin1.size()) {
            while (b < vin2.size()) {
                merged.push_back(vin2[b]);
                b++;
            }
        }
        if (b == vin2.size()) {
            while (a < vin1.size()) {
                merged.push_back(vin1[a]);
                a++;
            }
        }
        
    }
}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;
    std::vector<int> out2;
    std::vector<int> out3;
    std::vector<int> v3;
    std::vector<int> v4;
    std::vector<int> v5;
    std::vector<int> v6;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);
    for (int i = 0; i < out.size(); i++) {
        std::cout << out[i] << "\t";
    }
    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v3 = {2, 2, 3, 5, 6, 7};
    v4 = {4, 6, 10};
    expected_output = {2, 2,3, 4, 5, 6, 6, 7, 10};

    merge_vectors_int(v3, v4, out2);
    for (int i = 0; i < out2.size(); i++) {
        std::cout << out2[i] << "\t";
    }
    if(out2 == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }

    v6 = {2, 2, 3};
    v5 = {4, 6, 10};
    expected_output = {2, 2, 3, 4, 6, 10};

    merge_vectors_int(v5, v6, out3);
    for (int i = 0; i < out3.size(); i++) {
        std::cout << out3[i] << "\t";
    }
    if(out3 == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void key(std::vector<std::string>& v1, std::vector<std::string>& v2) {
    std::ifstream infile;
    infile.open("key.txt");
    std::string tmp;
    while (infile >> tmp) {
        if ((v1.size() + v2.size()) % 2 == 0) {
            v1.push_back(tmp);
        }
        else {
            v2.push_back(tmp);
        }
    }
    infile.close();
}

void translate(std::vector<std::string> v1, std::vector<std::string> v2, std::vector<std::string>& v3) {
    std::ifstream infile;
    std::string tmp;
    infile.open("coded.txt");
    while (infile >> tmp) {
        bool change = false;
        for (int i = 0; i < v1.size(); i++) {
            if (tmp == v1[i]) {
                v3.push_back(v2[i]);
                change = true;
            }
        }
        if (!change) {
            v3.push_back(tmp);
        }
    }
    infile.close();
}

int main() {
    std::ifstream infile;
    std::ofstream outfile;
    std::vector<std::string> v1;
    std::vector<std::string> v2;
    std::vector<std::string> v3;
    std::string tmp;
    key(v1, v2);
    translate(v1, v2, v3);

    outfile.open("decoded.txt");
    for (int i = 0; i < v3.size(); i++) {
        outfile << (v3[i] + " ");
    }
    outfile.close();
    infile.open("decoded.txt");
    while(infile >> tmp) {
        std::cout << tmp << " ";
    }
    std::cout << std::endl;
    infile.close();
}
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

void convert(std::vector<std::string>& v, std::string file) {
    std::ifstream infile;
    std::string tmp;
    infile.open(file);
    while(infile >> tmp) {
        v.push_back(tmp);
    }
    infile.close();
}

int main() {
    std::ifstream infile;
    std::vector<std::string> v;
    std::vector<std::string> v2;
    std::vector<std::string> v3;
    std::string tmp;
    convert(v, "unicorn.txt");
    convert(v2, "word.txt");
    for (int i = 0; i < v2.size(); i++) {
        int c = 0;
        for (int j = 0; j < v.size(); j++) {
            if (v[j] == v2[i]) {
                c++;
            }
        }
        v3.push_back(v2[i] + ":" + std::to_string(c));
    }
    std::ofstream outfile;
    outfile.open("wordcount.txt");
    for (int i = 0; i < v3.size(); i++) {
        outfile << v3[i] << std::endl;
    }
    outfile.close();
    infile.open("wordcount.txt");
    while(infile >> tmp) {
        std::cout << tmp << std::endl;
    }
    infile.close();
}
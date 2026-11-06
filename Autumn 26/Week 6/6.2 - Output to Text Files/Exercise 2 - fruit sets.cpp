#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

int search_vector(std::string s, const std::vector<std::string>& vin) {
    for (int i = 0; i < vin.size(); i++) {
        if (vin[i] == s) {
            return i;
        }
    }
    return -1;
}

void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for (int i = 0; i < vin1.size(); i++) {
        vout.push_back(vin1[i]);
    }
    for (int i = 0; i < vin2.size(); i++) {
        if (search_vector(vin2[i], vin1) == -1) {
            vout.push_back(vin2[i]);
        }
    }
}

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout) {
    for (int i = 0; i < vin2.size(); i++) {
        if (search_vector(vin2[i], vin1) != -1) {
            vout.push_back(vin2[i]);
        }
    }
}

int main() {
    std::vector<std::string> list1;
    std::vector<std::string> list2;
    std::vector<std::string> union_list;
    std::vector<std::string> intersection_list;
    std::ifstream infile; 
    std::string inputfilename;
    std::cout << "Enter name of first list file: " << std::endl;

    std::cin >> inputfilename;

    infile.open(inputfilename);

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        list1.push_back(tmp); 
    }

    infile.close(); 

    std::cout << "Enter name of second list file: " << std::endl;

    std::cin >> inputfilename;

    infile.open(inputfilename);

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    while(infile >> tmp){
        list2.push_back(tmp); 
    }

    infile.close(); 

    union_vector(list1, list2, union_list);
    intersection_vector(list1, list2, intersection_list); 

    std::ofstream outfile;

    outfile.open("union.txt");
    if (!outfile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < union_list.size(); i++) {
        outfile << union_list[i] << std::endl;
    }
    outfile.close();

    outfile.open("intersection.txt");
    if (!outfile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < intersection_list.size(); i++) {
        outfile << intersection_list[i] << std::endl;
    }
    outfile.close();

    std::cout << "The union list is: " << std::endl;

    infile.open("union.txt");
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
    infile.close();

    std::cout << "The intersection list is: " << std::endl;

    infile.open("intersection.txt");
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
    infile.close();
}
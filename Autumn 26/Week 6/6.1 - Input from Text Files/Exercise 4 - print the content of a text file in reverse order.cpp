#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    std::string filename;
    std::cout << "Enter the name of the file: ";
    std::cin >> filename;
    infile.open(filename);
    std::vector<std::string> v;

    if(!infile.is_open()){ 
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    std::string tmp;

    while(infile >> tmp){
        v.push_back(tmp); 
        // instead of printing the values
        // as in the example above
        // first we store them in a vector
    }

    infile.close(); 
    std::cout << "The text in reverse order are: ";
    for(int i = v.size() - 1; i >= 0; i--){
        std::cout << v[i] << "\t";
    }
    std::cout << std::endl;
}
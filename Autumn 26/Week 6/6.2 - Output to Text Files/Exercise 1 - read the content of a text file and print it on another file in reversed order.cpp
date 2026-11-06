#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>

int main(){
    std::ifstream infile; 
    std::string inputfilename;
    // as usual not a special name
    std::cout << "enter name of input file" << std::endl;

    std::cin >> inputfilename;

    infile.open(inputfilename);
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

    // TODO: print the content of v in reversed order
    // onto a different text file
    std::ofstream outfile;
    std::string outputfilename;
    // as usual not a special name
    std::cout << "enter name of output file" << std::endl;

    std::cin >> outputfilename;

    outfile.open(outputfilename);
    if (!outfile.is_open()) {
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = v.size() - 1; i >= 0; i--) {
        outfile << v[i] << std::endl;
    }
    outfile.close();
    infile.open(outputfilename);
    while(infile >> tmp){
        std::cout << tmp << std::endl;
    }
    infile.close();
}
#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ofstream outfile;
    std::ifstream infile;
    // outfile is not a special name

    outfile.open("output.txt");
    // this will associate outfile to a file called output.txt
    // if the file doesn't exist it is created
    // if the file already exists it will be overwritten!

    if(!outfile.is_open()){
        std::cout << "error opening file" << std::endl;
        return EXIT_FAILURE;
    }

    outfile << "hello" << std::endl;
    // prints on the output file
    std::string tmp;
    infile.open("output.txt");
    infile >> tmp;
    std::cout << tmp << std::endl;
    outfile.close();

}
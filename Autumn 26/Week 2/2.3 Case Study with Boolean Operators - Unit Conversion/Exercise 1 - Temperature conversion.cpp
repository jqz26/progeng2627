#include <iostream>
#include <string>

int main(){

    double t_in, t_out;
    bool valid;
    std::string unit_in, unit_out;

    std::cin >> t_in >> unit_in;

    if(unit_in == "C" or unit_in == "c"){
        unit_out = "F";
        t_out = t_in * 9.0/5.0 + 32.0;
        valid = true;
    }
    else if(unit_in == "F" or unit_in == "f"){
        unit_out = "C";
        t_out = (t_in -32.0) * 5.0/9.0;
        valid = true;
    }
    else{
        
        valid = false;
    }

    if(valid){
        std::cout << t_out << " " << unit_out << std::endl;
    }
    else{
        std::cout << "Invalid unit" << std::endl;
    }
}
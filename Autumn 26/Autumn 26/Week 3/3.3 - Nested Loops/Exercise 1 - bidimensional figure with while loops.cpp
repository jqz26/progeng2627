#include <iostream>

int main(){
    int n;
    std::cin >> n;

    int c2 = 0;
    while(c2 < n){
        c2++;
        int c = 0;
        // the following loop draws one row
        while(c < n){
            std::cout << "*"; 
            c++;
        }
        std::cout << std::endl;
    }

}
#include <iostream>

int main() {
    int g;
    std::string in, in2;
    std::cout << "Think of a number between 1 and 20" << std::endl;
    g = 10;
    std::cout << "Is the number " << g << "?" << std::endl;
    std::cin >> in;
    while (in != "yes" && in != "Yes" && in != "y" && in != "Y") {
        std::cout << "Is the number greater or less than " << g << "?" << std::endl;
        std::cin >> in2;
        if (in2 == "greater" || in2 == "Greater" || in2 == "g" || in2 == "G") {
            g++;
        } else if (in2 == "less" || in2 == "Less" || in2 == "l" || in2 == "L") {
            g--;
        }
        std::cout << "Is the number " << g << "?" << std::endl;
        std::cin >> in;
    }
    std::cout << "Yay!" << std::endl;
}
#include <iostream>
#include <string>

//Exercise: hello everyone
int main() {
    std::cout << "hello" << std::endl;
    std::string user_name;
    std::string user_surname;
    std::cout << "what is your name?" << std::endl;
    std::cin >> user_name;
    std::cout << "what is your surname?" << std::endl;
    std::cin >> user_surname;
    std::cout << "hello\n" << user_name << " " << user_surname << std::endl;
}


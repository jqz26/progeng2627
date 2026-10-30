#include <iostream>
#include <vector>

int main() {
    int n, s, temp, c;
    c = 0;
    std::vector<int> v;
    std::vector<int> o;
    std::cout << "please enter n: " << std::endl;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        std::cout << "please enter a number: " << std::endl;
        std::cin >> temp;
        v.push_back(temp);
    }
    std::cout << "please enter s: " << std::endl;
    std::cin >> s;
    for (int i = 0; i < n; i++) {
        if (v[i] == s) {
            o.push_back(i);
            c++;
        }
    }
    if (c == 0) {
        std::cout << "There are no occurrences of " << s << std::endl;
    }
    else {
        std::cout << "There are " << c << " occurrences of " << s << " at indices: " << std::endl;
        for (int i = 0; i < o.size(); i++) {
            std::cout << o[i] << "\t";
        }
    }
}
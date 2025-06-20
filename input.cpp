#include <iostream>
#include <string>
#include <sstream>

enum { max_size_ar = 20 };

// test data 9; 11; 0; -9; 3; 100; 8; 7; 4

int main() {
    short data[max_size_ar];
    std::string input_str;
    std::getline(std::cin, input_str);

    std::istringstream iss(input_str);
    char delimiter = ';';
    size_t count = 0;

    while (count < max_size_ar && std::getline(iss, input_str, delimiter)) {
        data[count++] = std::stoi(input_str);
    }

    for (size_t i = 0; i < count; ++i) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}

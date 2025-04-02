#include <iostream>
#include <string>

#include "my-alg.hpp"

int main(int argc, char** argv) {
    if (argc != 3) return 1;
    int first = std::stoi(argv[1]);
    int second = std::stoi(argv[2]);
    std::cout << isFirstMax(first, second) << '\n';
}
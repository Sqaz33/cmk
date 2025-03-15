#include "bin-search-lib.hpp"

#include <vector>
#include <string>
#include <iostream>

int main(int argc, char** argv) {
    if (argc > 2) std::cout << "Too many arguments\n";
    int target = 0;
    if (argc == 2) target = std::stoi(argv[1]);
    std::vector v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto [acc, idx] = lib::binary_search(v, target);
    if (acc) {
        std::cout << "Index: " << idx << '\n';
        return 0;
    }
    std::cout << "Not Found\n";
}
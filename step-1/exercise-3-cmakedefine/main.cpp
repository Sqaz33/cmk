#include <iostream>

#include "config.hpp"

int main() {
#ifdef VERSION_ENABLE
    std::cout << VERSION_STRING  << '\n';
#endif // ENABLE_VERSION
}
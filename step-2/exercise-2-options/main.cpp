#include <iostream>

int main() {
#ifdef MY_DEF 
    std::cout << "MY_DEF\n";
#else
    std::cout << "Hi There!\n";
#endif // MY_DEF
}
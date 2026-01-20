#include <iostream>

namespace first {
    int a = 13;
}
namespace second {
    int a = 7;
}
int main() {
    int a = 20; // local variable
    std::cout << "Local  a: " << a << std::endl;
    std::cout << "First  a: " << first::a << std::endl;
    std::cout << "Second a: " << second::a << std::endl;
    return 0;
}
#include <iostream>

// cout << (extraction operator)
// cin  >> (insertion operator)


int main() {

    std::string name;
    std::cout << "Enter your name: ";
    std::cin >> name;

    std::string age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    std::cout << "Hello " << name << " you are " << age << " years old." << std::endl;

    return 0;
}
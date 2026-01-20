#include <iostream>

int main() {
    int age;
    std::cout << "Enter your age ";
    std::cin >> age;

    if(age >=67) {
        std::cout << "you old af";
    }
    else if(age >= 18) {
        std::cout << "welcome to our site";

    }
    else if(age <=0) {
        std::cout << "are you stupid ?";  
    }

    else {
        std::cout << ".... off";
    }

    return 0;
}
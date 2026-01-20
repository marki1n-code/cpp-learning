#include <iostream>

int main () {

    int grade;
    std::cout << "Enter ypur grade (0-100)\n";
    std::cin >> grade;

    grade >= 51 ? std::cout << "You pass " : std::cout << "You fail ";

    return 0;
}
#include <iostream>

int main() {

    // switch = alternative to using many else if statements
    char grade;
    
    std::cout << "Enter your grade ";
    std::cin >> grade;

    switch (grade){
    case 'A':
        std::cout << "You did great! ";     
        break;
    case 'B':
        std::cout << "You did good ";
        break;
    case 'C':
        std::cout << "You did okay ";
        break;
    case 'F':
        std::cout << "You failed ";
        break;

    default:
        std::cout << "Plese enter letter (A-F)";
        break;
    }

    return 0;
}
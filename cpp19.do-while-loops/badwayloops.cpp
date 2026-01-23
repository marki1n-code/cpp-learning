#include <iostream>

int main(){

    int number;


    std::cout << "Enter number >= 0 ";
    std::cin >> number;

    while (number < 0)
    {
        std::cout << "Enter number >= 0 ";
        std::cin >> number;

    }
    

    std::cout << "number " << number;




    return 0;
}
#include <iostream>

int main() {

    /*
    && = check if both conditions are true
    || = at least one of two is true
    !  = reverses the logical state of it's operand    
    */

    int temp;
    std::cout << "Enter temperature ";
    std::cin >> temp;

    if (temp > 0 && temp < 30) //не включає 0 і 30. (temp >= 0 && temp <= 30) включає 0 і 30
    {
        std::cout << "The temperature is ok ";
    }
    else{
        std::cout << "The temperature is bad ";

    }

    return 0;
}
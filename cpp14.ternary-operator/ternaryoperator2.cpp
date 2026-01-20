#include <iostream>

int main () {

    int number;
    std::cout << "Enter number ";
    std::cin >> number;

    number % 2 ? std::cout << "odd" : std::cout << "even"; //типу не ділиться чи ділиться націло на 2

    return 0;
}
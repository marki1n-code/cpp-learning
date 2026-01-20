#include <iostream>

int main() {
    char op; 
    double num1;
    double num2;
    double result;
    
    std::cout << "****** Calculator ******" << std::endl;
    std::cout << "Enter eather ( + - * / ) ";
    std::cin >> op;
    std::cout << "Enter number 1: ";
    std::cin >> num1;
    std::cout << "Enter number 2: ";
    std::cin >> num2;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout << "result " << result << std::endl;
        break;  
    case '-':
        result = num1 - num2;
        std::cout << "result " << result << std::endl;
        break;  
    case '*':
        result = num1 * num2;
        std::cout << "result " << result << std::endl;
        break;  
    case '/':
        result = num1 / num2;
        std::cout << "result " << result << std::endl;
        break;

    default:
        std::cout << "Enter eather ( - + * / )\n";
        break;
    }
    std::cout << "************************\n";  
    return 0;
}
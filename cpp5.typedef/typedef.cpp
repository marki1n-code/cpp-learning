#include <iostream>
#include <vector>

//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main() {

    text_t firstname = "Markiin ";
    number_t age = 18;
    std::cout << firstname << "is " << age << " years old" << std::endl;

    return 0;
}
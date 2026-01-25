#include <iostream>

void happyBirthday();  //If you want to use func after main, you need to declare them first.

int main (){

    happyBirthday();
    happyBirthday();
    happyBirthday();

}

void happyBirthday(){

    std::cout << "Happy birthday to you \n";
    std::cout << "Happy birthday to you \n";
    std::cout << "Happy birthday Dear it person \n";
    std::cout << "Happy birthday to you \n\n";
}
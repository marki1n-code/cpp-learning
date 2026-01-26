#include <iostream>


int myNum = 3; //global variable (better  to avoid them)

void printNum();

int main (){
    
    int myNum = 1; //local variable
    printNum();
    std::cout << myNum << '\n';
    std::cout << ::myNum << '\n';//for printing global variable ::scope resolution operator
    return 0;
}

void printNum() {
    int myNum = 2; //local variable
    std::cout << myNum << '\n';
}
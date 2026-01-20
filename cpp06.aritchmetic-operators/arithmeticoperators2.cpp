#include <iostream>

int main() {

    int students = 18;

    //students--;
    //students-=1;
    
    //students = students / 2;
    //students /= 2;

    //students = students * 3;
    //students *= 3;

    int remainder = students % 5; //remainder (залишок / остача) від ділення на 5

    std::cout << remainder << std::endl;

    return 0;
}
#include <iostream>
#include <cmath>
int main () {


    double a;
    double b;
    double c;

    std::cout << "Enter side a ";
    std::cin >> a;
    std::cout << "Enter side b ";
    std::cin >> b;
    a = pow(a, 2);  // а в квадраті
    b = pow (b, 2); // б в квадраті
    c = sqrt(a + b);// корінь з суми квадратів
    std::cout << "Hypotenuse c = " << c << std::endl;


    return 0;
}
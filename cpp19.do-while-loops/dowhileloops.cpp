#include <iostream>

int main(){

    int number;

    //do while loops = do some block of code first 
    //                 than repeat again if condition is true 

    do{
        std::cout << "Enter number >= 0 ";
        std::cin >> number;

    }while(number < 0);
    

    std::cout << "number " << number;

    return 0;
}
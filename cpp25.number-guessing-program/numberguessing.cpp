#include <iostream>

int main (){

    int num;
    int guess;
    int tries = 0;

    srand (time(NULL));
    num = (rand() % 100) + 1;

    std::cout << "******** Number guessing program ********\n";

    do{
        std::cout << "Enter a guess between 1-100 \n";
        std::cin >> guess;
        tries++;

        if (guess > num)
        {
            std::cout << "Enter lower number \n";
            
        } else if (guess < num){
                std::cout << "Enter greater number \n";
        }
            else{
                std::cout << "Great sucsess " << tries << std::endl;
            }
        


    }while (guess != num);
    
    std::cout << "*****************************************";


    return 0;
}
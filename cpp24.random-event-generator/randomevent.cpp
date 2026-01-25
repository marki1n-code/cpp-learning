#include <iostream>
#include <ctime>

int main (){

    //типу рандом   

    srand(time(0));

    int randNum = (rand() % 5) + 1;

    switch (randNum)
    {
    case 1: std::cout << "You win diamond ";
        break;
    case 2: std::cout << "You win gold";
        break;
    case 3: std::cout << "You win silver ";
        break;
    case 4: std::cout << "You win bronse ";
        break;
    case 5: std::cout << "You win iron ";
        break;

    }

    return 0;
}
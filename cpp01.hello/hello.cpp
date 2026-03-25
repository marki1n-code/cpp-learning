#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    /* це звісно не сішка але нічого

    бла-бла-бла
    */
    cout << "\033[31mHello, World!\033[0m" << std::endl;
    cout << "\033[32mHello, World!\033[0m" << std::endl;
    cout << "\033[34mHello, World!\033[0m" << std::endl;
    cout << "Привіт, Світ!" << std::endl;

    return 0;
}
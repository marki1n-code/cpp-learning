#include <iostream>

using namespace std;

int main () {

    string name;

    cout << "Enter your name: \n";
    getline(cin, name);

    if (name.empty())
    {
        cout << "You didn't enter your name ";
    }
    else{
        cout << "Hello " << name;
    }
    



    return 0;
}
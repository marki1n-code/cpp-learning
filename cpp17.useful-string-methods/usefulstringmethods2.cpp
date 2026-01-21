#include <iostream>

using namespace std;

int main () {

    string name;

    cout << "Enter your name for email: \n";
    getline(cin, name);

    name.append("@gmail.com ");
   
    cout << "Your username now is " << name;
    
    



    return 0;
}
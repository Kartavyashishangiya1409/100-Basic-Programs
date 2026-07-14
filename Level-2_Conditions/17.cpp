// Write a program to read a character and check whether it is an alphabet, digit or special symbol.

#include <iostream>
using namespace std;

int main () {
    
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'Z' && ch <= 'Z')) 
    {
        cout << ch << " is an Alphabet";
    }
    else if ((ch >= '0' && ch <= '9'))
    {
        cout << ch << " is an Digit";
    }
    else 
    {
        cout << "Entered character is an Special Character";
    }
}
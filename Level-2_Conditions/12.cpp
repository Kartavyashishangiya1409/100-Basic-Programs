// Write a program to read a number and check whether it is positive, negative or zero.

#include <iostream>
using namespace std;

int main () {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n < 0) {
        cout << n << " is a Negative Number" << endl;
    } else if (n > 0)
    {
        cout << n << " is a Positive Number" << endl;
    } else {
        cout << "It is Zero" << endl;
    }
    
}
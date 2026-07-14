// Write a program to read a number and check whether it is even or odd.

#include <iostream>
using namespace std;

int main () {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << n << " is an Even Number" << endl;
    } else {
        cout << n << " is an Odd Number" << endl;
    }
}
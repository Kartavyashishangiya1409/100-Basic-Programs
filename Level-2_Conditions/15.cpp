// Write a program to read a year and check whether it is a leap year or not.

#include <iostream>
using namespace std;

int main () {

    int year;

    cout << "Enter a year: ";
    cin >> year;

    if (year % 4 == 0) {
        cout << year << " is a Leap Year" << endl;
    } else {
        cout << year << " is not a Leap Year" << endl;
    }
}
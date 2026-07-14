// Write a program to read the age of a person and check whether they are eligible to vote.

#include <iostream>
using namespace std;

int main () {

    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age > 18)
    {
        cout << "You are eligible to give a vote" << endl;
    } else {
        cout << "You are not eligible to give a vote" << endl;
    }
    
}
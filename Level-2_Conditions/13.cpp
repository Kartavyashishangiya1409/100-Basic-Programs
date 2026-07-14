// Write a program to read three numbers and find the largest among them.

#include <iostream>
using namespace std;

int main () {

    int a, b, c;

    cout << "a: ";
    cin >> a;

    cout << "b: ";
    cin >> b;

    cout << "c: ";
    cin >> c;

    if (a > b && a > c)
    {
        cout << endl << "A is the largest number" << endl;
    } else {
        if (b > c)
        {
            cout << endl << "B is the largest number" << endl;
        } else {
            cout << endl << "C is the largest number" << endl;
        }   
    }
    
}
// Write a program to read three numbers and find the smallest among them.

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

    if (a < b && a < c)
    {
        cout << endl << "A is the Smallest number" << endl;
    } else {
        if (b < c)
        {
            cout << endl << "B is the Smallest number" << endl;
        } else {
            cout << endl << "C is the Smallest number" << endl;
        }   
    }
    
}
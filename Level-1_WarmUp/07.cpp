// Write a program to swap two numbers without using a third variable.

#include <iostream>
using namespace std;

int main () {

    int a = 67, b = 29;

    cout << "Before ==> a: " << a << " & b: " << b << endl;
    
    a = a + b; // a = 67 + 29 = 96
    b = a - b; // b = 96 - 29 = 67
    a = a - b; // a = 96 - 67 = 29
    
    cout << "After ==> a: " << a << " & b: " << b << endl;

}
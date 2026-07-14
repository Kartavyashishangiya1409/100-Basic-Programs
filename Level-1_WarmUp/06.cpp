// Write a program to swap two numbers using a third variable.

#include <iostream>
using namespace std;

int main () {

    int a = 23, b = 45, c;

    cout << "Before ==> a: " << a << " & b: " << b << endl;
    
    c = a;
    a = b;
    b = c;
    
    cout << "After ==> a: " << a << " & b: " << b << endl;

}
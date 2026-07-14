// Write a program to read the length and breadth of a rectangle and print its area and perimeter.

#include <iostream>
using namespace std;

int main () {
    float l, b;

    cout << "Enter length of rectangle: ";
    cin >> l;

    cout << "Enter breadth of rectangle: ";
    cin >> b;

    cout << endl << "Area of Rectangle is: " << l * b << endl;
    cout << "Perimeter of Rectangle is: " << 2 * (l + b) << endl;
}
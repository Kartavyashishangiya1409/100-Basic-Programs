// Write a program to read the radius of a circle and print its area and circumference.

#include <iostream>
using namespace std;

int main () {
    float PIE = 3.14, r;

    cout << "Enter radius of Circle: ";
    cin >> r;

    cout << endl << "Area of Circle is: " << PIE * r * r << endl;
    cout << "Circumference of Circle is: " << 2 * PIE * r << endl;
}
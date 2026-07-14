// Write a program to read a temperature in Celsius and convert it to Fahrenheit.

#include <iostream>
using namespace std;

int main () {

    int c;

    cout << "Enter Temperature (°C): ";
    cin >> c;

    cout << c << "°C = " << (c * 1.8) + 32 << "F";

}
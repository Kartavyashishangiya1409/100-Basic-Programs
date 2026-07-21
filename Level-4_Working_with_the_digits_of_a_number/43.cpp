// Write a program to find the sum of the first and last digit of a number n.

#include <iostream>
using namespace std;

int main () {

    long long num;
    cout << "number: ";
    cin >> num;

    long long working = num;
    long long divisor = 1;
    int count = 0;

    while (working > 0)
    {
        working /= 10;
        divisor *= 10;
        count++;
    }

    divisor /= 10;
    working = num;

    int firstDigit = working / divisor;
    int lastDigit = working % 10;

    cout << "Sum of the first and last digit of a number " << num << " is: " << firstDigit + lastDigit << endl;
    
}
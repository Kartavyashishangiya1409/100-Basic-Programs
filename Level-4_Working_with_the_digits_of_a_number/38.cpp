// Write a program to find the largest digit in a number n.

#include <iostream>
using namespace std;

int main () {

    long long n;
    cout << "n: ";
    cin >> n;
    
    long long x = n, y = n;
    int count = 0;

    while (n > 0)
    {
        n /= 10; 
        count++;
    }
    
    n = x;

    int largest = 0;

    while (count > 0)
    {
        n %= 10;
        if (largest < n)
        {
            largest = n;
        }
        n = x / 10;
        x = n;
        count--;
    }

    cout << "largest digit in a number " << y << " is: " << largest << endl;
    
}
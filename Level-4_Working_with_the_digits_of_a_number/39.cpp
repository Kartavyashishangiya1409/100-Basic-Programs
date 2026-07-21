// Write a program to find the smallest digit in a number n.

#include <iostream>
using namespace std;

int main () {

    long long n;
    cout << "n: ";
    cin >> n;

    long long x = n, y = n;
    int count = 0, smallest = n % 10;

    while (n > 0)
    {
        n /= 10;
        count++;
    }

    n = x;

    while (count > 0)
    {
        n %= 10;
        if (smallest > n)
        {
            smallest = n;
        }
        n = x / 10;
        x = n;
        count--;
    }
    
    cout << "Smallest digit in a number " << y << " is: " << smallest << endl;

}
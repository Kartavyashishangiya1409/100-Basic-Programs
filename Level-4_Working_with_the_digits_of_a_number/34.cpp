// Write a program to display all the digits of a number n (one per line).

#include <iostream>
using namespace std;

int main () {

    long long n; 
    int count = 0;
    cout << "n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Number: " << n << endl;
        cout << "Invalid, Please enter an natural number";
        return 0;
    }

    long long x = n, y = n, m = 1;

    while (n > 0)
    {
        n = n / 10;
        m *= 10;
        count++;
    }

    m = m / 10;

    cout << "All the digits of the number " << y << " are: " << endl;
    while (count > 0)
    {
        x = y;
        x = x / m;
        y = y % m;
        m = m / 10;
        count--;
        cout << x << endl;
    }

}
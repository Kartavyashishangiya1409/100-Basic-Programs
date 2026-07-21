// Write a program to find the sum of all digits of a number n.

#include <iostream>
using namespace std;

int main () {

    long long n;
    cout << "n: ";
    cin >> n;

    long long x = n;
    int sum = 0;

    while (n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }

    cout << "Sum of all digits of a number " << x << ": " << sum << endl;
    
}
// Write a program to find the product of all digits of a number n.

#include <iostream>
using namespace std;

int main () {

    long long n;
    cout << "n: ";
    cin >> n;

    long long x = n, prod = 1;

    while (n > 0)
    {
        prod *= n % 10;
        n /= 10;
    }
    
    cout << "Product of all digits of a number " << x << " is: " << prod << endl;
}
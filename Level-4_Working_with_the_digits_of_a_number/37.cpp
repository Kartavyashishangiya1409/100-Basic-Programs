// Write a program to reverse a number n.

#include <iostream>
using namespace std;

int main () {

    long long n;
    cout << "n: ";
    cin >> n;
    
    long long x = n;

    int count = 0;

    while (n > 0)
    {
        count++;
        n /= 10;
    }

    n = x;

    cout << "count: " << count << endl;

    while (count > 0) {
        n %= 10;
        cout << n << " ";
        n = x / 10;
        x = n;
        count--;
    }
    
}
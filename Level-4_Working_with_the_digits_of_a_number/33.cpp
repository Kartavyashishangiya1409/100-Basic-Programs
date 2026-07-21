// Write a program to count the number of digits in a number n.

#include <iostream>
using namespace std;

int main () {

    int n, count = 0;
    cout << "n: ";
    cin >> n;

    int x = n;

    while (n > 0)
    {
        n = n / 10;
        count++;
    }

    cout << "Number of digits in " << x << " is: " << count << endl;
    
}
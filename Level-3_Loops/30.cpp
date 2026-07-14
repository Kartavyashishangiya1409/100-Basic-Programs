// Write a program to display all multiples of a number m up to n terms.

#include <iostream>
using namespace std;

int main () {

    int m, n;

    cout << "Find multiples of: ";
    cin >> m;

    cout << "Multiples of " << m << " upto: ";
    cin >> n;

    cout << "Multiples of " << m << " upto " << n << " are: ";

    for (int i = 1; i <= n; i++)
    {
        if (i % m == 0)
        {
            cout << i << " ";
        }
    }
    
}
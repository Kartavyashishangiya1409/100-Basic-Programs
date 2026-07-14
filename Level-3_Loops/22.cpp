// Write a program to display all natural numbers from 1 to n in reverse order.

#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "n: ";
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
    
}
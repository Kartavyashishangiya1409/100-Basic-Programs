// Write a program to find the product of all natural numbers from 1 to n (factorial of n).

#include <iostream>
using namespace std;

int main () {

    int n, fact = 1;
    cout << "n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        fact *= i;
    }

    cout << "product of all natural numbers from 1 to " << n << " is: " << fact << endl;
    
}
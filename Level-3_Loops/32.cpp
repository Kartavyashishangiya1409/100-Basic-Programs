// Write a program to display all numbers from 1 to n that are divisible by 3 or 5.

#include <iostream>
using namespace std;

int main () {

    int n;
    cout << "n: ";
    cin >> n;

    cout << "All the numbers from 1 to " << n << " that are divisible by 3 or 5 are: ";

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            cout << i << " ";
        }
    }
    
}
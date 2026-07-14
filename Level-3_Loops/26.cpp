// Write a program to find the sum of all even numbers from 1 to n.

#include <iostream>
using namespace std;

int main () {

    int n, sum = 0;
    cout << "n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
    }
    
    cout << "Sum of all even natural numbers from 1 to " << n << " is: " << sum << endl; 

}
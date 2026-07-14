// Write a program to count how many numbers from 1 to n are divisible by 3.

#include <iostream>
using namespace std;

int main () {

    int n, count = 0;
    cout << "n: ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (i % 3 == 0)
        {
            count++;
        }
    }
    
    cout << count << " numbers from 1 to " << n << " are divisible by 3" << endl;

}
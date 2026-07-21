// Write a program to check whether a number n is a palindrome (reads the same reversed).

#include <iostream>
using namespace std;

int main () {

    long long n;
    cout << "n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid!, enter an positive integer";
        return 0;
    }

    long long working = n, original = n, z, reverse = 0, m = 1;
    int count = 0; 

    while (n > 0)
    {
        n /= 10;
        count++;
        m *= 10;
    }

    m /= 10;
    n = working;

    while (count > 0)
    {
        n %= 10;
        z = n * m;
        reverse += z;
        m /= 10;
        n = working / 10;
        working /= 10;
        count--;
    }
    
    if (reverse == original)
    {
        cout << "number " << original << " is a palindrome" << endl;
    } else {
        cout << "number " << original << " is not a palindrome" << endl;
    }

}
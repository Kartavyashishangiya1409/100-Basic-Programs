// Write a program to count the number of even digits and odd digits in a number n.

#include <iostream>
using namespace std;

int main () {

    long long n;
    cout << "n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid!, Enter an positive integer";
        return 0;
    }
    

    int countEven = 0, countOdd = 0;
    long long x = n, y = n;

    while (n > 0)
    {
        n %= 10;
        if (n % 2 == 0)
        {
            countEven++;
        } else {
            countOdd++;
        }
        n = x / 10;
        x = n;
    }

    cout << "Number of Even digits in a number " << y << " are: " << countEven << endl;
    cout << "Number of Odd digits in a number " << y << " are: " << countOdd << endl;
    
}
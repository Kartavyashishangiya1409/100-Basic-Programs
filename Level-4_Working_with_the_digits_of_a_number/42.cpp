// Write a program to replace all zeros in a number n with the digit 5.


// Solution A

// #include <iostream>
// using namespace std;

// int main () {

//     long long n;
//     cout << "n: ";
//     cin >> n;

//     if (n <= 0)
//     {
//         cout << "Invalid!, Enter an positive integer";
//         return 0;
//     }
    
//     long long working = n, original = n, m = 1, digitsAdder = 0, newNum;
//     int count = 0;

//     while (working > 0)
//     {
//         working /= 10;
//         m *= 10;
//         count++;
//     }

//     m /= 10;
//     working = n;

//     while (working > 0)
//     {
//         if (working / m == 0)
//         {
//             newNum = 5 * m;
//         } else {
//             newNum = (working / m) * m;
//         }
        
//         digitsAdder += newNum;
//         m /= 10;
//         working -= newNum;
//         cout << endl << "working: " << working << endl;
//         cout << "digitsAdder: " << digitsAdder << endl;
//     } 
    
// }


// Solution B

#include <iostream>
using namespace std;

int main () {

    cout << "Solution B" << endl;
    long long n;
    cout << "n: ";
    cin >> n;

    if (n <= 0)
    {
        cout << "Invalid!, Enter an positive integer";
        return 0;
    }
    
    
    long long working = n, original = n, m = 1, reverse = 0, digits;
    int zeroCount = 0;

    while (working > 0)
    {
        working /= 10;
        m *= 10;
    }
    m /= 10;
    working = n;

    while (working > 0)
    {
        working %= 10;
        if (working == 0)
        {
            working = 5;
            zeroCount++;
        }
        digits = working * m;
        reverse += digits;
        m /= 10;
        working = n / 10;
        n /= 10;
    } 

    long long revWorking = reverse;

    if (zeroCount != 0)
    {
        cout << "number " << original << " after replacing all zeros with the digit 5 is: ";

        while (revWorking > 0)
        {
            revWorking %= 10;
            cout << revWorking;
            reverse /= 10;
            revWorking = reverse;
        }

    } else {
        cout << "Number " << original << " does not contain any zero in it.";
    }
    
}
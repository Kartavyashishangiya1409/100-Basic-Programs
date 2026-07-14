// Write a program to read the marks of 5 subjects and print the total and average.

#include <iostream>
using namespace std;

int main () {

    int s1, s2, s3, s4, s5;

    cout << "Marks of Subject-1: ";
    cin >> s1;

    cout << "Marks of Subject-2: ";
    cin >> s2;

    cout << "Marks of Subject-3: ";
    cin >> s3;

    cout << "Marks of Subject-4: ";
    cin >> s4;

    cout << "Marks of Subject-5: ";
    cin >> s5;

    cout << endl << "Total: " << s1 + s2 + s3 + s4 + s5 << " Out of 500 Marks" << endl;
    cout << "Average Marks: " << (s1 + s2 + s3 + s4 + s5) / 5 << endl;
    
}
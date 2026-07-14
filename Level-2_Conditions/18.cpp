// Write a program to read the marks of a student and print the grade (A/B/C/D/Fail).

#include <iostream>
using namespace std;

int main () {

    int s1, s2, s3;

    cout << "Marks of Subject-1: ";
    cin >> s1;

    cout << "Marks of Subject-2: ";
    cin >> s2;

    cout << "Marks of Subject-3: ";
    cin >> s3;

    int total = s1 + s2 + s3;
    int percentage = total / 3;

    if (percentage >= 80 && percentage <= 100)
    {
        cout << "Student has scored A Grade" << endl;
    }
    else if (percentage >= 65 && percentage <= 79)
    {
        cout << "Student has scored B Grade" << endl;
    }
    else if (percentage >= 50 && percentage <= 64)
    {
        cout << "Student has scored C Grade" << endl;
    }
    else if (percentage >= 34 && percentage <= 49)
    {
        cout << "Student has scored D Grade" << endl;
    }
    else
    {
        cout << "Student has been Failed in the Examination" << endl;
    }
    
}
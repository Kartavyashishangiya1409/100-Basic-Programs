// Write a program to read seconds and convert them into hours, minutes and seconds.

#include <iostream>
using namespace std;

int main () {
    int s, hours, minutes, seconds;

    cout << "Enter total number of seconds: ";
    cin >> s;

    // 60sec -> 1min
    // 60min -> 1hr

    // 3600sec -> 60min -> 1hr

    hours = s / 3600;

    int remSec = s - (hours * 3600);

    minutes = remSec / 60;
    seconds = remSec - (minutes * 60);

    cout << endl << "Total Time => " << hours << " hr : " << minutes << " min : " << seconds << " sec" << endl;

}
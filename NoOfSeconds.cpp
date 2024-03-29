#include <iostream>
using namespace std;

int main()
{

    float seconds;
    float minutes = 0, hours = 0, days = 0;

    cout << "Enter Number of Seconds: ";
    cin >> seconds;

    if (seconds < 1)
    {
        cout << "Invalid Input for Seconds [Time Cannot be 0 or Negative]" << endl;
    }

    else if (seconds >= 60 && seconds < 3600)
    {
        minutes = seconds / 60;
        cout << "The Number of Minute(s) in " << seconds;
        cout << " Seconds is/are " << minutes << endl;
    }

    else if (seconds >= 3600 && seconds < 86400)
    {
        hours = seconds / 3600;
        cout << "The Number of Hour(s) in " << seconds;
        cout << " Second is/are " << hours << endl;
    }

    else if (seconds >= 86400)
    {
        days = seconds / 86400;
        cout << "The Number of Day(s) in " << seconds;
        cout << " Seconds is/are " << days << endl;
    }

    return 0;
}
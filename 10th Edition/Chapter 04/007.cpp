
/*
Time Calculator
*/

#include <iostream>
#include <iomanip>  // for setprecision() and fixed
using namespace std;

int main()
{
    int seconds;
    float num_mins;

    cout << "\nEnter a number of seconds: ";
    cin >> seconds;

    cout << setprecision(2) << fixed;

    if (seconds <= 59)
    {
        cout << seconds << " is less that 60 seconds." << endl;
    }
    else if (seconds >= 60 && seconds < 3600)
    {
        num_mins = seconds / 60.0;
        cout << num_mins << " minutes in "<< seconds << " seconds" << endl;
    }
    else if (seconds >= 3600 && seconds < 86400)
    {
        num_mins = seconds / 3600.0;
        cout << num_mins << " hours in " << seconds << " seconds" << endl;
    }
    else if (seconds >= 86400)
    {
        num_mins = seconds / 86400.0;
        cout << num_mins << " days in " << seconds << " seconds" << endl;
    }

    cout << endl;

    return 0;
}

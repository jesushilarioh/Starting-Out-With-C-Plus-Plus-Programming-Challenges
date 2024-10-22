#include <iostream>
#include <iomanip>  // setprecision() and fixed
using namespace std;

int main()
{
    // Variables
    int seconds;
    float num_mins;

    // Ask the user to enter a number of seconds
    cout << "\nEnter a number of seconds: ";
    cin >> seconds;

    // Format decimal percision at 2 decimal places.
    cout << setprecision(2) << fixed;

    // calculate
    if (seconds <= 59)
    {
        cout << seconds;
        cout << " is less that 60 seconds." << endl;
    }
    else if (seconds >= 60 && seconds < 3600)
    {
        num_mins = seconds / 60.0;
        cout << num_mins << " minutes in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 3600 && seconds < 86400)
    {
        num_mins = seconds / 3600.0;
        cout << num_mins << " hours in ";
        cout << seconds << " seconds" << endl;
    }
    else if (seconds >= 86400)
    {
        num_mins = seconds / 86400.0;
        cout << num_mins << " days in ";
        cout << seconds << " seconds" << endl;
    }

    // Formatting
    cout << endl << endl;

    // Terminate program
    return 0;
}

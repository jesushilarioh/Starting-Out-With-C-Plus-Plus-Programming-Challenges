/********************************************************************
*
*	07. Time Calculator
*
*       Write a program that asks the user to enter a number of seconds.
*
*       • There are 60 seconds in a minute. If the number of seconds
*           entered by the user is greater than or equal to 60, the
*           program should display the number of minutes in that many
*           seconds.
*
*       • There are 3,600 seconds in an hour. If the number of
*           seconds entered by the user is greater than or equal to
*           3,600, the program should display the number of hours in that many
*           seconds.
*
*       • There are 86,400 seconds in a day. If the number of seconds
*           entered by the user is greater than or equal to 86,400, the
*           program should display the number of days in that many seconds.
*
* 	Jesus Hilario Hernandez
* 	February 15, 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>  // For setprecision() & fixed manipulator

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
        cout << seconds << " is less that 60 seconds." << endl;
    else if (seconds >= 60 && seconds < 3600)
    {
        num_mins = seconds / 60.0;
        cout << num_mins << " minutes in " << seconds << " seconds" << endl;
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

    // Format a line break
    cout << endl;

    // Terminate program
    return 0;
}

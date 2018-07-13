/********************************************************************
*
*	  006. Distance Traveled
*
*           The distance a vehicle travels can be calculated as follows:
*
*           distance = speed * time
*
*           For example, if a train travels 40 miles per hour for 3
*           hours, the distance traveled is 120 miles.
*
*           Write a program that asks the user for the speed of a
*           vehicle (in miles per hour) and how many hours it has
*           traveled. The program should then use a loop to
*           display the distance the vehicle has traveled for
*           each hour of that time period. Here is an example of the
*           output:
*
*           What is the speed of the vehicle in mph? 40
*           How many hours has it traveled? 3
*           Hour Distance Traveled
*           --------------------------------
*               1       40
*               2       80
*               3       120
*
*           Input Validation: Do not accept a negative number for
*           speed and do not accept any value less than 1 for time
*           traveled.
*
* 	Jesus Hilario Hernandez
* 	March 20th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    int speed,          // User input (speed)
        hours_traveled, // User input (hours_traveled)
        distance = 0;   // Calculate (distance) per hour - accumulator
    // Ask for (speed) of vehicle in mph
    cout << "What is the speed? ";
    cin >> speed;

    // Validate (speed)
    if (speed > 0)
    {
        // Ask how many hours traveled (hours_traveled)
        cout << "How many hours traveled? ";
        cin >> hours_traveled;

        // Validate (hours_traveled)
        if (hours_traveled >= 1)
        {
            // Display (distance) per hour
            cout << "Hour   Distance Traveled" << endl;
            cout << "------------------------" << endl;

            // for loop / user controlled loop to display (distance) per hour
            for (int i = 0; i < hours_traveled; i++)
            {
                distance += speed;
                cout << "   " << (i + 1) << "   " << distance << endl;
            }
        }
        // Validation error (speed)
        else
        {
            cout << "Error. Hours traveled must be 1 or greater."   << endl;
            cout << "Rerun the program and try again."              << endl;
        }

    }
    // Validation error (hours_traveled)
    else
    {
        cout << "Error. Speed must be greater than 0." << endl;
        cout << "Rerun the program and try again."     << endl;
    }

    // Terminate program
    return 0;
}

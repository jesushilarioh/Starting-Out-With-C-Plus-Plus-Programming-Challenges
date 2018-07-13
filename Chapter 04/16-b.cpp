/********************************************************************
*
*	16-b. Running the Race
*
*       Write a program that asks for the names of three runners
*       and the time it took each of them to finish a race. The
*       program should display who came in first, second, and third
*       place.
*
*       Input Validation: Only accept positive number for the times.
*
* 	Jesus Hilario Hernandez
* 	February 20, 2018
*
********************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Constant Variables
    const int NUM_OF_RUNNERS = 3;   // Number of runners and times

    // Variables & Arrays
    string runners[NUM_OF_RUNNERS];              // An array of 3 runners
    int    runners_time[NUM_OF_RUNNERS];         // An array of 3 runner times

    // Ask for names of three runners & times for each to finish race
    cout << "\nEnter the names and times for 3 runners. " << endl;

    for (int i = 0; i < NUM_OF_RUNNERS; i++)
    {
        cout << "Runner #" << i + 1 << ": ";
        getline(cin, runners[i]);

        cout << "Runner #" << i + 1 << " time: ";
        cin >> runners_time[i];

        cin.ignore();
    }

    // Format line break
    cout << endl;

    // Input Valdation for positive number only
    if (runners_time[0] < 0 || runners_time[1] < 0 || runners_time[2] < 0)
    {
        cout << "We're sorry. Only times 0 or greater will be accepted." << endl;
        cout << "Rerun the program and try again." << endl;
    }
    else
    {
        // Decision statement for runner placement by time
        if (runners_time[0] > runners_time[1] && runners_time[0] > runners_time[2])
        {
            cout << "First Place: " << runners[0] << " @ " << runners_time[0] << endl;

            if (runners_time[1] > runners_time[2])
            {
                cout << "Second Place: " << runners[1] << " @ " << runners_time[1] << endl;
                cout << "Third Place: " << runners[2] << " @ " << runners_time[2] << endl;
            }
            else
            {
                cout << "Second Place: " << runners[2] << " @ " << runners_time[2] << endl;
                cout << "Third Place: " << runners[1] << " @ " << runners_time[1] << endl;
            }
        }
        else if (runners_time[1] > runners_time[2] && runners_time[1] > runners_time[0])
        {
            cout << "First Place: " << runners[1] << " @ " << runners_time[1] << endl;

            if (runners_time[2] > runners_time[0])
            {
                cout << "Second Place: " << runners[2] << " @ " << runners_time[2] << endl;
                cout << "Third Place: " << runners[0] << " @ " << runners_time[0] << endl;
            }
            else
            {
                cout << "Second Place: " << runners[0] << " @ " << runners_time[0] << endl;
                cout << "Third Place: " << runners[2] << " @ " << runners_time[2] << endl;
            }
        }
        else if (runners_time[2] > runners_time[1] && runners_time[2] > runners_time[0])
        {
            cout << "First Place: " << runners[2] << " @ " << runners_time[2] << endl;
            if (runners_time[0] > runners_time[1])
            {
                cout << "Second Place: " << runners[0] << " @ " << runners_time[0] << endl;
                cout << "Third Place: " << runners[1] << " @ " << runners_time[1] << endl;
            }
            else
            {
                cout << "Second Place: " << runners[1] << " @ " << runners_time[1] << endl;
                cout << "Third Place: " << runners[0] << " @ " << runners_time[0] << endl;
            }
        }
    }

    // Format line break
    cout << endl;

    // Terminate program
    return 0;
}

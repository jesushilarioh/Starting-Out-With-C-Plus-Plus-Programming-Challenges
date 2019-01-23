/********************************************************************
*
*	16. Running the Race
*
*       Write a program that asks for the names of three runners
*       and the time it took each of them to finish a race. The
*       program should display who came in first, second, and third
*       place.
*
*       Input Validation: Only accept positive number for the times.
*
* 	Jesus Hilario Hernandez
* 	January 22, 2019
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    string runner_1,
           runner_2,
           runner_3;
    
    int runner_1_time = 0,
        runner_2_time = 0,
        runner_3_time = 0;

    cout << "\nEnter the first name of runner #1: ";
    cin >> runner_1;

    cout << "\nHow much time did if take for "
         << runner_1
         << " to finish: ";
    cin >> runner_1_time;

    cout << "\nEnter the first name of runner #2: ";
    cin >> runner_2;

    cout << "\nHow much time did if take for "
         << runner_2
         << " to finish: ";
    cin >> runner_2_time;

    cout << "\nEnter the first name of runner #3: ";
    cin >> runner_3;
    
    cout << "\nHow much time did if take for "
         << runner_3
         << " to finish: ";
    cin >> runner_3_time;

    if (runner_1_time < 0 || 
        runner_2_time < 0 || 
        runner_3_time < 0)
    {
        cout << "Error. Runner times must be\n"
             << "0 or greater.\n"
             << "Rerun the program and try again." 
             << endl;
    }
    else
    {
        if (runner_1_time > runner_2_time)
        {
            if (runner_1_time > runner_3_time)
            {
                cout << "\nFirst Place: " 
                     << runner_1 << " @ " 
                     << runner_1_time 
                     << endl;

                if (runner_2_time > runner_3_time)
                {
                    cout << "Second Place: " 
                         << runner_2 << " @ " 
                         << runner_2_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner_3 << " @ " 
                         << runner_3_time 
                         << endl;
                }
                else
                {
                    cout << "Second Place: " 
                         << runner_3 << " @ " 
                         << runner_3_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner_2 << " @ " 
                         << runner_2_time 
                         << endl;
                }
            }
        }
        else if (runner_2_time > runner_3_time)
        {
            if (runner_2_time > runner_1_time)
            {
                cout << "\nFirst Place: " 
                     << runner_2 << " @ " 
                     << runner_2_time 
                     << endl;

                if (runner_3_time > runner_1_time)
                {
                    cout << "Second Place: " 
                         << runner_3 << " @ " 
                         << runner_3_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner_1 << " @ " 
                         << runner_1_time 
                         << endl;
                }
                else
                {
                    cout << "Second Place: " 
                         << runner_1 << " @ " 
                         << runner_1_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner_3 << " @ " 
                         << runner_3_time 
                         << endl;
                }
            }
        }
        else if (runner_3_time > runner_1_time)
        {
            if (runner_3_time > runner_2_time)
            {
                cout << "\nFirst Place: " 
                     << runner_3 << " @ " 
                     << runner_3_time 
                     << endl;
                if (runner_1_time > runner_2_time)
                {
                    cout << "Second Place: " 
                         << runner_1 << " @ " 
                         << runner_1_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner_2 << " @ " 
                         << runner_2_time 
                         << endl;
                }
                else
                {
                    cout << "Second Place: " 
                         << runner_2 << " @ " 
                         << runner_2_time 
                         << endl;
                    cout << "Third Place: " 
                         << runner_1 << " @ " 
                         << runner_1_time 
                         << endl;
                }
            }
        }
    }

    cout << endl;

    return 0;
}
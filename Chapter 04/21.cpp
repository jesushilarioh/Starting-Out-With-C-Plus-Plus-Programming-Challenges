/********************************************************************
*
*	21. The Speed of Sound in Gases
*
*       When sound travels through a gas, its speed depends
*       primarily on the density of the medium. The less dense
*       the medium, the faster the speed will be. The following
*       table shows the approximate speed of sound at 0 degrees
*       centigrade, measured in meters per second, when traveling
*       through carbon dioxide, air, helium, and hydrogen.
*       ==========================================================
*           Medium              Speed (Meters per Second)
*       ----------------------------------------------------------
*           Carbon Dioxide      258.0
*           Air                 331.5
*           Helium              972.0
*           Hydrogen            1,270.0
*       ==========================================================
*       Write a program that displays a menu allowing the user to
*       select one of these four gases. After a selection has been
*       made, the user should enter the number of seconds it took for
*       the sound to travel in this medium from its source to the
*       location at which it was detected. The program should then
*       report how far away (in meters) the source of the sound was
*       from the detection location.
*
*       INPUT VALIDATION: Check that the user has selected
*       one of the available menu choices. Do not accept
*       times less than 0 seconds or more than 30 seconds.
*
* 	Jesus Hilario Hernandez
* 	February 21, 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    char user_selection;
    int travel_time;

    // Display menu / receive user selection
    cout << "=========================" << endl;
    cout << "    Medium               " << endl;
    cout << "-------------------------" << endl;
    cout << "    A. Carbon Dioxide    " << endl;
    cout << "    B. Air               " << endl;
    cout << "    C. Helium            " << endl;
    cout << "    D. Hydrogen          " << endl;
    cout << "=========================\n" << endl;
    cin >> user_selection;

    switch (user_selection)
    {
        case 'a':
        case 'A':

        case 'b':
        case 'B':

        case 'c':
        case 'C':

        case 'd':
        case 'D':

            // Ask user to enter number of seconds it took for.
            cout << "\nEnter number of seconds it " << endl;
            cout << "took for the sound to travel. ";
            cin >> travel_time;

            // Error check within range 0 and 30.
            if (travel_time < 0 || travel_time > 30)
            {
                cout << "\nWe're sorry. Number of seconds must " << endl;
                cout << "be within 0 and 30 seconds." << endl << endl;
            }

            // Display how far away source of sound was from location
            else
            {

                cout << "\nThrough ";

                if (user_selection == 'a' || user_selection == 'A')
                {
                    travel_time *= 258.0;
                    cout << "Carbon Dioxide ";
                }
                else if (user_selection == 'b' || user_selection == 'B')
                {
                    travel_time *= 331.5;
                    cout << "Air ";
                }
                else if (user_selection == 'c' || user_selection == 'C')
                {
                    travel_time *= 972.0;
                    cout << "Helium ";
                }
                else if (user_selection == 'd' || user_selection == 'D')
                {
                    travel_time *= 1270.0;
                    cout << "Hydrogen ";
                }

                cout << "the source \nof sound is " << travel_time;
                cout << " meters away.\n" << endl;
                
            }
            break;

        default:

            // Error check if choice is any letter other than A thru D.
            cout << "\nWe're sorry. A letter between A and D must be\n";
            cout << "chosen. Rerun the program dn try again.\n" << endl;
            break;
    }


    // Terminate program
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    char user_selection;
    int travel_time;

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

            cout << "\nEnter number of seconds it " << endl
                 << "took for the sound to travel. ";
            cin >> travel_time;

            if (travel_time < 0 || travel_time > 30)
            {
                cout << "\nWe're sorry. Number of seconds "       << "must be within 0 and 30 seconds.\n" 
                     << endl;
            }
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

                cout << "the source \nof sound is " 
                     << travel_time << " meters away.\n" 
                     << endl;
            }
            break;
    
        default:
            cout << "\nWe're sorry. A letter between A "
                 << "and D must be\n chosen. Rerun the "
                 << " program dn try again.\n" 
                 << endl;
            break;
    }

    return 0;
}
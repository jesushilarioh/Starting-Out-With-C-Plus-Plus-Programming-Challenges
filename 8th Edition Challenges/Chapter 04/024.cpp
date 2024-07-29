#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float starting_time;

    cout << "\nWhat is the starting time? (HH.MM) \n"
         << "e.g. 07.46 is 7 hours and 46 minutes: ";
    cin >> starting_time;
    cout << endl;

    if (starting_time > 23.59)
    {
        cout << "We're sorry, time must not exceed 23.59.\n";
        cout << "Rerun the program and try again." << endl;
    }
    else 
    {
        if ((starting_time - static_cast<int>(starting_time)) > .59)
        {
            cout << "We're sorry, the last two digits "
                 << "must NOT be\n greater than 59. "
                 << "Rerun the program and\n try again.\n";
        }
        else
        {
            float num_mins;

            cout << "How long did the call last? (HH.MM): ";
            cin >> num_mins;
            cout << endl;

            if((num_mins - static_cast<int>(num_mins)) > .59)
            {
                cout << "We're sorry, the last two digits "
                     << "must NOT be\ngreater than 59. "
                     << "Rerun the program and try again.\n";
            }
            else
            {
                float total_charges;

                cout << setprecision(2) << fixed;
                cout << "Total charges = $";

                if (starting_time >= 00.00 && 
                    starting_time <= 06.59)
                {
                    total_charges = num_mins * 0.05;
                    cout << total_charges << endl;
                }
                else if (starting_time >= 07.00 && 
                         starting_time <= 19.00)
                {
                    total_charges = num_mins * 0.45;
                    cout << total_charges << endl;
                }
                else if (starting_time >= 19.01 && 
                         starting_time <= 23.59)
                {
                    total_charges = num_mins * 0.20;
                    cout << total_charges << endl;
                }
            }
        }
    }

    cout << endl;

    return 0;
}
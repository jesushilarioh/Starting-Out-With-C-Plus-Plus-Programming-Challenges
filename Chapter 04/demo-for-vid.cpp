#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int AIR_FEET_PER_SECOND = 1100,
              WATER_FEET_PER_SECOND = 4900,
              STEEL_FEET_PER_SECOND = 16400,
              MINIMUM_DISTANCE = 0;

    int user_menu_choice;
    float length_of_travel,
          amount_of_time;

    cout << "===================" << endl;
    cout << "    Choose one:    " << endl;
    cout << "-------------------" << endl;
    cout << "    1. Air         " << endl;
    cout << "    2. Water       " << endl;
    cout << "    3. Steel       " << endl;
    cout << "===================" << endl;
    cin >> user_menu_choice;

    switch (user_menu_choice)
    {
        case 1:
        case 2:
        case 3:
            cout << "\nHow far will the sound wave travel? ";
            cin >>  length_of_travel;

            if (length_of_travel < MINIMUM_DISTANCE)
            {
                cout << "\nWe're sorry. Distance must be more than 0.\n";
                cout << "Rerun the program and try again.\n" << endl;
            }
            else
            {
                if (user_menu_choice == 1)
                {
                    amount_of_time = length_of_travel / AIR_FEET_PER_SECOND;
                    cout << "In air ";
                }
                else if (user_menu_choice == 2)
                {
                    amount_of_time = length_of_travel / WATER_FEET_PER_SECOND;
                    cout << "In water ";
                }
                else if (user_menu_choice == 3)
                {
                    amount_of_time = length_of_travel / STEEL_FEET_PER_SECOND;
                    cout << "In steel ";
                }

                cout << setprecision(4) << fixed;
                cout << "the sound wave will take " << amount_of_time;
                cout << " seconds to travel." << endl << endl;
            }
            break;

        default:
            cout << "\nWe're sorry. Choose a number between 1 and 3." << endl;
            cout << "Rerun the program and try again.\n" << endl;
    }

    return 0;
}

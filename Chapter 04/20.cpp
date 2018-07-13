/********************************************************************
*
*	20. The Speed of Sound
*
*       The following table shows the approximate speed of sound in
*       air, water, and steel.
*       ===========================================================
*           Medium                  Speed
*       -----------------------------------------------------------
*           Air                     1,100   ft per sec.
*           Water                   4,900   ft per sec.
*           Steel                   16,400  ft per sec.
*       ===========================================================
*       Write a program that displays a menu allowing the user to
*       select air, water, or steel. After the user has made a
*       selection, he or she should be asked to enter the distance a
*       sound wave will travel in the selected medium. The program
*       will then display the amount of time it will take. (Round
*       the answer to four decimal places.)
*
*       Input Validation: Check that the user has selected one of
*       the available choices from the menu. Do not accept
*       distances less than 0.
*
* 	Jesus Hilario Hernandez
* 	February 21, 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    // Variables
    int user_select;
    float length_of_travel,
          amount_of_time;

    // Display menu
    // Ask user to select from menu
    cout << "===================" << endl;
    cout << "    Choose one:    " << endl;
    cout << "-------------------" << endl;
    cout << "    1. Air         " << endl;
    cout << "    2. Water       " << endl;
    cout << "    3. Steel       " << endl;
    cout << "===================" << endl;
    cin >> user_select;

    // Decision statement
    switch (user_select)
    {
        case 1:
        case 2:
        case 3:
            // Ask user to enter the distance sound wave will travel
            cout << "\nHow far will the sound wave travel? ";
            cin >>  length_of_travel;

            // If less that 0, error check
            if (length_of_travel < 0)
            {
                cout << "\nWe're sorry. Distance must be more than 0.\n";
                cout << "Rerun the program and try again.\n" << endl;
            }
            else
            {
                if (user_select == 1)
                {
                    amount_of_time = length_of_travel / 1100;
                    cout << "In air ";
                }
                else if (user_select == 2)
                {
                    amount_of_time = length_of_travel / 4900;
                    cout << "In water ";
                }
                else if (user_select == 3)
                {
                    amount_of_time = length_of_travel / 16400;
                    cout << "In steel ";
                }

                // Display amount of time it will take
                cout << setprecision(4) << fixed;
                cout << "the sound wave will take " << amount_of_time;
                cout << " seconds to travel." << endl << endl;
            }
            break;

        default:
            cout << "\nWe're sorry. Choose a number between 1 and 3." << endl;
            cout << "Rerun the program and try again.\n" << endl;
    }

    // Terminate program
    return 0;
}

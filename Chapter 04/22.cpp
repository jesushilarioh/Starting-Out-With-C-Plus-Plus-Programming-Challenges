/********************************************************************
*
*   22. Freezing and Boiling Points
*
*       The following table lists the freezing and boiling points of
*       several substances. Write a program that asks the user to
*       enter a temperature and then shows all the substances
*       that will freeze at that temperature and all that will
*       boil at that temperature. For example, if the user
*       enters −20 the program should report that water will
*       freeze and oxygen will boil at that temperature.
*   =================================================================
*    Substance          Freezing Point (F)      Boiling Point (F)
*   -----------------------------------------------------------------
*    Ethyl alcohol          -173                    172
*    Mercury                -38                     676
*    Oxygen                 -362                    -306
*    Water                  32                      212
*   =============================================================
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
    float user_temp;

    // Ask the user for temp.
    cout << "Enter temperature: "; cin >> user_temp;

    // Display all substances that will freeze or boil
    cout << "\nAt " << user_temp << " F these substances will either freeze or boil.\n";

    if (user_temp <= 32)
    {
        cout << "\nFreeze:\n";
        cout << "--------" << endl;
        cout << "Water" << endl;

        if (user_temp <= -38)
        {
            cout << "Mercury" << endl;

            if (user_temp <= -173)
            {
                cout << "Ethyl alcohol" << endl;

                if (user_temp <= -362)
                {
                    cout << "Oxygen" << endl;
                }
            }
        }
        cout << endl;
    }

    if (user_temp >= -306)
    {
        cout << "Boil: \n";
        cout << "--------" << endl;
        cout << "Oxygen." << endl;

        if (user_temp >= 172)
        {
            cout << "Ethyl alcohol." << endl;

            if (user_temp >= 212)
            {
                cout << "Water" << endl;

                if (user_temp >= 676)
                {
                    cout << "Mercury" << endl;
                }
            }
        }
        cout << endl;
    }
    // Terminate program
    return 0;
}

/********************************************************************
*
*	17. Personal Best
*
*       Write a program that asks for the name of a pole vaulter and
*       the dates and vault heights (in meters) of the athlete’s three
*       best vaults. It should then report, in order of height (best
*       first), the date on which each vault was made and its height.
*
*       Input Validation: Only accept values between 2.0 and 5.0 for the
*                           heights.
*
* 	Jesus Hilario Hernandez
* 	February 20, 2018
*
********************************************************************/
#include <iostream>
#include <cstdlib>  // For exit() function
#include <string>   // For using string variables and arrays

using namespace std;
int main()
{
    // Constant variables
    const int NUM_OF_VAULTS = 3;

    // Variables & Arrays
    string pole_vaulter,                // Hold pole vaulter's name
           vault_date[NUM_OF_VAULTS];   // An array of vault dates.
    float vault_height[NUM_OF_VAULTS];  // An array of vault heights.

    // Ask for name, dates, and vault heights (in meters) of best 3 vaults
    cout << "Enter pole vaulter name: ";
    getline(cin, pole_vaulter);

    // For loop to ask for 3 separate vaults & dates
    for (int i = 0; i < NUM_OF_VAULTS; i++)
    {
        int num = i + 1;

        // Ask user for vault height
        cout << "Vault #" << num << " height (in meters): ";
        cin >> vault_height[i];
        cin.ignore();

        // Input validation checks if height is within 2.0 and 5.0 range
        if (vault_height[i] < 2.0 || vault_height[i] > 5.0)
        {
            // Explain error
            cout << endl;
            cout << "We're sorry, vault height must be between" << endl;
            cout << "2.0 and 5.0 meters. Rerun the program and try again." << endl;
            cout << endl;
            exit(EXIT_SUCCESS);
        }

        // Ask user for vault date
        cout << "Vault #" << num << " date (e.g. 01/07/1922): ";
        getline(cin, vault_date[i]);
    }
    cout << endl;

    if (vault_height[0] > vault_height[1])
    {
        if (vault_height[0] > vault_height[2])
        {
            cout << "Gold: " << vault_height[0];
            cout << " Date: " << vault_date[0] << endl;

            if (vault_height[1] > vault_height[2])
            {
                cout << "Silver: " << vault_height[1];
                cout << " Date: " << vault_date[1] << endl;
                cout << "Bronze: " << vault_height[2];
                cout << " Date: " << vault_date[2] << endl;
            }
            else
            {
                cout << "Silver: " << vault_height[2];
                cout << " Date: " << vault_date[2] << endl;
                cout << "Bronze: " << vault_height[1];
                cout << " Date: " << vault_date[1] << endl;
            }

        }
    }
    else if (vault_height[1] > vault_height[2])
    {
        if (vault_height[1] > vault_height[0])
        {
            cout << "Gold: " << vault_height[1];
            cout << " Date: " << vault_date[1] << endl;

            if (vault_height[0] > vault_height[2])
            {
                cout << "Silver: " << vault_height[0];
                cout << " Date: " << vault_date[0] << endl;
                cout << "Bronze: " << vault_height[2];
                cout << " Date: " << vault_date[2] << endl;
            }
            else
            {
                cout << "Silver: " << vault_height[2];
                cout << " Date: " << vault_date[2] << endl;
                cout << "Bronze: " << vault_height[0];
                cout << " Date: " << vault_date[0] << endl;
            }
        }
    }
    else if (vault_height[2] > vault_height[0])
    {
        if (vault_height[2] > vault_height[1])
        {
            cout << "Gold: " << vault_height[2];
            cout << " Date: " << vault_date[2] << endl;

            if (vault_height[0] > vault_height[1])
            {
                cout << "Silver: " << vault_height[0];
                cout << " Date: " << vault_date[0] << endl;
                cout << "Bronze: " << vault_height[1];
                cout << " Date: " << vault_date[1] << endl;
            }
            else
            {
                cout << "Silver: " << vault_height[1];
                cout << " Date: " << vault_date[1] << endl;
                cout << "Bronze: " << vault_height[0];
                cout << " Date: " << vault_date[0] << endl;
            }
        }
    }

    cout << endl;
    // Terminate program
    return 0;
}

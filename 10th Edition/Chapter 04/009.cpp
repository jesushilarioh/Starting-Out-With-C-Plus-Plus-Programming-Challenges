#include <iostream>
using namespace std;

int main()
{
    // Constant variables
    const float ONE_DOLLAR = 1.00,
                PENNY      = 0.01,
                NICKEL     = 0.05,
                DIME       = 0.10,
                QUARTER    = 0.25;

    // Variables
    float pennies,
          nickels,
          dimes,
          quarters,
          total_coins;

    // explain
    cout << "\nLet's see if your coins equal 1 dollar.\n";
    cout << endl;

    // Ask for pennies, nickels, dimes, and quarters.
    cout << "How many pennies do you have? ";
    cin >> pennies;
    cout << "Nickels? ";
    cin >> nickels;
    cout << "Dimes? ";
    cin >> dimes;
    cout << "Quarters? ";
    cin >> quarters;

    // Format line break
    cout << endl;

    // Calculate total coins
    total_coins += ((pennies *= PENNY) +
                    (nickels *= NICKEL) +
                    (dimes *= DIME)   +
                    (quarters *= QUARTER));

    // Decision statement
    if (total_coins == ONE_DOLLAR)
    {
        cout << '$' << total_coins;
        cout << " equal to $1." << endl;
    }
    else if (total_coins < ONE_DOLLAR)
    {
        cout << '$' << total_coins;
        cout << " is less than $1. Re-run program and ";
        cout << " Try again.\n";
    }
    else if (total_coins > ONE_DOLLAR)
    {
        cout << '$' << total_coins;
        cout << " greater than $1.  Re-run program and ";
        cout << " Try again.\n";
    }

    // Format line break
    cout << endl;

    // Terminate program
    return 0;
}
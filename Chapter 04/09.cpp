/********************************************************************
*
*	09. Change for a Dollar Game
*
*       Create a change-counting game that gets the user to enter the
*       number of coins required to make exactly one dollar. The program
*       should ask the user to enter the number of pennies, nickels,
*       dimes, and quarters. If the total value of the coins entered is
*       equal to one dollar, the program should congratulate the user
*       for winning the game. Otherwise, the program should display a
*       message indicating whether the amount entered was more than or
*       less than one dollar.
*
* 	Jesus Hilario Hernandez
* 	February 16, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Constant variables
    const float ONE_DOLLAR = 1.00;

    // Variables
    float pennies,
          nickels,
          dimes,
          quarters,
          total_coins;

    // Ask user for number of coins to a dollar
    cout << "\nLet's see if your coins equal 1 dollar.\n"<< endl;

    // Ask user for number of pennies, nickels, dimes, and quarters.
    cout << "How many pennies do you have? ";
    cin >> pennies;

    cout << "Nickels? ";
    cin >> nickels;

    cout << "Dimes? ";
    cin >> dimes;

    cout << "Quarters? ";
    cin >> quarters;

    cout << endl;

    // Calculate total coins
    total_coins += ((pennies *= .01) +
                    (nickels *= .05) +
                    (dimes *= .10)   +
                    (quarters *= .25));

    // Decision statement
    if (total_coins == ONE_DOLLAR)
        cout << "Congrats! You've won! Coins equal a dollar." << endl;
    else if (total_coins < ONE_DOLLAR)
        cout << "Coins less than a dollar. Try again." << endl;
    else if (total_coins > ONE_DOLLAR)
        cout << "Coins greater that a dollar. Try again." << endl;

    // Format line break
    cout << endl;

    // Terminate program
    return 0;
}

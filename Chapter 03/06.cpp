/********************************************************************
*
*	06. INGREDIENT ADJUSTER
*
*       A cookie recipe calls for the following ingredients:
*       - 1.5 cups of sugar
*       - 1 cup of butter
*       - 2.75 cups of flour
*
*       The recipe produces 48 cookies with this amount of the
*       ingredients. Write a program that asks the user how many
*       cookies he or she wants to make, and then displays the
*       number of cups of each ingredient needed for the specified number
*       of cookies.
*
* 	Jesus Hilario Hernandez
* 	July 14th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    const float COOKIES = 48,
                SUGAR = 1.5,
                BUTTER = 1,
                FLOUR = 2.75;

    float num_cookies,
          total_butter,
          total_sugar,
          total_flour;

    // Ask user how many cookies to make
    cout << "\nHow many cookies do you want to make? ";
    cin >> num_cookies;

    // Calculate ingredients
    total_sugar  = (SUGAR * num_cookies) / COOKIES;
    total_flour  = (FLOUR * num_cookies) / COOKIES;
    total_butter = (BUTTER * num_cookies) / COOKIES;

    // Display amount of ingredients
    cout << setprecision(2) << fixed;
    cout << "\nTo make " << num_cookies << " cookies ";
    cout << "you will need the following ingredients: \n";
    cout << " - " << total_butter << " cups of butter\n";
    cout << " - " << total_sugar  << " cups of sugar\n";
    cout << " - " << total_flour  << " cups of flour\n";
    cout << endl;

    // Terminate Program
    return 0;
}

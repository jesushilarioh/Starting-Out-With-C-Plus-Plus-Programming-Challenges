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
* 	January 7th 2017
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float num_of_cookies_to_make,
          total_cups_butter,
          total_cups_sugar,
          total_cups_flour;
    // Ask the user how many cookies they want to make
    cout << setprecision(4);
    cout << "\nHow many cookies do you want to make? ";
    cin >> num_of_cookies_to_make;

    // Calculate the amount of ingredients it takes to make
        // 1.5 cup of sugar   = 48 cookies
            // (1.5 / y) * (48 / x)
    //                                     = (1.5 / x) * (48/num_of_cookies_to_make);
    //                                     = (48x) / (1.5 * num_of_cookies_to_make)
    // 1.5 * num_of_cookies_to_make        = 48x
    // (1.5 * num_of_cookies_to_make) / 48 = x
    total_cups_sugar = (1.5 * num_of_cookies_to_make) / 48;
    total_cups_butter = (1 * num_of_cookies_to_make) / 48;
    total_cups_flour = (2.75 * num_of_cookies_to_make) / 48;
        // 1 cup of butter    = 48 cookies
        // 2.75 cups of flour = 48 cookies
    // Display the number of cups for each ingredient.
    cout <<"To make " << num_of_cookies_to_make << " cookies ";
    cout << "you will need the following ingredients: " << endl << endl;
    cout << " - " << total_cups_sugar << " cups of sugar" << endl;
    cout << " - " << total_cups_butter << " cups of butter" << endl;
    cout << " - " << total_cups_flour << " cups of flour" << endl;
    cout << endl;

    return 0;
}

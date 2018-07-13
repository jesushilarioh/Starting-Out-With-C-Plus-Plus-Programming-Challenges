/********************************************************************
*
*	13. CURRENCY
*
*       Write a program that will convert U.S. dollar amounts to
*       Japanese yen and to euros, storing the conversion factors
*       in the constants YEN_PER_DOLLAR and EUROS_PER_DOLLAR.
*       To get the most up-to-date exchange rates, search the
*       Internet using the term "currency exchange rate". If
*       you cannot ding the most recent exchange rates, use the
*       following:
*
*       1 Dollar = 98.93 Yen
*       1 Dollar = 0.74 Euros
*
*       Format your currency amounts in fixed-point notation,
*       with two decimal places of percision, and be sure
*       the decimal point is always displayed.
*
* 	Jesus Hilario Hernandez
* 	January 17th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Store conversion factors into constants
    const float YEN_PER_DOLLAR = 111.23, // As of Jan. 17th 2018
                EUROS_PER_DOLLAR = 0.82; // As of Jan. 17th 2018
    float user_dollar_amount,
          user_dollar_amount_to_Yen,
          user_dollar_amount_to_Euros;

    // Ask user for dollar amount
    cout << endl;
    cout << "Enter your U.S. dollar amount: ";
    cin >> user_dollar_amount;

    // Convert U.S. dollar to Japanese Yen and Euros
    user_dollar_amount_to_Yen = user_dollar_amount * YEN_PER_DOLLAR;
    user_dollar_amount_to_Euros = user_dollar_amount * EUROS_PER_DOLLAR;

    // Format currency amounts in fixed-point notation, two decimal points
    // Display
    cout << setprecision(2) << fixed << endl;
    cout << "U.S.       dollar  amount = $ " << user_dollar_amount << endl;
    cout << "Japanese   yen     amount = ¥ " << user_dollar_amount_to_Yen << endl;
    cout << "European   Euro    amount = € " << user_dollar_amount_to_Euros << endl;

    return 0;
}

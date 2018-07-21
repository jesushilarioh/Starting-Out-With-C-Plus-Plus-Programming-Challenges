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
* 	July 20th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // constants YEN_PER_DOLLAR and EUROS_PER_DOLLAR
    const float YEN_PER_DOLLAR   = 111.51,
                EUROS_PER_DOLLAR = .85;

    // Variable
    float user_amount,
          dollar_to_yen,
          dollar_to_euro;

    // Ask user for dollar amount
    cout << endl;
    cout << "Enter U.S. dollar amount: ";
    cin >> user_amount;

    // convert U.S. dollar amounts to yen and to euros
    dollar_to_yen = user_amount * YEN_PER_DOLLAR;
    dollar_to_euro = user_amount *EUROS_PER_DOLLAR;

    // Format currency, fixed-point with two decimal places
    cout << setprecision(2) << fixed << endl;
    cout << "Dollar   amount = $"  << user_amount;
    cout << "\nYen      amount = ¥" << dollar_to_yen;
    cout << "\nEuro     amount = €" << dollar_to_euro;
    cout << '\n' << endl;


    return 0;
}

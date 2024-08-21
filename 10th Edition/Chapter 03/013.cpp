/*
13. Currency
Write a program that will convert U.S. dollar amounts to Japanese yen and to euros, storing the conversion factors in the constants YEN_PER_DOLLAR and EUROS_PER_ DOLLAR. To get the most up-to-date exchange rates, search the Internet using the term “currency exchange rate”. If you cannot find the most recent exchange rates, use the following:

1 Dollar = 98.93 Yen 
1 Dollar = 0.74 Euros

Format your currency amounts in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed.

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float YEN_PER_DOLLAR   = 98.93,
                EUROS_PER_DOLLAR = .74;
    
    float user_amount,
          dollar_to_yen,
          dollar_to_euro;
    
    cout << "\nEnter U.S. dollar amount: ";
    cin >> user_amount;
    
    dollar_to_yen = user_amount * YEN_PER_DOLLAR;
    dollar_to_euro = user_amount * EUROS_PER_DOLLAR;
    
    cout << setprecision(2) << fixed << endl
         << "Dollar   amount = $"  << user_amount << endl
         << "Yen      amount = ¥" << dollar_to_yen << endl
         << "Euro     amount = €" << dollar_to_euro << endl
         << endl;
    
    return 0;
}

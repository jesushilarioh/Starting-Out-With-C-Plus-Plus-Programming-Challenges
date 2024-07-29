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

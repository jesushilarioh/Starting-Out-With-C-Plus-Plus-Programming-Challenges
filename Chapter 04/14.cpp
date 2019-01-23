/********************************************************************
*
*	14. Bank Charges
*
*       A bank charges $10 per month plus the following check fees
*       for a commercial checking account:
*
*       $.10 each for fewer than 20 checks
*       $.08 each for 20–39 checks
*       $.06 each for 40–59 checks
*       $.04 each for 60 or more checks
*
*       The bank also charges an extra $15 if the balance of the
*       account falls below $400 (before any check fees are applied).
*       Write a program that asks for the beginning balance and the
*       number of checks written. Compute and display the bank’s
*       service fees for the month.
*
*       Input Validation: Do not accept a negative value for the
*       number of checks written. If a negative value is given for
*       the beginning balance, display an urgent message indicating
*       the account is overdrawn.
*
* 	Answer by: Jesus Hilario Hernandez
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const double EXTRA_MONTHLY_CHARGE =  15,
                 TEN_CENTS            = .10,
                 EIGHT_CENTS          = .08,
                 SIX_CENTS            = .06,
                 FOUR_CENTS           = .04; 

    double beginning_balance,
           total_monthly_charges = 10;

    int number_of_checks;

    cout << "\nWhat is the beginning balance? $";
    cin >> beginning_balance;

    if (beginning_balance < 0)
        cout << "URGENT! Your account is overdrawn.";

    if (beginning_balance < 400)
        total_monthly_charges += EXTRA_MONTHLY_CHARGE;

    cout << "\nNumber of check written? ";
    cin >> number_of_checks;

    if (number_of_checks < 0)
    {
        cout << "Oops. "
             << "Number of checks written must be\n" 
             << "0 or more.\n";
        cout << "Please rerun the program and try again.";
    }
    else 
    {
        cout << setprecision(2) << fixed;

        if (number_of_checks >= 0 && number_of_checks < 20)
        {
            total_monthly_charges += 
            (number_of_checks * TEN_CENTS);
        }
        else if (number_of_checks >= 20 && number_of_checks <= 39)
        {
            total_monthly_charges += 
            (number_of_checks * EIGHT_CENTS);
        }
        else if (number_of_checks >= 40 && number_of_checks <= 59)
        {
            total_monthly_charges += 
            (number_of_checks * SIX_CENTS);
        }
        else if (number_of_checks >= 60)
        {
            total_monthly_charges += 
            (number_of_checks * FOUR_CENTS);
        }

        cout << "Bank's service fees for the month are: $";
        cout << total_monthly_charges << endl;
    }

    cout << endl 
         << endl;

    return 0;
}
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
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    float beginning_balance,            // Beginning balance.
          extra_monthly_charge = 15,    // $15 extra if balance falls below $400.
          total_monthly_charges = 10;    // Total montly charges. Initially $10

    int num_checks;

    // Ask for beginning balance
    cout << "\nWhat is the beginning balance? $";
    cin >> beginning_balance;

    // Decision statement to decide if extra $15 apply
    // If less than 400
    if (beginning_balance < 400)
    {
        total_monthly_charges += 15;

        // If less that 0
        if (beginning_balance < 0)
            cout << "URGENT! Your account is overdrawn.";
    }

    // Ask for number of checks written
    cout << "\nNumber of check written? ";
    cin >> num_checks;

    // Decision statement
    // If less than 0
    if (num_checks < 0)
    {
        cout << "Oops. Number of checks written must be 0 or more.\n";
        cout << "Please rerun the program and try again.";
    }

    // If greater that 0
    else
    {
        if (num_checks >= 0 && num_checks < 20)
            total_monthly_charges += (num_checks * .10);

        else if (num_checks >= 20 && num_checks <= 39)
            total_monthly_charges += (num_checks * .08);

        else if (num_checks >= 40 && num_checks <= 59)
            total_monthly_charges += (num_checks * .06);

        else if (num_checks >= 60)
            total_monthly_charges += (num_checks * .04);

        cout << "Bank's service fees for the month are: $";
        cout << total_monthly_charges << endl;
    }

    // Format line break
    cout << endl << '\n';

    // Terminate program
    return 0;
}

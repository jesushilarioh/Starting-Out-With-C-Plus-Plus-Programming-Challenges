/********************************************************************
*
*	  016. SAVINGS ACCOUNT BALANCE
*
*       Write a program that calculates the balance of a savings
*       account at the end of a period of time. It should ask the
*       user for the annual interest rate, the starting balance, and
*       the number of months that have passed since the account was
*       established. A loop should then iterate once for every month,
*       performing the following:
*
*           A) Ask the user for the amount deposited into the account
*              during the month. (Do not accept negative numbers.) This
*              amount should be added to the balance.
*
*           B) Ask the user for the amount withdrawn from the
*              account during the month. (Do not accept negative
*              numbers.) This amount should be subtracted from the
*              balance.
*
*           C) Calculate the monthly interest. The monthly interest rate
*              is the annual interest rate divided by twelve. Multiply
*              the monthly interest rate by the balance, and add the
*              result to the balance.
*
*       After the last iteration, the program should display the ending
*       balance, the total amount of deposits, the total amount of
*       withdrawals, and the total interest earned.
*
*       NOTE: If a negative balance is calculated at any point, a
*             message should be displayed indicating the account has
*             been closed and the loop should terminate.
*
* 	Jesus Hilario Hernandez
* 	June 9th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int MONTHS = 12;

    float starting_balance,
          annual_interest_rate,
          amount_deposited,
          amount_withdrawn,

          interest_rate,
          monthly_interest_rate,
          balance,

          total_deposits,
          total_withdrawn,
          total_interest_earned;

    int months_since_established;


    cout << "\nEnter annual interest rate: ";
    while (!(cin >> annual_interest_rate))
    {
        cout << "Error: a number must be entered... ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    
    cout << "Enter starting balance: ";
    while (!(cin >> starting_balance))
    {
        cout << "Error: a number must be entered... ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    balance = starting_balance;

    cout << "Enter # of months passed since account was established: ";
    while (!(cin >> months_since_established))
    {
        cout << "Error: a number must be entered... ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    // The monthly interest rate is the annual interest rate divided by twelve.
    monthly_interest_rate = annual_interest_rate / MONTHS;

    for (int i = 0; i < months_since_established; i++)
    {
        cout << "Enter the amount deposited for month " << (i + 1) << ": ";
        while (!(cin >> amount_deposited) || amount_deposited < 0)
        {
            cout << "Error: a positive number must be entered." << endl;
            cout << "Enter the amount deposited for month " << (i + 1) << ": ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        total_deposits += amount_deposited;
        balance += amount_deposited;

        if (balance < 0)
            break;

        cout << "Enter the amount withdrawn for month " << (i + 1) << ": ";
        while (!(cin >> amount_withdrawn) || amount_withdrawn < 0)
        {
            cout << "Error: a positive number must be entered." << endl;
            cout << "Enter the amount withdrawn for month " << (i + 1) << ": ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        total_withdrawn += amount_withdrawn;
        balance -= amount_withdrawn;

        if (balance < 0)
            break;

        interest_rate = (monthly_interest_rate * balance);
        // cout << "Balance: " << balance << endl;
        // cout << "Interest Rate: " << interest_rate << endl;
        // Multiply the monthly interest rate by the balance,
        // and add the result to the balance.
        balance += interest_rate;

        if (balance < 0)
            break;

        // cout << "Balance + Interest Rate: " << balance << endl;
        total_interest_earned += (interest_rate);
        // cout << "Total Interest Earned: " << total_interest_earned << endl;
        // cout << endl;

    }

    if (balance < 0)
    {
        cout << "I'm sorry, your account has been closed" << endl;
        cout << "due to having a negative balance." << endl;
    }
    else
    {
        cout << setprecision(2) << fixed << endl;
        cout << "Starting balance            = $" << starting_balance << endl;
        cout << "Ending balance              = $" << balance << endl;
        cout << "Total amount in deposits    = $" << total_deposits << endl;
        cout << "Total amount in withdrawals = $" << total_withdrawn << endl;
        cout << "Total interest earned       = $" << total_interest_earned;
        cout << endl << endl;
    }

    return 0;
}

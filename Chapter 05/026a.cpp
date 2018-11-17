/********************************************************************
*
*	  026. Using Files—Savings Account Balance Modification
*
*       Modify the Savings Account Balance program described in 
*       Programming Challenge 16 so that it writes the final 
*       report to a file.
*
* 	Jesus Hilario Hernandez
* 	November 16, 2018
*
********************************************************************/
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    ofstream outputFile;

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

    // 1. Open File "savings_account_report.txt"
    outputFile.open("savings_account_report.txt");

    // 2. Process and write to file "savings_account_report.txt"

    // Check if file opens successfully
    if (outputFile)
    {
        cout << "\nEnter annual interest rate: ";
        while (!(cin >> annual_interest_rate))
        {
            cout << "Error: a number must be entered... ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        
        cout << "\nEnter starting balance: ";
        while (!(cin >> starting_balance))
        {
            cout << "Error: a number must be entered... ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        balance = starting_balance;

        cout << "\nEnter # of months passed since account was established: ";
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
            cout << "\nEnter the amount deposited for month " << (i + 1) << ": ";
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

            cout << "\nEnter the amount withdrawn for month " << (i + 1) << ": ";
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
            outputFile << "I'm sorry, your account has been closed" << endl;
            outputFile << "due to having a negative balance." << endl;
        }
        else
        {
            outputFile << setprecision(2) << fixed;
            outputFile << "Starting balance            = $" << starting_balance << endl;
            outputFile << "Ending balance              = $" << balance << endl;
            outputFile << "Total amount in deposits    = $" << total_deposits << endl;
            outputFile << "Total amount in withdrawals = $" << total_withdrawn << endl;
            outputFile << "Total interest earned       = $" << total_interest_earned;
            outputFile << endl << endl;
        }

        // 3. Close file "savings_account_report.txt"
        outputFile.close();
        // Display file closed
        cout << "\nReport recorded to \"savings_account_report.txt\" file.\n" << endl;
    }
    else
    {
        // Display error if file did not open
        cout << "Error opening file" << endl;
    }

    // Terminate Program
    return 0;
}
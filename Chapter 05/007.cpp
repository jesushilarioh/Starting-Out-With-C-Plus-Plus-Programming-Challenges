/********************************************************************
*
*	  007. Pennies for Pay
*
*           Write a program that calculates how much a person would
*           earn over a period of time if his or her salary is one
*           penny the first day and two pennies the second day, and
*           continues to double each day. The program should ask the
*           user for the number of days. Display a table showing how
*           much the salary was for each day, and then show the total
*           pay at the end of the period. The output should be displayed
*           in a dollar amount, not the number of pennies.
*
*           Input Validation: Do not accept a number less than
*                             1 for the number of days worked.
*
* 	Jesus Hilario Hernandez
* 	March 23st 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const int INCREMENTAL_AMOUNT = 2;

    // Variables
    int num_of_days;            // User input

    float daily_salary = 1,     // Amount paid each day     - Incremental
          total_salary = 0;     // Total salary over time   - Running Total

    // Ask for (num_of_days)
    cout << "\nEnter number of days: ";
    cin >> num_of_days;

    // Line break
    cout << endl;

    // Validate (num_of_days)
    if (num_of_days < 1)
    {
        cout << "ERROR. Number of days must be more than 1." << endl;
        cout << "Rerun the program and try again." << endl;
    }
    else
    {
        // Calculate how much earned in period of time (daily_salary * 2)
        // Display table showing incremental (daily_salary) and (total_pay)
        cout << "   Day             Amount Earned" << endl;
        cout << "--------------------------------------" << endl;

        // User controlled for loop. (num_of_days) as limit
        for (int i = 0; i < num_of_days; i++)
        {
            total_salary += daily_salary;
            cout << setprecision(2) << fixed;
            cout << "   " << (i + 1) << "           $";
            cout << daily_salary << endl;
            daily_salary *= INCREMENTAL_AMOUNT;
        }

        cout << "\nTotal salary for " << num_of_days;
        cout << " days = $" << total_salary << endl;
    }

    // Line break
    cout << endl;

    // Terminate program
    return 0;
}

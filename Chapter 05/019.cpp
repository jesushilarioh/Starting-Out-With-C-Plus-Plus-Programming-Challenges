/********************************************************************
*
*	  019. BUDGET ANALYSIS
*
*       Write a program that asks the user to enter the amount that 
*       he or she has budgeted for a month. A loop should then 
*       prompt the user to enter each of his or her expenses 
*       for the month and keep a running total. When the loop 
*       finishes, the program should display the amount that the 
*       user is over or under budget.
*
* 	Jesus Hilario Hernandez
* 	July 19th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    float budget_amount,
          expense_total = 0,
          expense,
          budget_result;
    int num_of_expenses;
        

    // asks the user to enter the amount that he or she has budgeted for a month
    cout << endl;
    cout << "Enter the amount budgeted for this month: ";
    while (!(cin >> budget_amount))
    {
        cout << "Oops. A number must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    cout << "How many expenses do you have? ";
    while (!(cin >> num_of_expenses))
    {
        cout << "Oops. A number must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    /**
      * A loop should then prompt the user to enter 
      * each of his or her expenses for the month and 
      * keep a running total
      */
    for(int i = 0; i < num_of_expenses; i++)
    {
        cout << "Enter expense #" << (i + 1) << ": ";
        while (!(cin >> expense))
        {
            cout << "Oops. A number must be entered: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        expense_total += expense;
    }
    // Calculate budget result
    budget_result = budget_amount - expense_total;

    //display the amount if the user is over or under budget
    cout << endl;
    if (expense_total > budget_amount)
    {
        cout << "You are over budget by $";
        cout << budget_result << '.' << endl;
    }
    else if (expense_total < budget_amount)
    {
        cout << "You are under budget by $";
        cout << budget_result << '.' << endl;
    }
    else if (expense_total == budget_amount)
    {
        cout << "Your budget is 0 based." << endl;
    }

    cout << endl;

    return 0;
}
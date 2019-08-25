#include <iostream>
using namespace std;
int main()
{
    float budget_amount,
          expense_total = 0, // running total
          expense,
          budget_result;
    int num_of_expenses;

    cout << "/nEnter the amount budgeted "
         << "for this month: ";
    cin >> budget_amount;

    cout << "How many expenses do you have? ";
    cin >> num_of_expenses; //10

    for (int i = 0; i < num_of_expenses; i++)
    {
        cout << "Enter expense #" << (i + 1) << ": ";
        cin >> expense;
        expense_total += expense;
    }

    budget_result = budget_amount - expense_total;

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
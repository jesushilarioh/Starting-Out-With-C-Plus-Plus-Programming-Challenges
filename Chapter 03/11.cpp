/********************************************************************
*
*	11. AUTOMOBILE COSTS
*
*       Write a program that asks the user to enter the monthly costs
*       for the following expenses incurred from operating his or
*       her automobile: loan payment, insurance, gas, oil, tires,
*       and maintenance. The program should then display the total
*       monthly cost of these expenses, and the total annual cost of
*       these expenses.
*
* 	Jesus Hilario Hernandez
* 	January 16th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    float loan_payment,
          insurance,
          gas,
          oil,
          tires,
          maintenance,
          total_monthly_cost,
          total_annual_cost_per_year;

    // Ask the user to enter monthly costs for car expenses:
    cout << "\nEnter the following monthly costs for your automobile: ";
    cout << endl << setprecision(2) << fixed;
    cout << "Loan Payment : $";
    cin >> loan_payment;
    cout << "Insurance    : $";
    cin >> insurance;
    cout << "Gas          : $";
    cin >> gas;
    cout << "Oil          : $";
    cin >> oil;
    cout << "Tires        : $";
    cin >> tires;
    cout << "Maintenance  : $";
    cin >> maintenance;

    // Calculate total monthly cost of expenses
    total_monthly_cost = loan_payment + insurance + gas + oil + tires + maintenance;

    // Calculate total annual cost of expenses
    total_annual_cost_per_year = total_monthly_cost * 12;

    // Display total monthly cost
    cout << "Monthly car expenses equals  $" << total_monthly_cost << endl;

    // Display total annual cost
    cout << "Monthly annual cost per year $" << total_annual_cost_per_year << endl;
    return 0;
}

/*
11. Automobile Costs
Write a program that asks the user to enter the monthly costs for the following expenses incurred from operating his or her automobile: loan payment, insurance, gas, oil, tires, and maintenance. The program should then display the total monthly cost of these expenses, and the total annual cost of these expenses.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int TWELVE_MONTHS = 12;
    
    float loan_payment,
          insurance,
          gas,
          oil,
          tires,
          maintenance,
          monthly_expenses,
          annual_cost;

    cout << "\nEnter the following monthly costs for your automobile: \nLoan Payment : $";
    cin >> loan_payment;
    cout << "Insurance    : $";
    cin >> insurance;
    cout << "Gas          : $";
    cin >> gas;
    cout << "Oil          : $";
    cin >> oil;
    cout << "Tires        : $";
    cin >> tires;
    cout << "Maintenae    : $";
    cin >> maintenance;
    
    monthly_expenses =  loan_payment + 
                        insurance + 
                        gas + 
                        oil + 
                        tires + 
                        maintenance;

    annual_cost = monthly_expenses  * TWELVE_MONTHS;
    
    cout << "\nMonthly car expenses = $" << monthly_expenses 
         << "\nTotal annual cost    = $" << annual_cost 
         << endl; 
    
    return 0;
}

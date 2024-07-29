#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constant
    const int TWELVE_MONTHS = 12;
    
    // Variables
    float loan_payment,
          insurance,
          gas,
          oil,
          tires,
          maintenance,
          total_monthly_exp,
          annual_cost;
    /**
     * asks the user to enter the monthly
     * costs for the following expenses incurred
     * from operating his or her automobile loan
     * payment, insurance, gas, oil, tires,and
     * maintenance.
     */
    cout << "\nEnter the following monthly costs for your";
    cout << "\nautomobile: " << endl;
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
    cout << "Maintenae    : $";
    cin >> maintenance;
    cout << endl;
    
    
    // Calculate total monthly cost of these expenses
    total_monthly_exp = loan_payment + insurance + gas + oil + tires + maintenance;
    
    // Calculate total annual cost of these expenses
    annual_cost = total_monthly_exp  * TWELVE_MONTHS;
    
    // display the total monthly cost of these expenses
    cout << "\nMonthly car expenses = $" << total_monthly_exp;
    
    // display the total annual cost of these expenses
    cout << "\nTotal annual cost = $" << annual_cost;
    cout << endl;
    
    return 0;
}

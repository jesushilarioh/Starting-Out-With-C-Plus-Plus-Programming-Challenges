#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constant
    const float STATE_TAX  = .04, // 4%
                COUNTY_TAX = .02, // 2%
                SALES_TAX  = .06; // 6%
    
    // Variables
    string month;
    int year;
    float T, // Total
          S, // product sales
          total_state_tax,
          total_sales_tax,
          total_county_tax;
    
    // Ask user for month, year, and total collected (sales plus sales tax)
    cout << "Enter the month for report: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter total amount collected for the month: ";
    cin >> T;
    
    // Calculation
    S = T / 1.06;
    total_county_tax = S * COUNTY_TAX;
    total_state_tax  = S * STATE_TAX;
    total_sales_tax  = S * SALES_TAX;
    
    // Display
    cout << setprecision(2) << fixed << right << endl;
    cout << "---------------------------------" << endl;
    cout << "Month: " << month << endl;
    cout << "---------------------------------" << endl;
    cout << "Total Collected:    $" << setw(10);
    cout << T << endl;
    cout << "Sales:              $" << setw(10);
    cout << S << endl;
    cout << "County Sales Tax:   $" << setw(10);
    cout << total_county_tax << endl;
    cout << "State Sales Tax:    $" << setw(10);
    cout << total_state_tax << endl;
    cout << "Total Sales Tax:    $" << setw(10);
    cout << total_sales_tax << endl;
    cout << "---------------------------------" << endl;
    cout << endl;
    
    return 0;
}

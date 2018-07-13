/********************************************************************
*
*	14. MONTHLY SALES TAX
*
*       A retail company must file a monthly sales tax
*       report listing the sales for the month and the
*       amount of sales tax collected. Write a program
*       that asks for the month, the year, and the total
*       amount collected at the cash register (that is, sales
*       plus sales tax). Assume the state sales tax is 4
*       percent and the county sales tax is 2 percent.
*
*       If the total amount collected is known and the total
*       sales tax is 6 percent, the amount of
*       product sales may be calculated as:
*
*       S = T / 1.06
*
*       S is the product sales and T is the total income
*       (product sales plus sales tax).
*
*       The program should display a report similar to
*
*       Month: October
*       --------------------
*       Total Collected:    $  26572.89
*       Sales:              $  25068.76
*       County Sales Tax:   $    501.38
*       State Sales Tax:    $   1002.75
*       Total Sales Tax:    $   1504.13
*
* 	Jesus Hilario Hernandez
* 	January 17th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float STATE_SALES_TAX  = 0.04,
                COUNTY_SALES_TAX = 0.02,
                SALES_TAX        = 0.06;

    float S,    // product sales
          T,    // total income (product sales + sales tax)
          total_state_tax,
          total_county_tax,
          total_sales_tax;

    string month;

    int year;

    // Ask user for month, year, and total collected (sales plus sales tax)
    cout << endl;
    cout << "Enter the month to receive the report for: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Total amount collected for the month of " << month << ": ";
    cin >> T;

    // Calculate Sales, County Sales Tax, State Sales Tax, and Total Sales Tax
    S = T / 1.06;
    total_state_tax = S * STATE_SALES_TAX;
    total_county_tax = S * COUNTY_SALES_TAX;
    total_sales_tax  = S * SALES_TAX;

    // Display Calculations
    cout << setprecision(2) << fixed << right << endl;
    cout << "---------------------------------" << endl;
    cout << "Month: " << month << endl;
    cout << "---------------------------------" << endl;
    cout << "Total Collected:    $" << setw(10) << T << endl;
    cout << "Sales:              $" << setw(10) << S << endl;
    cout << "County Sales Tax:   $" << setw(10) << total_county_tax << endl;
    cout << "State Sales Tax:    $" << setw(10) << total_state_tax << endl;
    cout << "Total Tales Tax:    $" << setw(10) << total_sales_tax << endl;
    cout << "---------------------------------" << endl;
    cout << endl;

    // Terminate Program
    return 0;
}

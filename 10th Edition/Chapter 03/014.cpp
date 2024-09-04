/*
14. Monthly Sales Tax
A retail company must file a monthly sales tax report listing the sales for the month and the amount of sales tax collected. Write a program that asks for the month, the year, and the total amount collected at the cash register (i.e. sales plus sales tax). Assume the state sales tax is 4 percent, and the county sales tax is 2 percent.

If the total amount collected is known and the total sales tax is 6 percent, the amount of product sales may be calculated as:

S = T/1.06

S is the product sales and T is the total income (product sales plus sales tax). The program should display a report similar to:

Month: October 
-------------------- 
Total Collected:    $ 26572.89
Sales:              $ 25068.76
County Sales Tax:   $ 501.38
State Sales Tax:    $ 1002.75
Total Sales Tax:    $ 1504.13

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float STATE_TAX  = .04,
                COUNTY_TAX = .02,
                SALES_TAX  = .06;

    
    string month;
    int year;
    float T, // Total
          S, // product sales
          total_state_tax,
          total_sales_tax,
          total_county_tax;
    
    // Input
    cout << "\nEnter the month for report: ";
    cin >> month;
    cout << "Enter the year: ";
    cin >> year;
    cout << "Enter total amount collected for the month: ";
    cin >> T;
    
    // Process
    S = T / 1.06;
    total_county_tax = S * COUNTY_TAX;
    total_state_tax  = S * STATE_TAX;
    total_sales_tax  = S * SALES_TAX;
    
    // Output
    cout << setprecision(2) << fixed << right << endl
         << "\n---------------------------------"   
         << "\nMonth: "                             << month 
         << "\n---------------------------------" 
         << "\nTotal Collected:    $" << setw(10)   << T 
         << "\nSales:              $" << setw(10)   << S 
         << "\nCounty Sales Tax:   $" << setw(10)   << total_county_tax 
         << "\nState Sales Tax:    $" << setw(10)   << total_state_tax 
         << "\nTotal Sales Tax:    $" << setw(10)   << total_sales_tax 
         << "\n---------------------------------"   << endl
         << endl;
    
    return 0;
}

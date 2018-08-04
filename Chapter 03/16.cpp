/********************************************************************
*
*	16. SENIOR CITIZEN PROPERTY TAX
*
*       Madison County provides a $5,000 homeowner exemption for its
*       senior citizens. For example, if a senior's house is
*       valued at $158,000 its assessed value would be $94,800,
*       as explained above. However, he would only pay tax on
*       $89,800. At last year's tax rate of $2.64 for each $100 of
*       assessed value, the property tax would be $2,370.72. In
*       addition to the tax break, senior citizens are allowed to
*       pay their property tax in four equal payments. The quarterly
*       payment due on this property would be $592.68. Write a
*       program that asks the user to input the actual value
*       of a piece of property and the current tax rate for
*       each $100 of assessed value. The program should then
*       calculate and report how much annual property tax a
*       senior homeowner will be charged for this property
*       and what the quarterly tax bill will be.
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
    // Constant Variables
    const float ASSESSMENT_PER = 0.60;

    const int   FIVE_THOUSAND  = 5000,
                HUNDRED        = 100,
                FOUR           = 4;

    // Variables
    float value_of_property,
          current_tax_rate,
          total_annual_property_tax,
          quarterly_tax_bill;

    cout << endl;
    cout << "------------------------------------------\n";
    cout << "What is the value of the property? ";
    cin  >> value_of_property;
    cout << "What is tha current tax rate? ";
    cin  >> current_tax_rate;
    cout << "------------------------------------------\n";

    // Calculate annual property tax for senior homeowner
    total_annual_property_tax = (((value_of_property * ASSESSMENT_PER) - FIVE_THOUSAND) / HUNDRED) * current_tax_rate;

    // Calculate the quarterly tax bill
    quarterly_tax_bill = total_annual_property_tax / FOUR;

    // Display annual property tax and quarterly tax bill.
    cout << setprecision(2) << fixed << right;
    cout << "-------------------------------------------\n";
    cout << "Value of the property: $";
    cout << setw(11) << value_of_property;

    cout << "\nAnnual property tax:   $";
    cout << setw(11) << total_annual_property_tax;

    cout << "\nQuarterly tax bill:    $";
    cout << setw(11) << quarterly_tax_bill;

    cout << "\n-----------------------------------------\n";
    cout << endl;

    // Terminate Program
    return 0;
}

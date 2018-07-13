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
    const float ASSESSMENT_PERCENTAGE   = 0.60;

    float value_of_property,
          current_tax_rate,
          total_annual_property_tax,
          quarterly_tax_bill;

    // $5,000 homeowner exemption for senior citizens
    //
    // Ex: Senior's house = $158,000. assessed value = $94,800
    //     But only pay tax on $89,800 ($94,800 - $5,000)
    //     That's ($89,800 / $100) * $2.64 = $2370.72
    //     Paid quarterly is $2370.72 / 4 = $592.68 quarterly
    //

    // Ask user for value of property and current tax rate
    cout << endl;
    cout << "----------------------------------------------\n";
    cout << "What is the value of the property? ";
    cin >> value_of_property;
    cout << "What is the current tax rate? ";
    cin >> current_tax_rate;
    cout << "----------------------------------------------\n";

    // Calculate annual property tax for senior homeowner
    total_annual_property_tax =
    (((value_of_property * ASSESSMENT_PERCENTAGE)
    - 5000)
    / 100)
    * current_tax_rate;

    // Calculate quarterly tax bill
    quarterly_tax_bill = total_annual_property_tax / 4;

    // Display annual property tax and quarterly tax bill.
    cout << setprecision(2) << fixed << right;
    cout << "----------------------------------------------\n";
    cout << "Value of the property: $" << setw(11) << value_of_property;
    cout << "\nAnnual property tax:   $" << setw(11) << total_annual_property_tax;
    cout << "\nQuarterly tax bill:    $" << setw(11) << quarterly_tax_bill;
    cout << '\n' << "----------------------------------------------\n";
    cout << endl;

    // Terminate Program.
    return 0;
}

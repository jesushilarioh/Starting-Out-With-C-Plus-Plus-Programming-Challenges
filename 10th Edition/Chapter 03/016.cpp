/*

16. Senior Citizen Property Tax

Madison County provides a $5,000 homeowner exemption for its senior citizens. For example, if a senior’s house is valued at $158,000, its assessed value would be $94,800, as explained above. However, he would only pay tax on $89,800. At last year’s tax rate of $2.64 for each $100 of assessed value, the property tax would be $2,370.72. In addition to the tax break, senior citizens are allowed to pay their property tax in four equal payments. The quarterly payment due on this property would be $592.68. Write a program that asks the user to input the actual value of a piece of property and the current tax rate for each $100 of assessed value. The program should then calculate and report how much annual property tax a senior homeowner will be charged for this property, and what the quarterly tax bill will be. 

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float ASSESSMENT_PERCENTAGE = 0.60;
    
    const int   HOMEOWNER_EXEMPTION  = 5000,
                HUNDRED        = 100,
                FOUR           = 4;
    
    float value_of_property,
          assessed_value, 
          current_tax_rate,
          total_annual_property_tax,
          quarterly_tax_bill;
    
    cout << "\nWhat is the value of the property? ";
    cin  >> value_of_property;
    cout << "\nWhat is tha current tax rate? ";
    cin  >> current_tax_rate;
    
    assessed_value = value_of_property * ASSESSMENT_PERCENTAGE;

    total_annual_property_tax = 
    (((assessed_value)
     - HOMEOWNER_EXEMPTION)
      / HUNDRED)
       * current_tax_rate;
    
    quarterly_tax_bill = total_annual_property_tax / FOUR;
    
    cout << setprecision(2) << fixed << right << endl
         << "\n-------------------------------------------"
         << "\nValue of the property: $" << setw(11) << value_of_property
         << "\nAssessed Value:        $" << setw(11) << assessed_value
         << "\nAnnual property tax:   $" << setw(11) << total_annual_property_tax
         << "\nQuarterly tax bill:    $" << setw(11) << quarterly_tax_bill
         << "\n-------------------------------------------"
         << endl;
    
    return 0;
}

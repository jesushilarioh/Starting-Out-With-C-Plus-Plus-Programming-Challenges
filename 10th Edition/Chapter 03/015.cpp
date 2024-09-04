/*
15. Property Tax

A county collects property taxes on the assessment value of property, which is 60 percent of the property’s actual value. If an acre of land is valued at $10,000, its assessment value is $6,000. The property tax is then 75¢ for each $100 of the assessment value. The tax for the acre assessed at $6,000 will be $45. Write a program that asks for the actual value of a piece of property, then displays the assessment value and property tax.

*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const float ASSESSMENT_PER = 0.60,
                PROPERTY_TAX_PER = 0.75,
                HUNDRED = 100;
    
    float total_assessment_value,
          total_property_tax,
          value_of_property;
    
    cout << "\nWhat is that actual value of a property? ";
    cin >> value_of_property;
    
    total_assessment_value = value_of_property * ASSESSMENT_PER;
    total_property_tax = (total_assessment_value / HUNDRED) * PROPERTY_TAX_PER;
    
    cout << setprecision(2) << fixed << right << endl
         << "\nProperty Value:    $" << setw(12) << value_of_property 
         << "\nAssessment value:  $" << setw(12) << total_assessment_value 
         << "\nProperty Tax:      $" << setw(12) << total_property_tax 
         << endl;
    
    return 0;
}

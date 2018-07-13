/********************************************************************
*
*	15. PROPERTY TAX
*
*       A county collects property taxes on the assessment value of
*       property, which is 60 percent of the property's
*       actual value. If an acre of land is valued at
*       $10,000, its assessment value is $6,000. The
*       property tax is then 75¢ for each $100 of the assessment
*       value. The tax for the acre assessed at $6,000 will be
*       $45. Write a program that asks for the actual value of a
*       piece of property and displays the assessment value and property
*       tax.
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
    const float ASSESSMENT_PERCENTAGE   = 0.60,
                PROPERTY_TAX_PERCENTAGE = 0.75;

    float total_assessment_value,
          total_property_tax,
          value_of_property;

    // Ask user for actual value of piece of property.
    cout << endl;
    cout << "What is the actual value of a piece of property? ";
    cin >> value_of_property;

    // Calculate assessment value and property tax.
    total_assessment_value = value_of_property * ASSESSMENT_PERCENTAGE;
    total_property_tax = (total_assessment_value / 100) * PROPERTY_TAX_PERCENTAGE;

    // Display assessment value and property tax.
    cout << setprecision(2) << fixed << right << endl;
    cout << "Property Value:    $" << setw(12) << value_of_property << endl;
    cout << "Assessment value:  $" << setw(12) << total_assessment_value << endl;
    cout << "Property Tax:      $" << setw(12) << total_property_tax << endl;
    cout << endl;

    // Terminate Program.
    return 0;
}

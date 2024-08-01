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

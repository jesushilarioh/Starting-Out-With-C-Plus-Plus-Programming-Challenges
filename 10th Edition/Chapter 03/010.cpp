/*
10. How Much Insurance?
Many financial experts advise that property owners should insure their homes or buildings for at least 80 percent of the amount it would cost to replace the structure. Write a program that asks the user to enter the replacement cost of a building, then displays the minimum amount of insurance he or she should buy for the property.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constane variables
    const float INSURE_PERCENTAGE = .80;
    
    float replacement_cost,
          min_amount_insurance;

    
    cout << "\nThis program will calculate the 80 % for you. " << endl
         << "\nPress \"Enter\" to continute.\n" << endl;
    cin.get();
    
    cout << "Enter the replacement cost of your home or building : $";
    cin >> replacement_cost;
    
    min_amount_insurance = replacement_cost * INSURE_PERCENTAGE;
    
    cout << setprecision(2) << fixed
         << "\nThe minimum amount of insurance to buy at %80 is: $"
         << min_amount_insurance << endl
         << endl;
    
    return 0;
}

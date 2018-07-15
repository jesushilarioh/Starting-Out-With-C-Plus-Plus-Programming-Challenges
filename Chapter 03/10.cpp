/********************************************************************
*
*	10. HOW MUCH INSURANCE?
*
*       Many financial experts advise that property owners should
*       insure their homes or buildings for at least 80 percent
*       of the amount it would cost to replace the structure. Write a
*       program that asks the user to enter the replacement cost of a
*       building and then displays the minimum amount of insurance he or
*       she should buy for the property.
*
* 	Jesus Hilario Hernandez
* 	January 7th 2017
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Constane variables
    const float INSURE_PERCENTAGE = .80;

    float replacement_cost,
          min_amount_insurance;

    // Explain the program
    cout << endl;
    cout << "------------------------------------" << endl;
    cout << "Many financial experts advise that "  << endl;
    cout << "property owners should insure their " << endl;
    cout << "homes or buildings for at least 80 "  << endl;
    cout << "percent of the amount it would cost " << endl;
    cout << " to replace the structure."           << endl;
    cout << "------------------------------------\n\n";
    cout << "Press \"Enter\" to continute.\n"      << endl;
    cin.get();

    cout << "This program will calculate the 80 "  << endl;
    cout << "percent for you. " << endl;
    cout << "------------------------------------\n\n";
    cout << "Enter the replacement cost of your "  << endl;
    cout << "home or building     : $";
    cin >> replacement_cost;

    // Calculate Min amount for insurance
    min_amount_insurance = replacement_cost * INSURE_PERCENTAGE;

    // Display min amount to buy for property
    cout << setprecision(2) << fixed;

    cout << "The minimum amount of insurance " << endl;
    cout << "to buy at %80 is        : $";
    cout << min_amount_insurance << endl;
    cout << endl;

    return 0;
}

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
    // Insure at least 80 percent of the cost to replace the structure
    const float INSURE_AT_PERCENTAGE = .80;
    float replacement_cost,
          minimum_amount_insurance;

    // Ask the user to enter the replacement cost of a building
    cout << endl;
    cout << "-----------------------------------------------------------" << endl;
    cout << "Many financial experts advise that property owners " << endl;
    cout << "should insure their homes or buildings for at least" << endl;
    cout << "80 percent of the amount it would cost to replace the" << endl;
    cout << "structure." << endl;
    cout << "-----------------------------------------------------------\n" << endl;
    cout << "Press \"Enter\" to continute." << endl << endl;
    cin.get();
    cout << "This program will calculate the 80 percent for you. " << endl;
    cout << "-----------------------------------------------------------\n" << endl;
    cout << "Enter the replacement cost of your home or building     : $";
    cin >> replacement_cost;

    // Calculate
    minimum_amount_insurance = replacement_cost * INSURE_AT_PERCENTAGE;

    // Display the minimum amount of insurance he should buy for property
    cout << setprecision(2) << fixed;
    cout << "The minimum amount of insurance to buy at %80 is        : $";
    cout << minimum_amount_insurance << endl;
    cout << endl;
    return 0;
}

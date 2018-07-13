/********************************************************************
*
*	01. MILES PER GALLON
*
*       Write a program that calculates a car's gas mileage. The
*       program should ask the user to enter the number of gallons of
*       gas the car can hold and the number of miles it can be driven
*       on a full tank. It should then display the number of miles
*       that may be driven per gallon of gas.
*
* 	Jesus Hilario Hernandez
* 	January 9th 2017
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    float num_of_gallons,
          full_tank_miles,
          MPG;

    // Ask user for num of gallons
    cout << endl;
    cout << "Enter number of gallons the car can hold: ";
    cin >> num_of_gallons;

    // Ask for num of miles car can drive on full tank
    cout << "Enter a number of miles the car can be \n";
    cout << "driven on a full tank of gas: ";
    cin >> full_tank_miles;

    // Calculate num of miles the car can drive per gallon
    MPG = full_tank_miles / num_of_gallons;

    // Display calculation
    cout << "The car gets " << MPG << " miles per gallon.";
    cout << '\n' << endl;
    return 0;
}

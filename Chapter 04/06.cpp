/********************************************************************
*
*	06. Mass and Weight
*
*       Scientists measure and object's mass in kilograms and its
*       weight in newtons. If you know the amount of mass that an object
*       has, you can calculate its weight, in newtons, with the following
*       formula:
*
*       Weight = mass x 9.8;
*
*       Write a program that asks the user to enter an object's mass, and
*       then calculates and displays its weight. If the object weighs less
*       than 10 newtons, display a message indicating that the object is
*       too light.
*
* 	Jesus Hilario Hernandez
* 	February 15, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    float Weight, mass;

    // Ask the user for object's mass
    cout << endl;
    cout << "What is the object's mass: ";
    cin >> mass;

    // Calculate object's weight
    Weight = mass * 9.8;

    // Display weight.
    cout << "\nObject's weight = " << Weight << '\n' << endl;

    // Decision Statement
    if (Weight >= 1000)
        cout << "Too heavy.";
    else if (Weight <= 10)
        cout << "Too light.";
    else
        cout << "Neither heavy or light.";

    cout << '\n' << endl;

    // Terminate program
    return 0;
}

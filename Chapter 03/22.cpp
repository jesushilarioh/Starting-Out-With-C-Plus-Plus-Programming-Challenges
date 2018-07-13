/********************************************************************
*
*	22. ANGLE CALCULATOR
*
*       Write a program that asks the user for an angle, entered in
*       radians. The program should then display the sine, cosine,
*       and tangent of the angle. (Use the sin, cos, and tan library
*       functions to determine these values.) The output should
*       be displayed in fixed-point notation, rounded
*       to four decimal places of precision.
*
* 	Jesus Hilario Hernandez
* 	January 9th 2017
*
********************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    double angle;   // User's angle

    // Ask the user for an angle in radians
    cout << "\nWhat is an angle in radians? ";
    cin >> angle;

    // Display the sine, cosine, and tangent of the angle
    cout << "Angle in radians  = " << angle << endl;
    cout << setprecision(4) << fixed;
    cout << "Sine of the angle = " << sin(angle) << endl;
    cout << "Cosine of angle   = " << cos(angle) << endl;
    cout << "Tangent of angle  = " << tan(angle) << endl;
    cout << endl;

    // Terminate
    return 0;
}

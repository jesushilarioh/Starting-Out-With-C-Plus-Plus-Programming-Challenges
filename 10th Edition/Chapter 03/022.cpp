/*
22. Angle Calculator
Write a program that asks the user for an angle, entered in radians. The program should then display the sine, cosine, and tangent of the angle. (Use the sin, cos, and tan library functions to determine these values.) The output should be displayed in fixed-point notation, rounded to four decimal places of precision.
*/
#include <iostream>
#include <iomanip>  // setprecision()
#include <cmath>    // sin(), tan(), and cos()

using namespace std;

int main()
{
    double angle,
           sine,
           cosine,
           tangent;

    // INPUT
    cout << "\nWhat is an angle in radians? ";
    cin >> angle;

    // PROCESS
    sine = sin(angle);
    cosine = cos(angle);
    tangent = tan(angle);

    // OUTPUT
    cout << setprecision(4) << fixed
         << "Angle in radians  = " << angle << endl
         << "Sine of the angle = " << sine << endl
         << "Cosine of angle   = " << cosine << endl
         << "Tangent of angle  = " << tangent << endl
         << endl;

    return 0;
}
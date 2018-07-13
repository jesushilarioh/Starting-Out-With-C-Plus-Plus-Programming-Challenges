/********************************************************************
*
*	  012. CELSIUS TO FAHRENHEIT TABLE
*
*       In Programming Challenge 12 of Chapter 3 you were asked to
*       write a program that converts a Celsius temperature to
*       Fahrenheit. Modify that program so it uses a loop to
*       display a table of the Celsius temperatures 0–20, and
*       their Fahrenheit equivalents.
*
* 	Jesus Hilario Hernandez
* 	May 20th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float F = 0;

    cout << setprecision(1) << fixed << right;
    cout.fill('0');

    cout << endl;
    cout << "-----------------------------------------------" << endl;
    cout << "Celsius        Fahrenheit                      " << endl;
    cout << "===============================================" << endl;

    for (int C = 0; C <= 20; C++)
    {
        // Calculate Fahrenheit
        F = ((9.0 / 5) * C) + 32;
        cout << setw(2) << C << "          " << F << endl;
    }

    cout << "-----------------------------------------------" << endl;
    return 0;
}

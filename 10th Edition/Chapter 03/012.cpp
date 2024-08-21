/*
12. Celsius to Fahrenheit
Write a program that converts Celsius temperatures to Fahrenheit temperatures. The formula is

F = (9/5)C + 32

F is the Fahrenheit temperature, and C is the Celsius temperature.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float F,
          C;
    
    cout << "\nEnter the Celsius Temp: ";
    cin >> C;
    
    // F = (9/5)C + 32
    F = ((9.0 / 5.0) * C) + 32;
    
    cout << setprecision(1) << fixed << right << endl
         << "Celsius    Temp = " << setw(6) << C << endl
         << "Fahrenheit Temp = " << setw(6) << F << endl
         << endl;
    
    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    float F,
          C;
    
    // Ask user Celsius Temp
    cout << "\nEnter the Celsius Temp: ";
    cin >> C;
    
    // Calculate Fahrenheit
    F = ((9.0 / 5.0) * C) + 32;
    
    // Display Fahrenheit
    cout << setprecision(1) << fixed << right << endl;
    cout << "Celsius    Temp = " << setw(6) << C << endl;
    cout << "Fahrenheit Temp = " << setw(6) << F << endl;
    cout << endl;
    
    return 0;
}

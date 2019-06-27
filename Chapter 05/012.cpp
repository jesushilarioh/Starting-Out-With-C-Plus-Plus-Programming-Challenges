#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    float F = 0;

    cout << endl;
    cout << "--------------------------------------\n";
    cout << "Celsius\t\tFahrenheit" << endl;
    cout << "======================================\n";

    cout << setprecision(1) << fixed << right;
    cout.fill('0');

    for (int C = 0; C <= 20; C++)
    {
        // Calculate Fahrenheit
        F = ((9.0 / 5) * C) + 32;
        cout << setw(2) << C << "\t\t" << F << endl;
    }
    cout << "--------------------------------------\n";

    return 0;
}
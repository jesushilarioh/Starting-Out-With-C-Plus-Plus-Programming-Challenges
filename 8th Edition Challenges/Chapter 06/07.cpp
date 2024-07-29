#include <iostream>
using namespace std;

double celsius(double);

int main()
{
    const int MIN_TEMP = 0,
              MAX_TEMP = 20;
    double C;

    cout << "-----------------------------------|\n";
    cout << "Fahrenheit     | Celsius\n";
    cout << "-----------------------------------|\n";

    for (int F = MIN_TEMP; F <= MAX_TEMP; F++)
    {
        C = celsius(F);

        cout << F << "               ";
        cout << C << endl;

    }
    
    return 0;
}

/********************************************************
 * celsius()                                            *
 ********************************************************/
double celsius(double F)
{
    return (5.0/9.0) * (F - 32.0);
}
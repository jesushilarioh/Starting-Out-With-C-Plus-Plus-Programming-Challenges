/*
1. Miles per Gallon
Write a program that calculates a car’s gas mileage. The program should ask the user to enter the number of gallons of gas the car can hold, and the number of miles it can be driven on a full tank. It should then display the number of miles that may be driven per gallon of gas.
*/
#include <iostream>
using namespace std;

int main()
{
    float gallons,
          miles;
    
    cout << "\nEnter gallons: ";
    cin >> gallons;
    
    cout << "Enter miles: ";
    cin >> miles;
 
    float MPG = miles / gallons;
    
    cout << endl
         << "Gallons = " << gallons << endl
         << "Miles   = " << miles   << endl
         << "MPG     = " << MPG     << endl
         << endl;

    return 0;
}

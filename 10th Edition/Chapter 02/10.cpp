/*
10. Miles per Gallon
A car holds 15 gallons of gasoline and can travel 375 miles before refueling. Write a program that calculates the number of miles per gallon the car gets. Display the result on the screen.

Hint: Use the following formula to calculate miles per gallon (MPG): 

MPG = Miles Driven/Gallons of Gas Used

*/
#include <iostream>
using namespace std;

int main()
{
    double milesDriven = 375,
           gallonsOfGasUsed = 15,
           MPG = milesDriven / gallonsOfGasUsed;

    cout << endl
         << "Miles driven       = " << milesDriven << endl
         << "Gallons used       = " << gallonsOfGasUsed << endl
         << "Miles per gallon   = "<< MPG << endl
         << endl;

    return 0;
}
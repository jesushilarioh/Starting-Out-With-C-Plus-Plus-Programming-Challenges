/********************************************************************
*
*	11. DISTANCE PER TANK OF GAS
*       A car with a 20-gallon gas tank averages 23.5 mile per gallon
*       when driven in town and 28.9 miles per gallon when driven on
*       the highway. Write a program that calculates and displays the
*       distance the car can travel on one tank of gas when driven in
*       town and when driven on the highway.
*
*       Hint: The following formula can be used to calculate the distance:
*
*       Distance = Number of Gallons X Average Miles per Gallon
*
* 	Jesus Hilario Hernandez
* 	December 19th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int NUM_OF_GALLONS = 20;

    float in_town_MPG = 23.5,
          out_of_town_MPG = 28.5,

          in_town_distance = NUM_OF_GALLONS * in_town_MPG,
          out_of_town_distance = NUM_OF_GALLONS * out_of_town_MPG;

    cout << endl;
    cout << "The distance a car can travel in town\n";
    cout << "on a 20-gallon gas tank at ";
    cout << in_town_MPG << " MPG is ";
    cout << in_town_distance << " miles." << endl;
    cout << endl;
    cout << "The distance a car can travel on the highway\n";
    cout << "on a 20-gallon tank of gas at ";
    cout << out_of_town_MPG << " MPG is ";
    cout << out_of_town_distance << " miles." << endl;
    cout << endl;

    return 0;
}
/*
11. Distance per Tank of Gas

A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in town, and 28.9 miles per gallon when driven on the highway. Write a program that calculates and displays the distance the car can travel on one tank of gas when driven in town and when driven on the highway.

Hint: The following formula can be used to calculate the distance: 

Distance = Number of Gallons x Average Miles per Gallon 

*/
#include <iostream>
using namespace std;

int main()
{
    const int NUM_OF_GALLONS = 20;

    float inTownMPG = 23.5,
          highwayMPG = 28.5,

          inTownDistance = NUM_OF_GALLONS * inTownMPG,
          highwayDistance = NUM_OF_GALLONS * highwayMPG;

    cout << endl
         << "Number of gallons  = " << NUM_OF_GALLONS << endl 
         << endl
         << "In town MPG        = " << inTownMPG << endl
         << "In town distance   = " << inTownDistance << endl 
         << endl
         << "Highway MPG        = " << highwayMPG << endl
         << "Highway distance   = " << highwayDistance << endl 
         << endl;

    return 0;
}
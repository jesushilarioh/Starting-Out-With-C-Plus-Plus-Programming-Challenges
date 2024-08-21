/*
20. How Much Paint
A particular brand of paint covers 340 square feet per gallon. Write a program to determine and report approximately how many gallons of paint will be needed to paint two coats on a wooden fence that is 6 feet high and 100 feet long.
*/
#include <iostream>
using namespace std;

int main()
{
    const float PAINT_COVERAGE = 340;   // sqft per gallon

    // Calculate the area of the fence: 
    // Area = Height × Length
    float height = 6,   // in feet
          length = 100, // in feet
          area = height * length, 

          // Determine the number of gallons needed: 
          // total Gallons need = Total Area / Coverage per Gallon
          totalArea = area * 2, // 2 coats of paint
          gallonsNeeded = totalArea / PAINT_COVERAGE;

    cout << endl
         << "Fence Dimensions: "                                        << endl
         << "height                 = " << height           << " ft"    << endl
         << "length                 = " << length           << " ft"    << endl
         << "total area             = " << totalArea        << " sqft"  << endl
         << "coverage per gallon    = " << PAINT_COVERAGE   << " sqft"  << endl
         << "Gallons needed         = " << gallonsNeeded                << endl
         << endl;

    return 0;
}
/*

20. Pizza Pi
Joe’s Pizza Palace needs a program to calculate the number of slices a pizza of any size can be divided into. The program should perform the following steps:
A) Ask the user for the diameter of the pizza in inches.
B) Calculate the number of slices that may be taken from a pizza of that size.
A) Display a message telling the number of slices.
To calculate the number of slices that may be taken from the pizza, you must know the following facts:
• Each slice should have an area of 14.125 inches.
• To calculate the number of slices, simply divide the area of the pizza by 14.125.
• The area of the pizza is calculated with this formula:

Area = πr^2

NOTE: π is the Greek letter pi. 3.14159 can be used as its value. The variable r is the radius of the pizza. Divide the diameter by 2 to get the radius.

Make sure the output of the program displays the number of slices in fixed-point notation, rounded to one decimal place of precision. Use a named constant for pi.

*/
#include <iostream>
#include <cmath>    // pow()
#include <iomanip>
using namespace std;

int main()
{
    const float SLICE_AREA_SIZE = 14.125,
                PI         = 3.14159;
    
    float d,    // Diameter
          r,    // Radius
          Area,
          num_of_slices;
    
    cout << "\nWhat is the diameter of the pizza in inches? ";
    cin >> d;

    r = d / 2; 

    Area = PI * pow(r, 2);

    num_of_slices = Area / SLICE_AREA_SIZE;
    
    cout << setprecision(1) << fixed
         << "Number of slices = " << num_of_slices
         << endl;
    
    return 0;
}

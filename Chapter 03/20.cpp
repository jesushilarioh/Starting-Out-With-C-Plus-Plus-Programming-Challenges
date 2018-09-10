/********************************************************************
*
*	20. PIZZA PIE
*
*       Joe’s Pizza Palace needs a program to calculate the number of
*       slices a pizza of any size can be divided into. The program
*       should perform the following steps:
*
*       A) Ask the user for the diameter of the pizza in inches.
*       B) Calculate the number of slices that may be taken from a
*          pizza of that size.
*       C) Display a message telling the number of slices.
*
*       To calculate the number of slices that may be taken from the
*       pizza, you must know the following facts:
*
*       • Each slice should have an area of 14.125 inches.
*       • To calculate the number of slices, simply divide the
*         area of the pizza by 14.125.
*       • The area of the pizza is calculated with this formula:
*
*       Area = πr^2
*
*       NOTE: π is the Greek letter pi. 3.14159 can be used as its value.
*       The variable r is the radius of the pizza. Divide the diameter
*       by 2 to get the radius.
*
*       Make sure the output of the program displays the number of
*       slices in fixed point notation, rounded to one decimal
*       place of precision. Use a named constant for pi.
*
* 	Jesus Hilario Hernandez
* 	Sept 4th 2018
*
********************************************************************/
#include <iostream>
#include <cmath>    // pow()
#include <iomanip>
using namespace std;

int main()
{
    // Constants
    const float SLICE_AREA_SIZE = 14.125,
                PI         = 3.14159;
    
    const int TWO = 2;
    
    // Variables
    float d,    // Diameter
          r,    // Radius
          Area,
          num_of_slices;
    
    // Ask the user for the diameter of the pizza in inches.
    cout << endl;
    cout << "What is the diameter of the pizza in inches? ";
    cin >> d;
    
    // Calculate the # of slices that may be taken from a pizza
    // of that size
    r = d / TWO;    // Radius
    Area = PI * pow(r, TWO);
    num_of_slices = Area / SLICE_AREA_SIZE;
    
    // Display a message telling the number of slices.
    cout << setprecision(1) << fixed;
    cout << "Number of slices = ";
    cout << num_of_slices << endl;
    cout << endl;
    
    // Terminate Program
    return 0;
}

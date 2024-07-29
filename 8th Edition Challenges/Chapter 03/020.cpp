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

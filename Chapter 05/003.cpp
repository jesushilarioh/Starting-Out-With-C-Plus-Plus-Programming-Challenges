/********************************************************************
*
*	  003. Ocean Levels
*
*           Assuming the ocean’s level is currently rising at
*           about 1.5 millimeters per year, write a program that
*           displays a table showing the number of
*           millimeters that the ocean will have risen each year for
*           the next 25 years.
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Constants
    const float MIL_PER_YEAR = 1.5;       // 1.5 millimeters per year.

    // Variables
    float num_of_mil_each_year = 0; // Initialize counter.


    // Display a table of mil risen each year (25 years)
    cout << "--------------------------------------------------\n";
    for (int i = 1; i <= 25; i++)
    {
        num_of_mil_each_year += MIL_PER_YEAR;
        cout << "Year " << i << ":    " << num_of_mil_each_year << endl;
    }
    cout << "--------------------------------------------------\n";

    
    // Terminate program
    return 0;
}

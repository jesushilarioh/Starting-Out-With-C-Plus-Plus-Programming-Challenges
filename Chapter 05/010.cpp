/********************************************************************
*
*	  010. Find as many errors as you can.
*
*       Write a program that uses nested loops to collect data and
*       calculate the average rainfall over a period of years. The
*       program should first ask for the number of years. The
*       outer loop will iterate once for each year. The inner loop
*       will iterate twelve times, once for each month. Each iteration
*       of the inner loop will ask the user for the inches of rainfall
*       for that month.
*
*       After all iterations, the program should display the number of
*       months, the total inches of rainfall, and the average rainfall
*       per month for the entire period.
*
*       Input Validation: Do not accept a number less than 1 for the
*                         number of years. Do not accept negative numbers
*                         for the monthly rainfall.
*
* 	Jesus Hilario Hernandez
* 	May 16th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // CONSTANT VARIABLES
    const int NUM_OF_MONTHS = 12;

    // VARIABLES
    int num_of_years,                   // User input Variable
        total_num_of_months = 0;            // Counter

    double rainfall,                    // User input variable
           total_rainfall,              // Accumulator
           average_rainfall_per_month;  // Average variable

    // ASK:
    // ask for the number of years
    cout << "Enter number of years: ";
    cin >> num_of_years;
    cout << "You've entered " << num_of_years << " years." << endl;

    // CALCULATE:
    // use nested loops to collect data and calculate the average
    // rainfall over a period of years
    for (int i = 0; i < num_of_years; i++) // loop once for each year
    {
        cout << "Year " << (i + 1) << ": " << endl;

        for (int j = 0; j < NUM_OF_MONTHS; j++) // loop once for each month
        {
            // ask the user for the inches of rainfall for that month
            cout << "How much rainfall (inches) for month " << (j + 1) << ": ";
            cin >> rainfall;

            // Accumulate a running total (total_rainfall)
            total_rainfall += rainfall;

            // Counter (total_num_of_months)
            total_num_of_months++;
        }
    }
    // Calculate (average_rainfall_per_month)
    average_rainfall_per_month = total_rainfall / total_num_of_months;

    // DISPLAY
    cout << setprecision(2) << fixed;
    // display the number of months,
    cout << "Total number of months = " << total_num_of_months << endl;
    // display the total inches of rainfall, and
    cout << "Total inches of rainfall = " << total_rainfall << endl;
    // display the average rainfall per month for the entire period
    cout << "Average rainfall per month = " << average_rainfall_per_month << endl;

    return 0;
}

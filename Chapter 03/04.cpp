/********************************************************************
*
*	04. AVERAGE RAINFALL
*
*       Write a program that calculates the average rainfall for three
*       months. The program should ask the user to enter the name of
*       each month, such as Jun or July, and the amount of rain
*       (in inches) that fell each month. The program should
*       display a message similar to the following:
*
*       The average rainfal for June, July, and August is 6.72 inches.
*
* 	Jesus Hilario Hernandez
* 	January 9th 2017
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    const int NUM_OF_MONTHS = 3;

    string month_1,
           month_2,
           month_3;

    float rainfall_month_1,
          rainfall_month_2,
          rainfall_month_3,
          total,
          average;

    // Explain program, ask user to press enter to continue
    cout << endl;
    cout << "---------------------------------------------";
    cout << "\nThis program calculates the average";
    cout << " rainfall for three months." << endl;
    cout << "---------------------------------------------";
    cout << "\n\nPress Enter to continue." << endl;
    cin.get();

    // Ask user for month and rainfall
    cout << "Enter the name for month 1: ";
    cin >> month_1;
    cout << "How many inches of rain fell for " << month_1;
    cout << ": ";
    cin >> rainfall_month_1;

    cout << "Enter the name for month 2: ";
    cin >> month_2;
    cout << "How many inches of rain fell for " << month_2;
    cout << ": ";
    cin >> rainfall_month_2;

    cout << "Enter the name for month 3: ";
    cin >> month_3;
    cout << "How many inches of rain fell for " << month_3;
    cout << ": ";
    cin >> rainfall_month_3;

    // Calculate total & average
    total = rainfall_month_1 + rainfall_month_2 + rainfall_month_3;

    average = total / NUM_OF_MONTHS;

    // Display rainfall average
    cout << setprecision(2) << fixed;
    cout << "\nThe average rainfall for ";
    cout << month_1 << ", " << month_2 << ", " << "and ";
    cout << month_3 << " is ";
    cout << average << " inches.\n" << endl;

    // Terminate Program
    return 0;
}

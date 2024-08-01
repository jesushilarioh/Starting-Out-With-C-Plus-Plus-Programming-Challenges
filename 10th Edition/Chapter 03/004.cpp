/*
4. Average Rainfall
Write a program that calculates the average rainfall for three months. The program should ask the user to enter the name of each month, such as June or July, and the amount of rain (in inches) that fell each month. The program should display a message similar to the following:

The average rainfall for June, July, and August is 6.72 inches.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    const int NUM_OF_MONTHS = 3;
    
    string month1,
           month2,
           month3;
    
    float rainfallMonth1,
          rainfallMonth2,
          rainfallMonth3,
          total,
          average;
    
    cout << "\n3 month rainfall average." << endl
         << "Press Enter to continue." << endl;
    cin.get();
    
    cout << "Month 1 name: "  << endl;
    cin >> month1;
    cout << "Rain amount: " << endl;
    cin >> rainfallMonth1;
    
    cout << "\nMonth 2 name: "  << endl;
    cin >> month2;
    cout << "Rain amount: " << endl;
    cin >> rainfallMonth2;
    
    cout << "\nMonth 3 name: "  << endl;
    cin >> month3;
    cout << "Rain amount: " << endl;
    cin >> rainfallMonth3;
    
    total = rainfallMonth1 + 
            rainfallMonth2 + 
            rainfallMonth3;

    average = total / NUM_OF_MONTHS;
    
    cout << setprecision(2) << fixed
         << "\nRainfall:" << endl
         << month1 << ": " << rainfallMonth1 << " in. " << endl
         << month2 << ": " << rainfallMonth2 << " in. " << endl
         << month3 << ": " << rainfallMonth3 << " in. " << endl
         << "\nTotal rainfall = " << total << endl
         << "Average rainfall = " << average << endl
         << endl;

    return 0;
}

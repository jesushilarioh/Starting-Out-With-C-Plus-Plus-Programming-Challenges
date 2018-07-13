/********************************************************************
*
*	  004. Calories Burned
*
*           Running on a particular treadmill you burn 3.6 calories
*           per minute. Write a program that uses a loop to display
*           the number of calories burned after 5, 10, 15, 20, 25,
*           and 30 minutes.
*
* 	Jesus Hilario Hernandez
* 	March 13th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Constants
    const float CALS_BURNED_PER_MIN = 3.6;

    // Variables
    float calories_burned = 0;

    // Display calories burned after 5, 10, 15, 20, 25, and 30 mins.
    for (int i = 5; i <= 30; i += 5)
    {
        // Calories burned for (i) minutes.
        calories_burned = (i * CALS_BURNED_PER_MIN);
        
        // Display (calories_burned).
        cout << "Calories burned after " << i << " minutes = " << calories_burned << endl;
    }
    // Terminate program
    return 0;
}

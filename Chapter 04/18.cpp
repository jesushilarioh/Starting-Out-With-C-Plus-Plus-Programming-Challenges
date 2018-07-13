/********************************************************************
*
*	18. Fat Gram Calculator
*
*       Write a program that asks for the number of calories and fat
*       grams in a food. The program should display the percentage of
*       calories that come from fat. If the calories from fat are less
*       than 30% of the total calories of the food, it should also
*       display a message indicating that the food is low in fat.
*
*       One gram of fat has 9 calories, so
*       Calories from fat = fat grams * 9
*       The percentage of calories from fat can be calculated as
*       Calories from fat / total calories
*
*       Input Validation: Make sure the number of calories and fat
*       grams are not less than 0. Also, the number of calories from
*       fat cannot be greater than the total number of calories. If that
*       happens, display an error message indicating that either the
*       calories or fat grams were incorrectly entered.
*
* 	Jesus Hilario Hernandez
* 	February 20, 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Varibles
    float cal_from_fat,
          fat_grams,
          per_of_cal,
          total_cal;

    // Ask for the number of calories & fat grams in food
    cout << "\nEnter number of calories: ";
    cin >> total_cal;

    if (total_cal > 0)
    {
        cout << "Enter number of fat grams: ";
        cin >> fat_grams;

        if (fat_grams > 0)
        {
            // Calculate
            cal_from_fat = fat_grams * 9;
            per_of_cal = (cal_from_fat / total_cal) * 100;

            if (cal_from_fat > total_cal)
            {
                cout << "\nCalories from fat cannot be greater\n";
                cout << "then the total number of calories." << endl;
                cout << "Either the total calories or fat\n";
                cout << "grams were entered incorrectly." << endl;
                cout << "Rerun the program and try again." << endl << endl;
            }
            else
            {
                // Display the % of calories from fat
                cout << "Total calories                         = " << total_cal << " cal"<< endl;
                cout << "Total fat grams                        = " << fat_grams << " g" << endl;
                cout << "Total calories from fat                = " << cal_from_fat << " cal from fat"<< endl;
                cout << "Total percentage of calories from fat  = " << per_of_cal << '%' << endl;
                cout << endl;
            }
        }
        else
        {
            // Explain error and try again
            cout << "We're sorry. Total fat grams must be more than 0.\n";
            cout << "Please rerun the progarm and try again." << endl;
        }
    }
    else
    {
        // Explain error and try again
        cout << "We're sorry. Total calories must be more than 0.\n";
        cout << "Please rerun the progarm and try again." << endl;
    }

    // If calories from fat are less than 30%, display "food is low in fat"

    // Terminate program
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    float calories_from_fat,
          fat_grams,
          percentage_of_calories,
          total_calories;

    cout << "\nEnter number of calories: ";
    cin >> total_calories;

    if (total_calories > 0)
    {
        cout << "Enter number of fat grams: ";
        cin >> fat_grams;

        if (fat_grams > 0)
        {
            calories_from_fat = fat_grams * 9;
            percentage_of_calories = (calories_from_fat / total_calories) * 100; // .45 == 45
            
            if (calories_from_fat > total_calories)
            {
                cout << "\nCalories from fat cannot be greater\n";
                cout << "then the total number of calories." << endl;
                cout << "Either the total calories or fat\n";
                cout << "grams were entered incorrectly." << endl;
                cout << "Rerun the program and try again." << endl << endl;
            }
            else
            {
                cout << "Total calories                         = " << total_calories << " cal"<< endl;
                cout << "Total fat grams                        = " << fat_grams << " g" << endl;
                cout << "Total calories from fat                = " << calories_from_fat << " cal from fat"<< endl;
                cout << "Total percentage of calories from fat  = " << percentage_of_calories << '%' << endl;
                cout << endl;
            }
        }
        else
        {
            cout << "We're sorry. Fat grams must be more than 0.\n";
            cout << "Please rerun the progarm and try again." << endl;
        }
    }
    else
    {
        cout << "We're sorry. Total calories must be more than 0.\n";
        cout << "Please rerun the progarm and try again." << endl;
    }
    

    return 0;
}
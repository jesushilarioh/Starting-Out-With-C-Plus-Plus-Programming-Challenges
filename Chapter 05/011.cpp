#include <iostream>
using namespace std;
int main()
{
    float starting_num_of_organisms,
          average_daily_population_increase,
          size_of_daily_population;

    int num_of_days_to_multiply;

    cout << "Enter the starting number of organisms: ";

    while (!(cin >> starting_num_of_organisms) || 
                    starting_num_of_organisms < 2)
    {
        cout << "Oops. Starting number must be 2 or greater." << endl;
        cout << "Enter the starting number of organisms: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    cout << "Enter average daily population increase (%): ";

    while (!(cin >> average_daily_population_increase) || 
                    average_daily_population_increase < 0)
    {
        cout << "Oops. Average daily population increase\n"
             << " must be greater than 0. Enter average\n"  
             << " daily population increase (%): ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    average_daily_population_increase *= .01;

    cout << "Enter number of days they will multiply: ";

    while(!(cin >> num_of_days_to_multiply) || 
                   num_of_days_to_multiply < 1)
    {
        cout << "Oops. Number of days must NOT be less\n"
             << "than 1. Enter number of day they will\n"
             << "multiply: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    for(int i = 0; i < num_of_days_to_multiply; i++)
    {
        cout << "Poplation size for day " << (i + 1);
        cout << ": " << starting_num_of_organisms 
             << endl;
        
        starting_num_of_organisms += 
            (starting_num_of_organisms * 
             average_daily_population_increase);
    }
    

    return 0;
}

/********************************************************************
*
*	  011. POPULATION
*
*       Write a program that will predict the size of a population of
*       organisms. The program should ask the user for the starting
*       number of organisms, their average daily population
*       increase (as a percentage), and the number of days they
*       will multiply. A loop should display the size of the
*       population for each day.
*
*       Input Validation: Do not accept a number less than 2 for the
*                         starting size of the population. Do not
*                         accept a negative number for average
*                         daily population increase. Do not accept a
*                         number less than 1 for the number of days
*                         they will multiply.
*
* 	Jesus Hilario Hernandez
* 	May 17th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    float starting_num_of_organisms,
          average_daily_population_increase,
          size_of_daily_population;

    int num_of_days_to_multiply;

    // ASK
    // ask the user for:
    // the starting number of organisms,
    cout << "Enter the starting number of organisms: ";

    // Input Validation: Do not accept a number less than 2 for the
    //                   starting size of the population
    while (!(cin >> starting_num_of_organisms) || starting_num_of_organisms < 2)
    {
        // Explain Error
        cout << "Oops. Starting number must be 2 or greater." << endl;
        cout << "Enter the starting number of organisms: ";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }

    // their average daily population increase (as a percentage),
    cout << "Enter average daily population increase (%): ";

    // Input Validation: Do not accept a negative number for average
    //                   daily population increase.
    while (!(cin >> average_daily_population_increase) || average_daily_population_increase < 0)
    {
        // Explain Error:
        cout << "Oops. Average daily population increase must be";
        cout << "greater than 0.\n Enter average daily population increase";
        cout << " (%): ";
        // Clear previous input:
        cin.clear();
        // Discard previous input:
        cin.ignore(123, '\n');
    }
    average_daily_population_increase *= .01;

    // the number of days they will multiply.
    cout << "Enter number of days they will multiply: ";
    
    // Input Validation: Do not accept a number less than
    //                   1 for the number of days they will multiply.
    while(!(cin >> num_of_days_to_multiply) || num_of_days_to_multiply < 1)
    {
        cout << "Oops. Number of days must NOT be less than 1.\n";
        cout << "Enter number of day they will multiply: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    // A loop should display the size of the population for each day
    for (int i = 0; i < num_of_days_to_multiply; i++)
    {
        cout << "Poplation size for day " << (i + 1);
        cout << ": " << starting_num_of_organisms << endl;
        starting_num_of_organisms += (starting_num_of_organisms * average_daily_population_increase);
    }

    return 0;
}

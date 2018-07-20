/********************************************************************
*
*	  020. RANDOM NUMBER GUESSING GAME
*      
*       Write a program that generates a random number and 
*       asks the user to guess what the number is. If the user’s 
*       guess is higher than the random number, the program should
*       display “Too high, try again.” If the user’s guess is lower
*       than the random number, the program should display “Too 
*       low, try again.” The program should use a loop that repeats 
*       until the user correctly guesses the random number.
*
* 	Jesus Hilario Hernandez
* 	July 19th 2018
*
********************************************************************/
#include <iostream>
#include <cstdlib>  // For rand and srand
#include <ctime>    // For the time function

using namespace std;
int main() 
{
    // Constants
    const int MIN_VALUE = 1,
              MAX_VALUE = 10;

    // Variables
    int random_num,
        user_num;

    // Get the system time.
    unsigned seed = time(0);
    // Seed the random number generator.
    srand(seed);

    // Assign random num between 1 and 10.
    random_num = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    cout << "Random number is: " << random_num << endl;
    cout << endl;    
   
    cout << "Guess a number between 1 and 10." << endl;
    while(!(cin >> user_num))
    {
        cout << "Error! A number must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    while(user_num != random_num)
    {
        if (user_num < random_num) 
            cout << "Your number is lower." << endl;
        else
            cout << "Your number is higher." << endl;
        cout << "Try again: ";

        while(!(cin >> user_num))
        {
            cout << "Error! A number must be entered: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
    }

    cout << "\nCorrect! " << endl;
    cout << "Random number = " << random_num << endl;
    cout << "Your guess    = " << user_num   << endl;
    cout << endl;

    return 0;
}
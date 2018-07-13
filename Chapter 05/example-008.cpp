/********************************************************************
*
*	  008. Math Tutor
*
*       This program started in Programming Challenge 17 of Chapter 3,
*       and was modified in Programming Challenge 11 of Chapter 4.
*
*       Modify the program again so it displays a menu allowing
*       the user to select an addition, subtraction, multiplication,
*       or division problem. The final selection on the menu should
*       let the user quit the program. After the user has finished
*       the math problem, the program should display the menu
*       again. This process is repeated until the user chooses to quit the
*       program.
*
*       Input Validation: If the user selects an item not on the
*                         menu, display an error message and display
8                         the menu again.
*
* 	Jesus Hilario Hernandez
* 	March 23th 2018
*
********************************************************************/
#include <iostream>
#include <cstdlib>  // For rand and srand functions
#include <ctime>    // For the time function
using namespace std;

int main()
{
    // Constant Variables
    const int MIN_NUM = 0,
              MAX_NUM = 999,

              ADDITION = 1,
              SUBTRACTION = 2,
              MULTIPLICATION = 3,
              DIVISION = 4,
              QUIT_CHOICE = 5;

    // Variables
    int user_answer,
        rand_num_1,
        rand_num_2,
        rand_num_answer,
        menu_selection;

    // Show 2 random numbers to be added
    // Assign system time to a variable.
    unsigned seed = time(0);

    // Seed random number generator with system time
    srand(seed);

    // Display menu with 5 choices
    do
    {

        // Generate two random numbers
        rand_num_1 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;
        rand_num_2 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;

        // Display Menu
        cout << "\nWhat type of math problem would you like to solve? \n";
        cout << "1. Addition"       << endl;
        cout << "2. Subtraction"    << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division"       << endl;
        cout << "5. Quit Program ";
        cin >> menu_selection;

        while (menu_selection < ADDITION || menu_selection > QUIT_CHOICE)
        {
            cout << "\nInvalid selection. \nPlease enter a valid selection: \n";
            cin >> menu_selection;
        }
         if (menu_selection != QUIT_CHOICE)
         {
             switch (menu_selection)
             {
                 case 1: // ADDITION
                     // Display addition problem
                     cout << rand_num_1 << " + " << rand_num_2 << " = ";
                     // calculate sum of two random numbers.
                     rand_num_answer = rand_num_1 + rand_num_2;
                     cin >> user_answer;
                     break;

                 case 2: // SUBTRACTION
                     // Display addition problem
                     cout << rand_num_1 << " - " << rand_num_2 << " = ";
                     // calculate sum of two random numbers.
                     rand_num_answer = rand_num_1 - rand_num_2;
                     cin >> user_answer;

                     break;

                 case 3: // MULTIPLICATION
                     // Display addition problem
                     cout << rand_num_1 << " x " << rand_num_2 << " = ";
                     // calculate sum of two random numbers.
                     rand_num_answer = rand_num_1 * rand_num_2;
                     cin >> user_answer;
                     break;

                 case 4: // DIVISION
                     // Check if 0 is a denominator
                     if (rand_num_2 == 0)
                     {
                         // Swap numerator with 0 denominator
                         int swap_number = rand_num_2;
                         rand_num_1 = rand_num_2;
                         rand_num_1 = swap_number;
                         cout << "SWAPPED" << endl;
                     }
                     // Display addition problem
                     cout << rand_num_1 << " / " << rand_num_2 << " = ";
                     // calculate sum of two random numbers.
                     rand_num_answer = rand_num_1 / rand_num_2;
                     cin >> user_answer;
                     break;
             }
             // Decision statement (check user answer) Display: correct or incorrect
             if (user_answer == rand_num_answer)
                 cout << "\nCongratulations!" << endl << endl;
             else if (user_answer != rand_num_answer)
                 cout << "\nOops. Correct answer here: " << rand_num_answer << endl << endl;
         }
         else
             cout << "Program ending." << endl;

    } while (menu_selection != QUIT_CHOICE);

    // Terminate program
    return 0;
}

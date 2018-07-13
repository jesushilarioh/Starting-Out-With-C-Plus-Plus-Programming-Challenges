/********************************************************************
*
*	  008. Math Tutor
*
*       Create a program so that it displays a menu allowing
*       the user to select an addition, subtraction, multiplication,
*       or division problem. The final selection on the menu should
*       let the user quit the program. After the user has finished
*       the math problem, the program should display the menu
*       again. This process is repeated until the user chooses to quit the
*       program.
*
*       Input Validation: If the user selects an item not on the
*                         menu, display an error message and display
*                         the menu again.
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

    // Assign system time to a variable.
    unsigned seed = time(0);

    // Seed random number generator with system time
    srand(seed);

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
        // user input (menu_selection)
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
                    if (rand_num_2 == 0)
                    {
                        int swamp_num = rand_num_2;
                        rand_num_1 = rand_num_2;
                        rand_num_1 = swamp_num;
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

    return 0;
}

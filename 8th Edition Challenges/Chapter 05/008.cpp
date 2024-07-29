#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    const int MIN_NUM = 0,
              MAX_NUM = 999,

              ADDITION = 1,
              SUBTRACTION = 2,
              MULTIPLICATION = 3,
              DIVISION = 4,
              QUIT_CHOICE = 5;

    int user_answer,
        rand_num_1,
        rand_num_2,
        rand_num_answer,
        menu_selection;

    unsigned seed = time(0);

    srand(seed);

    do
    {
        rand_num_1 = (rand() % (MAX_NUM - MIN_NUM + 1)) + 
                      MIN_NUM;

        rand_num_2 = (rand() % (MAX_NUM - MIN_NUM + 1)) + 
                      MIN_NUM;

        cout << "\nWhat type of math problem would\n"
             << "you like to solve? \n";
        cout << "1. Addition"       << endl;
        cout << "2. Subtraction"    << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division"       << endl;
        cout << "5. Quit Program ";

        while(!(cin >> menu_selection)  ||
               menu_selection < ADDITION || 
               menu_selection > QUIT_CHOICE)
        {
            cout << "\nInvalid selection. Please enter\n"
                 << "a valid selection: \n";
            cin.clear();
            cin.ignore(1200, '\n');
        }

        if (menu_selection != QUIT_CHOICE) 
        {
            switch (menu_selection)
            {
                case 1:
                    cout << rand_num_1 << " + " 
                         << rand_num_2 << " = ";
                    rand_num_answer = rand_num_1 + 
                                      rand_num_2;
                    while(!(cin >> user_answer))
                    {
                        cout << "Error. Number must be "
                             << "chosen.";
                        cin.clear();
                        cin.ignore(1200, '\n');
                    }
                    break;
                case 2:
                    cout << rand_num_1 << " - " 
                         << rand_num_2 << " = ";
                    rand_num_answer = rand_num_1 - 
                                      rand_num_2;
                    while(!(cin >> user_answer))
                    {
                        cout << "Error. Number must be "
                             << "chosen.";
                        cin.clear();
                        cin.ignore(1200, '\n');
                    }
                    break;
                case 3:
                    cout << rand_num_1 << " x " 
                         << rand_num_2 << " = ";
                    rand_num_answer = rand_num_1 * 
                                      rand_num_2;
                    while(!(cin >> user_answer))
                    {
                        cout << "Error. Number must be "
                             << "chosen.";
                        cin.clear();
                        cin.ignore(1200, '\n');
                    }
                    break;
                case 4:
                    cout << rand_num_1 << " / " 
                         << rand_num_2 << " = ";
                    rand_num_answer = rand_num_1 / 
                                      rand_num_2;
                    while(!(cin >> user_answer))
                    {
                        cout << "Error. Number must be "
                             << "chosen.";
                        cin.clear();
                        cin.ignore(1200, '\n');
                    }
                    break;
            }

            if (user_answer == rand_num_answer) 
            {
                cout << "\nCongratulations!" 
                     << endl 
                     << endl;
            }
            else if(user_answer != rand_num_answer) 
            {
                cout << "\nOops. Correct answer here: " 
                     << rand_num_answer 
                     << endl 
                     << endl;
            }
        }
        else
            cout << "Program ending." << endl;
        
    } while (menu_selection != QUIT_CHOICE);
    
    cout << endl;
    return 0;
}

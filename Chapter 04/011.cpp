#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time()

using namespace std;
int main()
{
    // Constant Variables
    const int MIN_NUM = 99,
              MAX_NUM = 999;

    // Variables
    int user_answer,
        rand_num_1,
        rand_num_2,
        rand_num_answer;

    // Assign system time to a variable.
    unsigned seed = time(0);

    // Seed random number generator with system time
    srand(seed);

    // Generate two random numbers
    rand_num_1 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;

    rand_num_2 = (rand() % (MAX_NUM - MIN_NUM + 1)) + MIN_NUM;

    // sum of the two random numbers.
    rand_num_answer = rand_num_1 + rand_num_2;

    // Display math problem & receive answer
    cout << "\n  " << rand_num_1 << endl;
    cout << " +" << rand_num_2 << endl;
    cout << "------" << endl << " ";
    cin >> user_answer;

    // Decision statement & display
    if (user_answer == rand_num_answer)
        cout << "\nCongratulations!";
    else
    {
        cout << "\nOops. Correct answer here: ";
        cout << rand_num_answer;
    }

    // Format line break.
    cout << endl << endl;

    // Terminate program
    return 0;
}

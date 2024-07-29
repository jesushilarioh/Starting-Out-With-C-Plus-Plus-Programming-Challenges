#include <iostream>
#include <cstdlib>  // For rand and srand
#include <ctime>    // For the time method

using namespace std;
int main()
{
    const int MIN_VALUE = 1,
              MAX_VALUE = 10;

    int random_num,
        user_num;

    unsigned seed = time(0);

    srand(seed);

    random_num = (rand() % 
                 (MAX_VALUE - MIN_VALUE + 1)) + 
                  MIN_VALUE;
    
    // cout << "Random number is: " 
    //      << random_num 
    //      << endl 
    //      << endl;

    cout << "Guess a number between 1 and 10." << endl;
    cin >> user_num;

    while (user_num != random_num)
    {
        cout << "Your number is "
             << (user_num < random_num ? 
                "lower." : "higher.");

        cout << "Try again: ";

        cin >> user_num;
    }
    
    cout << "\nCorrect! " << endl;
    cout << "Random number = " << random_num << endl;
    cout << "Your guess    = " << user_num   << endl;
    cout << endl;

    return 0;
}
/********************************************************************
*
*	17. MATH TUTOR
*
*       Write a program that can be used as a math tutor for a
*       young student. The program should display two random numbers
*       to be added, such as
*
*       247 + 129 = ?
*
*       The program should then pause while the student works on the
*       problem. When the student is ready to check the answer,
*       he or she can press a key and the program will display the
*       correct solution:
*
*       247 + 129 = 376
*
* 	Jesus Hilario Hernandez
* 	January 17th 2018
*
********************************************************************/
#include <iostream>
#include <cstdlib>  // For rand and srand functions
#include <ctime>    // For the time function
using namespace std;

int main()
{
    // Constant Variables
    const int MIN_VALUE = 100,
              MAX_VALUE = 1000;

    // Variables
    int num_1,
        num_2,
        answer;

    // Get system time
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    // Explain Program
    cout << endl;
    cout << "-----------------------------------------\n\n";
    cout << "This program displays two random numbers\n";
    cout << "to be added.\n" << endl;

    // Generate two random numbers
    num_1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    num_2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;


    answer = num_1 + num_2;
    // Display the problem
    cout << num_1 << " + " << num_2 << " = ? \n" << endl;

    // Ask user to press ENTER to continue
    cout << "Press \"Enter\" to see solution";
    cin.get();
    cout << endl;

    // Display the answer to the problem
    cout << num_1 << " + " << num_2 << " = ";
    cout << answer << endl;
    cout << "\n-----------------------------------------\n";
    cout << endl;

    return 0;
}

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
    int MIN_VALUE = 100,
        MAX_VALUE = 1000,
        num1,
        num2;

    // Get the system time.
    unsigned seeds = time(0);

    // Seed the random number generator.
    srand(seeds);

    cout << endl;
    cout << "------------------------------------------------------\n" << endl;
    cout << "This program displays two random numbers to be added.\n" << endl;

    // Generate two random numbers to be added
    num1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    num2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    // Display problem to solve
    cout << num1 << " + " << num2 << " = ? \n" << endl;

    // Ask user to press enter to continue
    cout << "Press \"ENTER\" to see solution";
    cin.get();
    cout << endl;

    // Display the answer to the problem
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
    cout << "\n-------------------------------------------------------" << endl;

    // Terminate Program
    return 0;
}

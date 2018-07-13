/********************************************************************
*
*	03. TEST AVERAGE
*
*       Write a program that asks for five test scores. The program
*       should calculate the average test score and display it.
*       The number displayed should be formatted in fixed-point
*       notation, with one decimal point of precision.
*
* 	Jesus Hilario Hernandez
* 	January 10th 2017
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    const int NUM_OF_SCORES = 5;

    float score_1,
          score_2,
          score_3,
          score_4,
          score_5,
          average,
          total;

    // Describe Program
    cout << "\nThis program will calculate the average of ";
    cout << "5 test scores.\n";
    cout << "\nPress enter to continue";
    cin.get();
    cout << endl;

    // Ask user to enter 5 test scores
    cout << "Enter score #1: ";
    cin >> score_1;
    cout << "Enter score #2: ";
    cin >> score_2;
    cout << "Enter score #3: ";
    cin >> score_3;
    cout << "Enter score #4: ";
    cin >> score_4;
    cout << "Enter score #5: ";
    cin >> score_5;

    // Calculate average test score
    total = score_1 + score_2 + score_3 + score_4 + score_5;
    average = total / NUM_OF_SCORES;

    cout << setprecision(1) << fixed;
    cout << "\nThe average test score is ";
    cout << average << '\n' << endl;

    // Terminate Program
    return 0;
}

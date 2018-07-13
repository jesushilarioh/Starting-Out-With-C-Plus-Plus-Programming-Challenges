/********************************************************************
*
*	  013. THE GREATEST AND THE LEAST OF THESE
*
*       Write a program with a loop that lets the user enter a series
*       of integers. The user should enter −99 to signal the end of
*       the series. After all the numbers have been entered,
*       the program should display the largest and smallest
*       numbers entered.
*
* 	Jesus Hilario Hernandez
* 	May 20th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Constant Variables
    const int SENTINEL_VALUE = -99;

    // Variables
    int num,
        min,
        max;

    // Explain program, receive input
    cout << "This program will display the greatest and the least values.\n";
    cout << "Enter a number to begin and enter -99 ";
    cout << "to quit the program." << endl;
    cout << "Enter a value: ";
    cin >> num;

    min = max = num;

    // a loop that lets the user enter a series of integers
    // The user should enter −99 to signal the end of the series
    while (num != -99)
    {

        // Decision statments
        if (num < min)
            min = num;

        if (num > max)
            max = num;

        cout << "Enter a value: ";
        cin >> num;
    }

    // After all the numbers have been entered, the program
    // should display the largest and smallest numbers entered
    cout << "Smallest number is: " << min << endl;
    cout << "Largest number is: "  << max  << endl;

    return 0;
}

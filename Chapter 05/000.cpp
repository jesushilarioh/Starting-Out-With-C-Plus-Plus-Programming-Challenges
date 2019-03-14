/********************************************************************
*
*	  001. SUM OF NUMBERS
*
*           Write a program that asks the user for a positive integer
*           value. The program should use a loop to get the sum of
*           all the integers from 1 up to the number entered. For
*           example, if the user enters 50, the loop will find the
*           sum of 1, 2, 3, 4, ... 50.
*
*           Input Validation: Do not accept a negative starting number.
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    int positive_num,
        total = 0;

    cout << "\nEnter a positive number: ";
    cin >> positive_num;

    while (positive_num < 0)
    {
        cout << "ERROR: a positive number must be chosen" << endl;
        cout << "Enter a positive number: ";
        cin >> positive_num;
    }

    for (int i = 1; i <= positive_num; i++)
    {
        cout << total 
             << "+" 
             << i 
             << " = ";
        total += i;
        cout << total 
             << endl;
    }

    cout << "Total = " << total << endl;
    cout << endl;
}

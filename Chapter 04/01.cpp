/********************************************************************
*
*	01. Minimum/Maximum
*
*       Write a program that asks the user to enter two numbers.
*       The program should use the conditional operator to
*       determine which number is the smaller and which is the larger.
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int num1, num2;

    // Ask the user to enter two numbers
    cout << endl;
    cout << "Enter Number 1: ";
    cin >> num1;
    cout << "Enter Number 2: ";
    cin >> num2;

    // Formatting
    cout << endl;

    // Use a decision structure to determine largest and smallest num
    if (num1 < num2)
    {
        cout << "Number 1 (" << num1 << ") is smallest" << endl;
        cout << "Number 2 (" << num2 << ") is largest"  << endl;
    }
    else
    {
        cout << "Number 1 (" << num1 << ") is largest"  << endl;
        cout << "Number 2 (" << num2 << ") is smallest" << endl;
    }

    // Formatting
    cout << endl;

    // Terminate
    return 0;
}

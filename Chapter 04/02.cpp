/********************************************************************
*
*	02. Roman Numeral Converter
*
*       Write a program that asks the user to enter a number
*       within the range of 1 through 10. Use a switch
*       statement to display the Roman numeral version of
*       that number.
*
*       Input Validation: Do not accept a number less than 1 or
*       greater than 10.
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
    int userNum;

    // Ask the user to enter a number between 1 and 10. (within range)
    cout << "Enter a number between 1 and 10: ";
    cin >> userNum;

    // Use switch statement to display the Roman numeral version of that #.
    switch (userNum)
    {
        case 1:
            cout << "The Roman numeral for ";
            cout  << x << " is I\n";
            break;
        case 2:
            cout << "The Roman numeral for ";
            cout << x << " is II\n";
            break;
        case 3:
            cout << "The Roman numeral for ";
            cout << x << " is III\n";
            break;
        case 4:
            cout << "The Roman numeral for ";
            cout << x << " is IV\n";
            break;
        case 5:
            cout << "The Roman numeral for ";
            cout << x << " is V\n";
            break;
        case 6:
            cout << "The Roman numeral for ";
            cout << x << " is VI\n";
            break;
        case 7:
            cout << "The Roman numeral for ";
            cout << x << " is VII\n";
            break;
        case 8:
            cout << "The Roman numeral for ";
            cout << x << " is VIII\n";
            break;
        case 9:
            cout << "The Roman numeral for ";
            cout << x << " is XI\n";
            break;
        case 10:
            cout << "The Roman numeral for ";
            cout << x << " is X\n";
            break;
        default:
            cout << "You must enter a number between 1 and 10\n";
            cout << "Run the program over and try again.\n";
            break;
    }
    // Terminate program
    return 0;
}
/********************************************************************
*
*	  022. SQUARE DISPLAY
*
*       Write a program that asks the user for a positive integer 
*       no greater than 15. The program should then display a 
*       square on the screen using the character ‘X’. The number 
*       entered by the user will be the length of each side of 
*       the square. For example, if the user enters 5, the 
*       program should display the following:
*
* 	Jesus Hilario Hernandez
* 	July 30th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main() 
{
    // Variables
    int positive_int;   // User defined

    // Ask user for positive integer no greater than 15
    cout << "Enter a positive integer no greater than 15: ";
    while(!(cin >> positive_int) || positive_int < 0 || positive_int > 15 || (positive_int % 2 != 0))
    {
        cout << "Error. A positive integer no \n";
        cout << "greater than 15 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    
    for(int i = 0; i < positive_int; i++)
    { 
        for(int i = 0; i < positive_int; i++)
            cout << "x";

        cout << endl;
    }
    
    // Terminate program
    return 0;
}
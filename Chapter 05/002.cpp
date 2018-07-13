/********************************************************************
*
*	  02. Characters for the ASCII Codes
*
*           Write a program that uses a loop to display the
*           characters for the ASCII codes 0 through 127. Display 16
*           characters on each line.
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    char ascii_code_number;

    // Display ASCII codes 0 through 127
    for (int i = 0; i <= 127; i++)
    {
        ascii_code_number = i;
        cout << ascii_code_number << " ";
        
        if (i % 16 == 0)
            cout << endl;
    }

    // Line break;
    cout << endl;

    // Terminate Program
    return 0;
}

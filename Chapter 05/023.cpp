/********************************************************************
*
*	  023. PATTERN DISPLAYS
*
*       Write a program that uses a loop to display Pattern A below, 
*       followed by another loop that displays Pattern B.
*       ================================
*       Pattern A       Pattern B
*       --------------------------------
*       +               ++++++++++
*       ++              +++++++++
*       +++             ++++++++
*       ++++            +++++++
*       +++++           ++++++
*       ++++++          +++++
*       +++++++         ++++
*       ++++++++        +++
*       +++++++++       ++
*       ++++++++++      +
*       =================================
*
* 	Jesus Hilario Hernandez
* 	July 30th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Constant Variables
    const int TEN = 10,
              ZERO = 0;

    // Variables
    char plus = '+';

    // Pattern A
    cout << "\nPatter A: " << endl;
    for(int i = ZERO; i < TEN; i++)
    {
        for(int j = ZERO; j <= i; j++)
            cout << plus;

        cout << endl;
    }

    // Pattern B
    cout << "\nPatter B: " << endl;
    for(int i = ZERO; i < TEN; i++)
    {
        for(int j = TEN; j > i; j--)
            cout << plus;

        cout << endl;
    }
    
    
    // Terminate
    return 0;
}
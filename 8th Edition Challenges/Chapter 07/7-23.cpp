// This program is a driver that tests a function 
// comparing the contents of two int arrays.
#include <iostream>
using namespace std;

bool testPIN(const int [], const int [], int);

int main()
{
    const int NUMBER_OF_DIGITS = 7;
    int pin_1[NUMBER_OF_DIGITS] = {2, 4, 1, 8, 7, 9, 0},
        pin_2[NUMBER_OF_DIGITS] = {2, 4, 6, 8, 7, 9, 0},
        pin_3[NUMBER_OF_DIGITS] = {1, 2, 3, 4, 5, 6, 7};


    if (testPIN(pin_1, pin_2, NUMBER_OF_DIGITS))
        cout << "Error: pin_1 and pin_2 report to be the same.\n";
    else
        cout << "Success: pin_1 and pin 2 are different.\n";


    if (testPIN(pin_1, pin_3, NUMBER_OF_DIGITS))
        cout << "ERROR: pin_1 and pin_3 report to be the same.\n";
    else
        cout << "SUCCESS: pin_1 and pin_3 are different.\n";
    

    if (testPIN(pin_1, pin_2, NUMBER_OF_DIGITS))
        cout << "SUCCESS: pin_1 and pin_1 report to be the same.\n";
    else
        cout << "ERROR: pin_1 and pin_1 report to be different.\n";
    
    
    return 0;
}

//*******************************************************************
// The following function accepts two int arrays. The arrays are    * 
// compared. If they contain the same values, true is returned.     * 
// If they contain different values, false is returned.             * 
//*******************************************************************
bool testPIN(const int customerPIN[], const int databasePIN[], int size)
{
    for(int index = 0; index < size; index++)
    {
        if (customerPIN[index] != databasePIN[index])
            return false;
    }
    return true;
}
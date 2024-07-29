/************************************************************
 *
 *   15. vector Modification
 * 
 *  Modify the National Commerce Bank case study presented 
 *  in Program 7-23 so pin1, pin2, and pin3 are vectors 
 *  instead of arrays. You must also modify the testPIN 
 *  function to accept a vector instead of an array.
 *
 *************************************************************/
// This program is a driver that tests a function 
// comparing the contents of two int arrays.
#include <iostream>
#include <vector> // Added

using namespace std;

bool testPIN(const vector<int>, const vector<int>, int); // Changed

int main()
{
    const int NUMBER_OF_DIGITS = 7;
    vector<int> pin_1 {2, 4, 1, 8, 7, 9, 0};    // Changed
    vector<int> pin_2 {2, 4, 6, 8, 7, 9, 0};    // Changed
    vector<int> pin_3 {1, 2, 3, 4, 5, 6, 7};    // Changed


    if (testPIN(pin_1, pin_2, NUMBER_OF_DIGITS))
        cout << "ERROR: pin_1 and pin_2 report to be the same.\n";
    else
        cout << "SUCCESS: pin_1 and pin 2 are different.\n";


    if (testPIN(pin_1, pin_3, NUMBER_OF_DIGITS))
        cout << "ERROR: pin_1 and pin_3 report to be the same.\n";
    else
        cout << "SUCCESS: pin_1 and pin_3 are different.\n";
    

    if (testPIN(pin_1, pin_1, NUMBER_OF_DIGITS))
        cout << "SUCCESS: pin_1 and pin_1 report to be the same.\n";
    else
        cout << "ERROR: pin_1 and pin_1 report to be different.\n";
    
    
    return 0;
}

// Changed
bool testPIN(const vector<int> customerPIN, const vector<int> databasePIN, int size)
{
    for(int index = 0; index < size; index++)   // Changed
    {
        if (customerPIN[index] != databasePIN[index])
            return false;
    }
    return true;
}
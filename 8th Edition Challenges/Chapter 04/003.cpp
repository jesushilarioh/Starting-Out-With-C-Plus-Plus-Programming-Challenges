#include <iostream>
using namespace std;

int main()
{
    // Variables
    int month, 
        year, 
        day;
        
    string magic;

    // Ask user to enter month, day, and year
    cout << "Enter the month ";
    cout << "(e.g. January = 1, June = 6): ";
    cin >> month;

    cout << "Enter the day ";
    cout << "(e.g. 1, 2, 3, 4, etc..): ";
    cin >> day;
    
    cout << "Enter the year ";
    cout << "(e.g. 1978 = 78, 1991 = 91, 2016 = 16): ";
    cin >> year;

    // Calculation
    magic = (month * day == year) ? "magic" : "not magic";

    // if (month * day == year)
    //     magic = "magic";
    // else 
    //     magic = "not magic";

    // Determine whether month * day = year
    cout << "\nThe date is " << magic << endl;

    // Terminate program
    return 0;
}

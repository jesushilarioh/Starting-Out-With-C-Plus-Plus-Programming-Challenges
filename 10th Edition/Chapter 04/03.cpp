
#include <iostream>
using namespace std;

int main()
{
    // Variables
    int month, 
        year, 
        day;

    cout << "\nEnter the month (e.g. January = 1, June = 6): ";
    cin >> month;

    cout << "Enter the day (e.g. 1, 2, 3, 4, etc..): ";
    cin >> day;
    
    cout << "Enter the year (e.g. 1978 = 78, 1991 = 91, 2016 = 16): ";
    cin >> year;


    string magic = (month * day == year) ? "magic" : "not magic";

    cout << "\nThe date is " << magic << endl
         << endl;


    return 0;
}

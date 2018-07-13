/********************************************************************
*
*	03. Magic Dates
*
*       The date June 10, 1960 is special because when we write it
*       in the following format, the month times the day equals the
*       year.
*
*           6/10/60
*
*       Write a program that asks the user to enter a month (in
*       numeric form), a day, and a two-digit year. The program should
*       then determine whether the month times the day is equal to the
*       year. If so, it should display a message saying the date is
*       magic. Otherwise it should display a message saying the date
*       is not magic.
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    int month, year, day;
    // Ask user to enter month, day, and year
    cout << "Enter the month (e.g. January = 1, June = 6): ";
    cin >> month;
    cout << "Enter the day (e.g. 1, 2, 3, 4, etc..): ";
    cin >> day;
    cout << "Enter the year (e.g. 1978 = 78, 1991 = 91, 2016 = 16): ";
    cin >> year;

    // Determine whether month * day = year
    cout << endl;
    cout << "The date is " << (month * day == year ? "magic" : "not magic");
    cout << endl;
    // Terminate program
    return 0;
}

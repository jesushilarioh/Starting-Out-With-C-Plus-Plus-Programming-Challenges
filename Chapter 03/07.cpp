/********************************************************************
*
*	07. BOX OFFICE
*
*       A movie theater only keeps a percentage of the revenue earned
*       from ticket sales. The remainder goes to the movie distributor.
*       Write a program that calculates a theater's gross and net box
*       office profit for a night. The program should ask for the name
*       of the movie, and how many adult and child tickets were sold.
*       (The price of an adult ticket is $10.00 and a child's ticket
*       is $6.00.) It should display a report similar to
*
*       Movie Name:                 "Wheels of Fury"
*       Adult Tickets Sold:         382
*       Child Tickets Sold:         127
*       Gross Box Office Profit:    $4582.00
*
*       (NOTE: Assume the theater keeps 20 percent of the gross box
*           office profit.)
*
* 	Jesus Hilario Hernandez
* 	July 14th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Constant variables
    const float ADULT_PRICE = 10,
                CHILD_PRICE = 6,
                PROFIT = .20;

    string movie_name;

    int adult_tkt,
        child_tkt;

    float total,
          theater_per;

    // Ask for movie name
    cout << "\nWhat was the name of the movie? ";
    getline(cin, movie_name);

    // Ask for number of adult and child tickets
    cout << "\nHow many adult tickets? ";
    cin >> adult_tkt;
    cout << "How many child tickets? ";
    cin >> child_tkt;

    // Calculate gross and net profit
    total = (adult_tkt * ADULT_PRICE) + (child_tkt * CHILD_PRICE);
    theater_per = total * PROFIT;

    // Display report
    cout << setprecision(2) << fixed;
    cout << "\nMovie Name: \"";
    cout << movie_name << '\"' <<endl;
    cout << "Adult tickets sold:      " << setw(10);
    cout << adult_tkt;
    cout << "\nChild tickets sold:      " << setw(10);
    cout << child_tkt;
    cout << "\nTotal cost:              " << setw(10);
    cout << total;
    cout << "\nGross Box Office Profit: " << setw(10);
    cout << theater_per << '\n' <<endl;

    // Terminate Program
    return 0;
}

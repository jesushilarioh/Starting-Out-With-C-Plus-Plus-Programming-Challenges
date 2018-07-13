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
* 	January 7th 2017
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    string movie_name;
    int adult_tickets,
        child_tickets;

    float total_cost,
          theater_percentage;

    // ask for the name of the movie
    cout << endl;
    cout << "What was the name of the movie? ";
    getline(cin, movie_name);

    // ask how many adult and child tickets were sold
    cout << "How many adult tickets? ";
    cin >> adult_tickets;
    cout << "How many child tickets? ";
    cin >> child_tickets;

    // calculate the gross and net box office profit
    total_cost = (adult_tickets * 10) + (child_tickets * 6);
    theater_percentage = total_cost * .20;

    // display the report
    cout << setprecision(2) << fixed;
    cout << "Movie Name: " << movie_name << endl;
    cout << "Adult tickets sold:             " << setw(10) << adult_tickets << endl;
    cout << "Child tickets sold:             " << setw(10) << child_tickets << endl;
    cout << "Total cost:                    $" << setw(10) << total_cost << endl;
    cout << "Gross Box Office Profit @ %20: $" << setw(10) << theater_percentage << endl;
    cout << endl;

    return 0;
}

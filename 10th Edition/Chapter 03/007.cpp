/*
7. Box Office
A movie theater only keeps a percentage of the revenue earned from ticket sales. The remainder goes to the movie distributor. Write a program that calculates a theater’s gross and net box office profit for a night. The program should ask for the name of the movie, and how many adult and child tickets were sold. (The price of an adult ticket is $10.00 and a child’s ticket is $6.00.) It should display a report similar to:

Movie Name: “Wheels of Fury”
Adult Tickets Sold: 382
Child Tickets Sold: 127
Gross Box Office Profit: 4,582.00
Net Box Office Profit: $ $ 3,665.60
Amount Paid to Distributor: $ 916.40 

NOTE: Assume the theater keeps 20 percent of the gross box office profit.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float ADULT_PRICE = 10,
                CHILD_PRICE = 6,
                PROFIT = .20; // 20%
    
    string movie_name;
    
    int adult_tkt,
        child_tkt;
    
    float total,
          theater_percentage;
    
    cout << "\nMovie name? ";
    getline(cin, movie_name);
    
    cout << "How many adult tickets? ";
    cin >> adult_tkt;

    cout << "How many child tickets? ";
    cin >> child_tkt;
    
    total = (adult_tkt * ADULT_PRICE) + (child_tkt * CHILD_PRICE);
    theater_percentage = total * PROFIT;
    
    cout << setprecision(2) << fixed << endl
         << "Movie Name:                " << setw(10) << movie_name          << endl
         << "Adult tickets sold:        " << setw(10) << adult_tkt           << endl
         << "Child tickets sold:        " << setw(10) << child_tkt           << endl
         << "Total cost:                " << setw(10) << total               << endl
         << "Gross Box Office Profit:   " << setw(10) << theater_percentage  << endl 
         <<endl;
    
    return 0;
}

/*
18. Interest Earned
Assuming there are no deposits other than the original investment, the balance in a savings account after one year may be calculated as

Amount = Principal x (1 + Rate/T)^T

Principal is the balance in the savings account, Rate is the interest rate, and T is the number of times the interest is compounded during a year (T is 4 if the interest is compounded quarterly).

Write a program that asks for the principal, the interest rate, and the number of times the interest is compounded. It should display a report similar to:

Interest Rate:          4.25%
Times Compounded:       12
Principal:              $ 1000.00
Interest:               $ 43.34
Amount in Savings:      $ 1043.34



*/
#include <iostream>
#include <iomanip>
#include <cmath>    // pow(5, 10);
using namespace std;

int main()
{
    
    float principal,
          rate,
          amount,
          total_interest,
          amount_in_savings;
    
    int T;  // T
    
    // Input
    cout << "\nWhat is the pricipal balance? ";
    cin >> principal;
    cout << "What is the interest rate? %";
    cin >> rate;
    cout << "Number of times the interest is compounded during a year? ";
    cin >> T;
    
    // Process
    amount = 
        principal * pow
            (
                (1 + (rate/100)/T), T
            );
    
    total_interest = amount - principal;

    // Output
    cout << setprecision(2) << fixed << right << endl
         << "Interest Rate:        " << setw(10) << rate << "% " << endl
         << "Times Compounded:     " << setw(10) << T << endl
         << "Principal:           $" << setw(10) << principal << endl
         << "Interest:            $" << setw(10) << total_interest << endl
         << "Amount after a year: $" << setw(10) << amount << endl
         << endl;
    
    return 0;
}

/********************************************************************
*
*   NEEDS TO BE OVER LOOKED!
*   NEEDS TO BE OVER LOOKED!
*   NEEDS TO BE OVER LOOKED!
*   NEEDS TO BE OVER LOOKED!
*
*	18. Interest Earned
*
*       Assuming there are no deposits other than the original
*       investment, the balance in a savings account after one
*       year may be calculated as
*
*       Amount = Principal * (1 + Rate/T)^T
*
*       Principal is the balance in the savings account, Rate is
*       the interest rate, and T is the number of times the interest
*       is compounded during a year (T is 4 if the interest is
*       compounded quarterly).
*
*       Write a program that asks for the principal,
*       the interest rate, and the number of times the interest
*       is compounded. It should display a report similar
*       to
*
*       Interest Rate:                4.25%
*       Times Compounded:               12
*       Principal:              $  1000.00
*       Interest:               $    43.34
*       Amount in Savings:      $  1043.34
*
* 	Jesus Hilario Hernandez
* 	January 25th 2017
*
********************************************************************/
#include <iostream>
#include <cmath>    // For pow() function
#include <iomanip>  // For formatting

using namespace std;

int main()
{
    // Variables.
    double Rate,
          Principal,
          T,
          Amount,
          power;

    // Ask the user for the
    //      principal,
    //      interest rate,
    //      num of times interest is compounded
    cout << endl;
    cout << "What is the pricipal balance in the savings account? ";
    cin >> Principal;
    cout << "What is the interest rate? ";
    cin >> Rate;
    cout << "What is the number of times the interest is compounded";
    cout << "\nduring a year? ";
    cin >> T;

    // Calculate the amount in savings
    // Amount = Principal * (1 + Rate/T)^T
    Amount = Principal * pow((1 + (((Rate * .01))/T)), T);

    // Display the report:
    /********************************************
     *       Interest Rate:                4.25%
     *       Times Compounded:               12
     *       Principal:              $  1000.00
     *       Interest:               $    43.34
     *       Amount in Savings:      $  1043.34
     *********************************************/
    cout << setprecision(2) << fixed << right << endl;
    cout << "Interest Rate:     " << setw(10) << Rate             << endl;
    cout << "Times Compounded:  " << setw(10) << T                << endl;
    cout << "Principal:         " << setw(10) << Principal        << endl;
    cout << "Interest:          " << setw(10) << Principal * (Rate * .01) << endl;
    cout << "Amount in Savings: " << setw(10) << Amount           << endl;

    // Terminate Program
    return 0;
}

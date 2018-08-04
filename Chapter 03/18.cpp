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
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    const int ONE = 1,
              HUNDRED = 100;

    float principal,
          interest_rate,
          amount_after_a_year,
          total_interest,
          amount_in_savings;

    int times_interest_compounded;

    // asks for the principal, interest rate, and number of times the interest is compounded
    cout << endl;
    cout << "What is the pricipal balance in the" << endl;
    cout << "savings account? ";
    cin >> principal;

    cout << "What is the interest rate? %";
    cin >> interest_rate;

    cout << "What is the number of times the interest\n";
    cout << "is compounded during a year? ";
    cin >> times_interest_compounded;

    // Calculate
    interest_rate /= HUNDRED;

    amount_after_a_year = principal * pow((ONE + interest_rate/times_interest_compounded), times_interest_compounded);

    total_interest = amount_after_a_year - principal;

    interest_rate *= HUNDRED;

    // Display
    cout << setprecision(2) << fixed << right << endl;

    cout << "Interest Rate:        " << setw(10);
    cout << interest_rate << '%' << endl;

    cout << "Times Compounded:     " << setw(10);
    cout << times_interest_compounded << endl;

    cout << "Principal:           $" << setw(10);
    cout << principal << endl;

    cout << "Interest:            $" << setw(10);
    cout << total_interest << endl;

    cout << "Amount after a year: $" << setw(10);
    cout << amount_after_a_year << endl;

    // Terminate Program
    return 0;
}

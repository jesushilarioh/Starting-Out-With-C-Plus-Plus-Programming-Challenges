/********************************************************************
*
*	19. MONTHLY PAYMENTS
*
*       The monthly payment on a loan may be calculated by the
*       following formula:
*       Payment = [Rate * (1 + Rate)^N / ((1 + Rate)^N - 1)] * L
*
*       Rate is the monthly interest rate, which is the annual interest
*       rate divided by 12. (12% annual interest would be 1 percent
*       monthly interest.) N is the number of payments, and L is the
*       amount of the loan. Write a program that asks for these
*       values and displays a report similar to
*
*       Loan Amount:            $ 10000.00
*       Monthly Interest Rate:          1%
*       Number of Payments:             36
*       Monthly Payment:        $   332.14
*       Amount Paid Back:       $ 11957.15
*       Interest Paid:          $  1957.15
*
* 	Jesus Hilario Hernandez
* 	August 3rd 2018
*
********************************************************************/
#include <iostream>
#include <cmath>    // For pow() function
#include <iomanip>  // For formatting

using namespace std;

int main()
{
    // Constants
    const int ONE = 1,
              HUNDRED = 100;

    // Variables
    int N = 36;         // Number of payments

    float Rate = 1,     // Monthly interest rate = Annual interest rate / 12
          L = 1500,    // Amount of the loan
          Payment,
        amount_paid_back,
        interest_paid;


    // Ask the user for Rate, number of paymets, and amount of the loan
    cout << endl;
    cout << "What is interest rate of the loan? %";
    cin >> Rate;
    cout << "What is the Amount of the loan? ";
    cin >> L;
    cout << "Number of payments? ";
    cin >> N;

    // Calculate the Monthly payment
    Rate /= HUNDRED;
    // Payment = [Rate * (1 + Rate)^N / ((1 + Rate)^N - 1)] * L
    Payment = ((Rate) * pow(ONE + (Rate), N) / (pow(ONE + (Rate), N) - ONE)) * L;

    Rate *= HUNDRED;

    amount_paid_back =  N * Payment;

    interest_paid    = (N * Payment) - L;
    // Display
    /************************************************
     *       Loan Amount:            $ 10000.00     *
     *       Monthly Interest Rate:          1%     *
     *       Number of Payments:             36     *
     *       Monthly Payment:        $   332.14     *
     *       Amount Paid Back:       $ 11957.15     *
     *       Interest Paid:          $  1957.15     *
     ************************************************/

    cout << setprecision(2) << fixed << right << endl;

    cout << "Loan Amount:           $" << setw(10) << L     << endl;
    cout << "Monthly Interest Rate: " << setw(10) << Rate << '%' << endl;
    cout << "Number of Payments:     " << setw(10) << N     << endl;
    cout << "Monthly Payment:       $" << setw(10) << Payment << endl;
    cout << "Amount Paid Back:      $" << setw(10) << N * Payment << endl;
    cout << "Interest Paid:         $" << setw(10) << (N * Payment) - L;
    cout << endl << endl;
    return 0;
}

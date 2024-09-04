/*
19. Monthly payments

The monthly payment on a loan may be calculated by the following formula:

    Payment = [Rate * (1 + Rate)^N / ((1 + Rate)^N - 1)] * L

Rate is the monthly interest rate, which is the annual interest rate divided by 12. (12 percent annual interest would be 1 percent monthly interest.) N is the number of payments, and L is the amount of the loan. Write a program that asks for these values then displays a report similar to:

Loan Amount: $ 10000.00 
Monthly Interest Rate: 1% 
Number of Payments: 36 
Monthly Payment: $ 332.14 
Amount Paid Back: $ 11957.15 
Interest Paid: $ 1957.15


*/
#include <iostream>
#include <iomanip>  // setprecision() setw()
#include <cmath>    // pow(6, 2) 6^2
using namespace std;

int main()
{
    const int ONE     = 1,
              HUNDRED = 100,
              NUMBER_OF_MONTHS = 12;
    
    int N;
    float Rate,
          L,
          Payment,
          amount_paid_back,
          interest_paid,
          annual_interest_rate,
          monthly_interest_rate;
    
    // Input
    cout << "\nWhat is annual interest rate? % ";
    cin >> Rate;
    cout << "What is the Amount of the loan? ";
    cin >> L;
    cout << "Number of payments? ";
    cin >> N;

    annual_interest_rate = Rate / 100,
    monthly_interest_rate = annual_interest_rate / 12;
    
    // Process
    // Payment = [monthly_interest_rate * (1 + monthly_interest_rate)^N / ((1 + monthly_interest_rate)^N - 1)] * L
    Payment = 
    (
        (monthly_interest_rate) * 
        pow(1 + (monthly_interest_rate), N) / 
        (
            pow(1 + (monthly_interest_rate), N) - 1
        )
    ) 
    * L;
    
    amount_paid_back = N * Payment;
    interest_paid    = (N * Payment) - L;
    
    // Output
    cout << setprecision(2) << fixed << right << endl
         << "Loan Amount:           $" << setw(10) << L << endl
         << "Monthly Interest Rate: " << setw(10) << monthly_interest_rate * 100 << '%' << endl
         << "Number of Payments:     " << setw(10) << N     << endl
         << "Monthly Payment:       $" << setw(10) << Payment << endl
         << "Amount Paid Back:      $" << setw(10) << amount_paid_back << endl
         << "Interest Paid:         $" << setw(10) << interest_paid << endl 
         << endl;
    
    return 0;
}

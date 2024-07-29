#include <iostream>
#include <iomanip>
#include <cmath>    // pow(5, 10);
using namespace std;

int main()
{
    // Constant
    const int ONE     = 1,
              HUNDRED = 100;
    
    // Variables
    float principal,                // Principal
          interest_rate,
          amount_after_a_year,      // Amount
          total_interest,
          amount_in_savings;
    
    int times_interest_compounded;  // T
    
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
    interest_rate /= HUNDRED; // 4.25% == .0425
    // Amount = Principal * (1 + Rate/T)^T
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

/*
3. Sales Tax
Write a program that will compute the total sales tax on a $95 purchase. Assume the state sales tax is 4 percent, and the county sales tax is 2 percent.
*/
#include <iostream>
using namespace std;

int main()
{
    const float STATE_TAX = .04,
                COUNTY_TAX = .02;
    int purchase_amount = 95;

    float total_state_purchase = purchase_amount * STATE_TAX,
          total_county_purchase = purchase_amount * COUNTY_TAX;

    cout << "\nPurchase amout   = $" << purchase_amount
         << "\nTotal state tax  = $" << total_state_purchase 
         << "\nTotal county tax = $" << total_county_purchase
         << "\n" << endl;

    return 0;
}
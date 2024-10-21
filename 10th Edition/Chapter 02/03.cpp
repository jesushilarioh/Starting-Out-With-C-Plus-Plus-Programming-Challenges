/*
3. Sales Tax

Video walk through: https://youtu.be/zPrXAcTC-tE
Video walk through: https://youtu.be/zPrXAcTC-tE
Video walk through: https://youtu.be/zPrXAcTC-tE

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
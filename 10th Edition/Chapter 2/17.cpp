/*
17. Stock Commission
Kathryn bought 750 shares of stock at a price of $35.00 per share. She must pay her stockbroker a 2 percent commission for the transaction. Write a program that calcu- lates and displays the following:

• The amount paid for the stock alone (without the commission).
• The amount of the commission.
• The total amount paid (for the stock plus the commission).

*/
#include <iostream>
using namespace std;

int main()
{
    const float COMMISSION_PERCENT = 2;

    int numberOfShares = 750,
        sharePrice   = 35,
        amountPaidForShares    = numberOfShares * sharePrice;

    float commissionTotal = amountPaidForShares * (COMMISSION_PERCENT / 100), 
          totalPaid = commissionTotal + amountPaidForShares;

    cout << endl 
         << "Amount paid        : $" << amountPaidForShares         << endl
         << "Commission %       : "  << COMMISSION_PERCENT << "%"   << endl
         << "Commission total   : $" << commissionTotal             << endl
         << "Grand Total        : $" << totalPaid                   << endl
         << endl;

    return 0;
}
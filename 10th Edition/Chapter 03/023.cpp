/*

23. Stock Transaction Program
Last month Joe purchased some stock in Acme Software, Inc. Here are the details of the purchase:

• The number of shares that Joe purchased was 1,000.
• When Joe purchased the stock, he paid $45.50 per share. 
• Joe paid his stockbroker a commission that amounted to 2 percent of the amount
he paid for the stock.

Two weeks later, Joe sold the stock. Here are the details of the sale:
• The number of shares that Joe sold was 1,000.
• He sold the stock for $56.90 per share.
• He paid his stockbroker another commission that amounted to 2 percent of the
amount he received for the stock.

Write a program that displays the following information:
• The amount of money Joe paid for the stock.
• The amount of commission Joe paid his broker when he bought the stock.
• The amount that Joe sold the stock for.
• The amount of commission Joe paid his broker when he sold the stock.
• Display the amount of profit that Joe made after selling his stock and paying the
two commissions to his broker. (If the amount of profit that your program displays is a negative number, then Joe lost money on the transaction.)

*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float BROKER_COM_PER = .02,
                PRICE_PAID_PER_SHARE = 45.50,
                PRICE_SOLD_PER_SHARE = 56.90;

    const int NUM_OF_SHARES = 1000;

    float joes_stock_purchase,
          total_com_paid_bought, // Total commission when bought
          total_com_paid_sold,  // Total commission when bought
          amount_stock_sold_for,
          amount_of_profit;

    // INPUT

    // PROCESS
    joes_stock_purchase = NUM_OF_SHARES * PRICE_PAID_PER_SHARE;
    total_com_paid_bought = joes_stock_purchase * BROKER_COM_PER;
    amount_stock_sold_for = NUM_OF_SHARES * PRICE_SOLD_PER_SHARE;
    total_com_paid_sold = amount_stock_sold_for * BROKER_COM_PER;
    amount_of_profit = (amount_stock_sold_for - (total_com_paid_bought + total_com_paid_sold)) - joes_stock_purchase;

    // OUTPUT
    cout << setprecision(2) << fixed << endl // .00
         << "Amount paid for the stock: " << joes_stock_purchase << endl
         << "Amount commission paid when bought stock: " << total_com_paid_bought << endl
         << "Amount Joe sold stock for: " << amount_stock_sold_for << endl
         << "Amount commission paid when stock sold: " << total_com_paid_sold << endl
         << "Amount of profit after selling stock and paying two commissions to broker: " << amount_of_profit 
         << endl;

    return 0;
}

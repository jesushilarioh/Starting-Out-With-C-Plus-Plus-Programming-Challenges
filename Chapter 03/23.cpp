/********************************************************************
*
*	23. STOCK TRANSACTION PROGRAM
*
*       Last month Joe purchased some stock in Acme Software, Inc.
*       Here are the details of the purchase:
*
*       • The number of shares that Joe purchased was 1,000.
*       • When Joe purchased the stock, he paid $45.50 per share.
*       • Joe paid his stockbroker a commission that amounted to 2%
*         of the amount he paid for the stock.
*
*       Two weeks later Joe sold the stock. Here are the details of
*       the sale:
*
*       • The number of shares that Joe sold was 1,000.
*       • He sold the stock for $56.90 per share.
*       • He paid his stockbroker another commission that amounted
*         to 2% of the amount he received for the stock.
*
*       Write a program that displays the following information:
*       • The amount of money Joe paid for the stock.
*       • The amount of commission Joe paid his broker when he
*         bought the stock.
*       • The amount that Joe sold the stock for.
*       • The amount of commission Joe paid his broker when he sold
*         the stock.
*       • Display the amount of profit that Joe made after selling
*         his stock and paying the two commissions to his broker.
*         (If the amount of profit that your program displays is a
*         negative number, then Joe lost money on the transaction.)
*
* 	Jesus Hilario Hernandez
* 	January 31 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>  // Formatting

using namespace std;

int main()
{
    // Variables
    const float BROKER_COM_PER = .02,           // % paid to broker
                PRICE_PAID_PER_SHARE = 45.50,   // Price per share when bought
                PRICE_SOLD_PER_SHARE = 56.90;   // Price per share when sold

    const int NUM_OF_SHARES = 1000;

    float joes_stock_purchase,      // Original stock purchase amount
          total_com_paid_bought,    // Paid broker commission when bought
          total_com_paid_sold,      // Paid broker commission when sold
          amount_stock_sold_for;    // Amount stock sold for

    // Explain program
    cout << endl;
    cout << "****************************************************************" << endl;
    cout << endl;
    cout << "   Last month Joe purchased some stock in Acme Software, Inc." << endl;
    cout << "   Here are the details of the purchase: " << endl;
    cout << "    • The number of shares that Joe purchased was 1,000." << endl;
    cout << "    • When Joe purchased the stock, he paid $45.50 per share." << endl;
    cout << "    • Joe paid his stockbroker a commission that amounted to 2%" << endl;
    cout << "      of the amount he paid for the stock." << endl;
    cout << endl;
    cout << "   Two weeks later Joe sold the stock. Here are the details of" << endl;
    cout << "   the sale:" << endl;
    cout << "   • The number of shares that Joe sold was 1,000." << endl;
    cout << "   • He sold the stock for $56.90 per share." << endl;
    cout << "   • He paid his stockbroker another commission that amounted" << endl;
    cout << "     to 2% of the amount he received for the stock." << endl;
    cout << endl;
    cout << "****************************************************************" << endl;

    // Calculate
    joes_stock_purchase = NUM_OF_SHARES * PRICE_PAID_PER_SHARE;
    total_com_paid_bought = joes_stock_purchase * BROKER_COM_PER;
    amount_stock_sold_for = NUM_OF_SHARES * PRICE_SOLD_PER_SHARE;
    total_com_paid_sold = amount_stock_sold_for * BROKER_COM_PER;

    // Display information:
    cout << setprecision(2) << fixed << endl; // Format, fixed with 2 decimal points

    cout << "   Amount paid for the stock: " << joes_stock_purchase << endl;
    cout << "   Amount commission paid when bought stock: " << total_com_paid_bought << endl;
    cout << "   Amount Joe sold stock for: " << amount_stock_sold_for << endl;
    cout << "   Amount commission paid when stock sold: " << total_com_paid_sold << endl;
    cout << "   Amount of profit Joe made after selling stock and" << endl;
    cout << "   paying two commissions to broker ";
    cout <<
        (amount_stock_sold_for
            - (total_com_paid_bought + total_com_paid_sold))
            - joes_stock_purchase
            << '\n' << endl;
    cout << "****************************************************************" << endl;
    cout << endl;


    return 0;
}

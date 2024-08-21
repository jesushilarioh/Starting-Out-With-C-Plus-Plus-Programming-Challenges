/*
8. Total Purchase
A customer in a store is purchasing five items. The prices of the five items are as follows:

Price of item 1 = $15.95 
Price of item 2 = $24.95 
Price of item 3 = $6.95 
Price of item 4 = $12.95 
Price of item 5 = $3.95

Write a program that holds the prices of the five items in five variables. Display each item’s price, the subtotal of the sale, the amount of sales tax, and the total. Assume the sales tax is 7 percent.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double SALES_TAX = .07;

    double item_1 = 15.95, 
           item_2 = 24.95, 
           item_3 = 6.95, 
           item_4 = 12.95, 
           item_5 = 3.95;
    
    double subtotal = item_1 + 
                      item_2 + 
                      item_3 + 
                      item_4 + 
                      item_5;

    double sales_tax = subtotal * SALES_TAX;
    double total = subtotal + sales_tax;

    cout << "\nItem prices: " << endl
         << "Item 1     = $"     << item_1 << endl
         << "Item 2     = $"     << item_2 << endl
         << "Item 3     = $"     << item_3 << endl
         << "Item 4     = $"     << item_4 << endl
         << "Item 5     = $"     << item_5 << endl  
         << "\nSubtotal   = $"     << subtotal << endl
         << "\nSales tax  = $"     << sales_tax << endl
         << "\nTotal      = $"     << total << endl
         << endl;

    return 0;
}



/* Did on another program */

// #include <iostream>
// #include <iomanip>

// using namespace std;

// int main()
// {
//     const double SALES_TAX = .07;

//     double item_1 = 15.95, 
//            item_2 = 24.95, 
//            item_3 = 6.95, 
//            item_4 = 12.95, 
//            item_5 = 3.95;
    
//     double subtotal = item_1 + 
//                       item_2 + 
//                       item_3 + 
//                       item_4 + 
//                       item_5;

//     double sales_tax = subtotal * SALES_TAX;
//     double total = subtotal + sales_tax;

//     cout << "\nItem prices: " << endl
//          << "Item 1     = $"     << item_1 << endl
//          << "Item 2     = $"     << item_2 << endl
//          << "Item 3     = $"     << item_3 << endl
//          << "Item 4     = $"     << item_4 << endl
//          << "Item 5     = $"     << item_5 << endl  
//          << "\nSubtotal   = $"     << subtotal << endl
//          << "\nSales tax  = $"     << sales_tax << endl
//          << "\nTotal      = $"     << total << endl
//          << endl;

//     return 0;
// }

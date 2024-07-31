/*
13. Circuit Board Price
An electronics company sells circuit boards at a 35 percent profit. Write a program that will calculate the selling price of a circuit board that costs $14.95. Display the result on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    float profitPercent = .35,
          cost = 14.95,
          sellingPrice = (cost * profitPercent) + cost;

    cout << endl
         << "Profit = " << (profitPercent * 100) << "%" << endl
         << "Cost   = $"<< cost                         << endl
         << "Price  = $"<< sellingPrice                 << endl
         << endl;
    return 0;
}
/********************************************************************
*
*	13. CIRCUIT BOARD PRICE
*       An electronic company sells circuit boards at a 35 percent
*       profit. Write a program that will calculate the selling price
*       of a circuit board that costs $14.95. Display the result on
*       the screen.
*
* 	Jesus Hilario Hernandez
* 	December 27th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float profit = .35,
          cost = 14.95,
          selling_price = (cost * profit) + cost;

    cout << endl;
    cout << "An electronic company sells circuit boards\nat ";
    cout << (profit * 100);
    cout << " percent profit. Therefore, the selling price\n";
    cout << "of a curciut board that costs $" << cost;
    cout << " is $" << selling_price << endl;
    cout << endl;
    return 0;
}
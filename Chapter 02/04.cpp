/********************************************************************
*
*	04. RESTAURANT BILL
*       Write a program that computes the tax and tip on a restaurant
*       bill for a patron with a $88.67 meal charge. The tax should be
*       6.75 percent of the meal cost. The tip should be 20 percent
*       of the total after adding the tax. Display the meal cost, tax
*       amount, tip amount, and total bill on the screen.
*
* 	Jesus Hilario Hernandez
* 	December 18th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const float TAX = .0675,
                TIP = .20;
    
    float meal_charge = 88.67,
          meal_tax_amount = meal_charge * TAX,
          meal_tip_amount = (meal_charge + meal_tax_amount) * TIP,
          total_bill = meal_charge + meal_tax_amount + meal_tip_amount;

    cout << "\nMeal cost: $" << meal_charge << endl;
    cout << "Tax amount: $" << meal_tax_amount << endl;
    cout << "Tip amount: $" << meal_tip_amount << endl;
    cout << "Total bill: $" << total_bill << endl;

    return 0;
}
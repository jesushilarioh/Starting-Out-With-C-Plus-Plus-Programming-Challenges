/*
4. Restaurant Bill
Write a program that computes the tax and tip on a restaurant bill for a patron with a $88.67 meal charge. The tax should be 6.75 percent of the meal cost. The tip should be 20 percent of the total after adding the tax. Display the meal cost, tax amount, tip amount, and total bill on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    const float TAX = .0675,    // %6.75
                TIP = .20;      // %20
    
    float meal_charge = 88.67,  // $88.67
          tax_amount = meal_charge * TAX,
          tip_amount = (meal_charge + tax_amount) * TIP,
          total_bill = meal_charge + tax_amount + tip_amount;

    cout << "\nMeal cost: $" << meal_charge << endl
         << "Tax amount: $" << tax_amount << endl
         << "Tip amount: $" << tip_amount << endl
         << "Total bill: $" << total_bill << endl
         << endl;

    return 0;
}
/*
4. Restaurant Bill

video walk through: https://youtu.be/hZDxlBgkTfs
video walk through: https://youtu.be/hZDxlBgkTfs
video walk through: https://youtu.be/hZDxlBgkTfs

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
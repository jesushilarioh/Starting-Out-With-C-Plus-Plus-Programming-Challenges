/*
2. Stadium Seating
There are three seating categories at a stadium. For a softball game, Class A seats cost $15, Class B seats cost $12, and Class C seats cost $9. Write a program that asks how many tickets for each class of seats were sold, then displays the amount of income gen- erated from ticket sales. Format your dollar amount in fixed-point notation, with two decimal places of precision, and be sure the decimal point is always displayed.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float CLASS_A_PRICE = 15.00,
                CLASS_B_PRICE = 12.00,
                CLASS_C_PRICE =  9.00;
    
    int seatsA,
        seatsB,
        seatsC;

    float aTotal,
          bTotal,
          cTotal,
          incomeTotal;
    
    cout << "\nEnter number of seats sold in Class A: ";
    cin >> seatsA;
    
    cout << "Enter number of seats sold in Class B: ";
    cin >> seatsB;
    
    cout << "Enter number of seats sold in Class C: ";
    cin >> seatsC;
    
    aTotal = seatsA * CLASS_A_PRICE;
    bTotal = seatsB * CLASS_B_PRICE;
    cTotal = seatsC * CLASS_C_PRICE;

    incomeTotal = aTotal + bTotal + cTotal;
    
    cout << setprecision(2) << fixed << endl

         << seatsA << " Class A seats @ $"
         << setw(6) << CLASS_A_PRICE
         << " = $" << aTotal 
         << endl
    
         << seatsB << " Class B seats @ $"
         << setw(6) << CLASS_B_PRICE
         << " = $" << bTotal 
         << endl
    
         << seatsC << " Class C seats @ $"
         << setw(6) << CLASS_C_PRICE
         << " = $" << cTotal 
         << endl 
         << endl;
    
    return 0;
}

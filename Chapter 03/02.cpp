/********************************************************************
*
*	02. STADIUM SEATING
*
*       There are three seating categories at a stadium. For a
*       softball game, Class A seats cost $15, Class B seats cost $12,
*       and Class C seats cost $9. Write a program that ask how many
*       tickets for each class of seats were sold, then displays the
*       amount of income generated from ticket sales. Format your dollar
*       amount in fixed-point notation, with two decimal places of
*       precision, and be sure the decimal point is always displayed.
*
* 	Jesus Hilario Hernandez
* 	January 9th 2017
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    const float CLASS_A_COST_PER_SEAT = 15.00,
                CLASS_B_COST_PER_SEAT = 12.00,
                CLASS_C_COST_PER_SEAT =  9.00;

    int seats_sold_A,
        seats_sold_B,
        seats_sold_C;

    float class_A_total,
          class_B_total,
          class_C_total,
          total_income_gen;

    // Ask user for num of seats sold in each class (A,B,C)
    cout << endl;
    cout << "Enter number of seats sold in Class A: ";
    cin >> seats_sold_A;

    cout << "Enter number of seats sold in Class B: ";
    cin >> seats_sold_B;

    cout << "Enter number of seats sold in Class C: ";
    cin >> seats_sold_C;

    // Calculate cost per section
    class_A_total = seats_sold_A * CLASS_A_COST_PER_SEAT;
    class_B_total = seats_sold_B * CLASS_B_COST_PER_SEAT;
    class_C_total = seats_sold_C * CLASS_C_COST_PER_SEAT;

    // Calculate total income for all seats
    total_income_gen = class_A_total + class_B_total + class_C_total;

    // Display income generated from all ticket sales
    cout << endl;
    cout << setprecision(2) << fixed;

    cout << seats_sold_A << " Class A seats @ $";
    cout << setw(6) << CLASS_A_COST_PER_SEAT;
    cout << " = $" << class_A_total << endl;

    cout << seats_sold_B << " Class B seats @ $";
    cout << setw(6) << CLASS_B_COST_PER_SEAT;
    cout << " = $" << class_B_total << endl;

    cout << seats_sold_C << " Class C seats @ $";
    cout << setw(6) << CLASS_C_COST_PER_SEAT;
    cout << " = $" << class_C_total << endl;

    // Terminate Program
    return 0;
}

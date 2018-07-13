/********************************************************************
*
*	21. How Many Pizzas?
*
*       Modify the program you wrote in Programming Challenge 20
*       (Pizza Pi) so that it reports the number of pizzas you need
*       to buy for a party if each person attending is expected to eat
*       an average of four slices. The program should ask the user for
*       the number of people who will be at the party and for the
*       diameter of the pizzas to be ordered. It should then calculate
*       and display the number of pizzas to purchase.
*
* 	Jesus Hilario Hernandez
* 	January 28th 2017
*
********************************************************************/
#include <iostream>
#include <cmath>    // For use of  pow() function.
#include <iomanip>  // For use of setprecision() function.
using namespace std;

int main()
{
    const float SLICE_AREA_SIZE = 14.125,
                PI              = 3.14159;
    float d,
          r,
          Area,
          num_of_slices,
          slices_needed,
          num_of_pizzas;

    int num_of_people;

    // Ask the user for the number of people who will be at the party
    cout << "\nWhat is the number of people who will be at the party? ";
    cin >> num_of_people;

    // Ask the user for the diameter of the pizza in inches.
    cout << "What is the diameter of the pizza in inches? ";
    cin >> d;

    // Calculate the # of slices that may be taken from a pizza
    // of that size
    slices_needed = num_of_people *= 4;             // Num Slices needed
    r = d / 2;                                      // Calculate Radius
    Area = PI * pow(r, 2);                          // Calculate Area
    num_of_slices = Area / SLICE_AREA_SIZE;         // Num Slices per pizza
    num_of_pizzas = slices_needed /= num_of_slices; // Numb pizzas needed

    // Display a message telling the number of slices.
    cout << setprecision(1) << fixed;
    cout << "Number of people = " << num_of_people << endl;
    cout << "Number of slices needed = " << slices_needed << endl;
    cout << "Number of slices per Pizza = " << num_of_slices << endl;
    cout << "Number of pizzas to order = " << slices_needed << endl;
    cout << endl;

    // Terminate program
    return 0;
}

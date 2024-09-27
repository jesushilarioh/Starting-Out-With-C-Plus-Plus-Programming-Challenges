/*

21. How Many Pizzas?
Modify the program you wrote in Programming Challenge 20 (Pizza Pi) so it reports the number of pizzas you need to buy for a party if each person attending is expected to eat an average of four slices. The program should ask the user for the number of people who will be at the party, and for the diameter of the pizzas to be ordered. It should then calculate and display the number of pizzas to purchase.

*/
#include <iostream>
#include <iomanip>  // setprecision(3) == .000
#include <cmath>    // pow(6, 3) == 6^3
using namespace std;

int main()
{
    const float SLICE_AREA_SIZE = 14.125,
                PI              = 3.14159;

    float d,    // Diameter
          r,    // Radius
          Area,
          num_of_slices,
          slices_needed,
          num_of_pizzas_needed;

    int num_of_people;

    // INPUT
    cout << "\nWhat is the number of people who will be at the party? ";
    cin >> num_of_people;

    cout << "What is the diameter of the pizza in inches? ";
    cin >> d;


    // PROCESS
    slices_needed = num_of_people * 4;
    r = d / 2;                      
    Area = PI * pow(r, 2);               
    num_of_slices = Area / SLICE_AREA_SIZE;
    num_of_pizzas_needed = slices_needed / num_of_slices; 


    // OUTPUT
    cout << setprecision(1) << fixed
         << "Number of people = " << num_of_people << endl
         << "Number of slices needed = " << slices_needed << endl
         << "Number of slices per Pizza = " << num_of_slices << endl
         << "Number of pizzas to order = " << num_of_pizzas_needed 
         << endl;
    
    return 0;
}

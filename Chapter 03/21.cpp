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
* 	August 3rd 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>  // setprecision(3) .000
#include <cmath>    // pow(6, 3) == 6^3
using namespace std;

int main()
{
    // Constants
    const float SLICE_AREA_SIZE = 14.125,
                PI              = 3.14159;

    const int TWO  = 2,
              FOUR = 4;

    // Variables
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

    // Calculate the # of slices 
    // Num Slices needed
    slices_needed = num_of_people * FOUR;

    // Calculate Radius        
    r = d / TWO;            

    // Calculate Area                        
    Area = PI * pow(r, TWO); 

    // Num Slices per pizza                       
    num_of_slices = Area / SLICE_AREA_SIZE;

    // Num pizzas needed        
    num_of_pizzas = slices_needed / num_of_slices; 
              
              
    // Display a message telling the number of slices.
    cout << setprecision(1) << fixed;
    cout << "Number of people = ";
    cout << num_of_people << endl;

    cout << "Number of slices needed = ";
    cout << slices_needed << endl;

    cout << "Number of slices per Pizza = ";
    cout << num_of_slices << endl;

    cout << "Number of pizzas to order = ";
    cout << num_of_pizzas << endl;

    cout << endl;
    
    // Terminate Program
    return 0;
}

/********************************************************************
*
*	15. Shipping Charges
*
*       The Fast Freight Shipping Company charges the following rates:
*       _______________________________________________________________
*        Weight of Package (in Kilograms)   Rate per 500 Miles Shipped
*       ---------------------------------------------------------------
*        2 Kg or less                           $1.10
*        Over 2 kg but not more than 6kg        $2.20
*        Over 6 kg but not more than 10 kg      $3.70
*        Over 10 kg but not more than 20 kg     $4.80
*       ---------------------------------------------------------------
*
*       Write a program that asks for the weight of the package and the
*       distance it is to be shipped, and then displays the charges.
*
*       Input Validation: Do not accept values of 0 or less for the
*       weight of the package. Do not accept weights of more than 20
*       kg (this is the maximum weight the company will ship). Do not
*       accept distances of less than 10 miles or more than 3,000 miles.
*       These are the company’s minimum and maximum shipping distances.
*
* 	Jesus Hilario Hernandez
* 	February 19, 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    // Variables
    float package_weight,
          distance,
          total_charges;

    // Ask for weight of package
    cout << "\nWhat is the weight of the package? ";
    cin >> package_weight;

    // Decision statement
    if (package_weight <= 0 || package_weight > 20)
    {
        cout << "\nWe're sorry, package weight must be more than 0kg." << endl;
        cout << "and less than 20kg. Rerun the program and try again.\n" << endl;
    }
    else
    {
        // Ask for distance to be shipped
        cout << "\nDistance? ";
        cin >> distance;

        // If distance less than 10 or greater than 3000
        if (distance < 10 || distance > 3000)
        {
            cout << "\nWe're sorry, the distance must be within 10 and 3000 miles.\n";
            cout << "Rerun the program and try again.\n" << endl;
        }
        else
        {
            // If less than 2kg
            if (package_weight <= 2)
                total_charges = (distance / 5) * 1.10;

            // if over 2 kg but not more than 6kg
            else if (package_weight > 2 && package_weight <= 6)
                total_charges = (distance / 5) * 2.20;

            // If over 6 kg but not more than 10 kg
            else if (package_weight > 6 && package_weight <= 10)
                total_charges = (distance / 5) * 3.70;

            // If over 10 kg but not more than 20 kg
            else if (package_weight > 10 && package_weight <= 20)
                total_charges = (distance / 5) * 4.80;

            // Display total charges
            cout << "Total charges are " << total_charges << endl;
            cout << "For a distance of " << distance << " miles and" << endl;
            cout << "a total weight of " << package_weight << " kg.\n" << endl;
        }

    }

    // Terminate program
    return 0;
}

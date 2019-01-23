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
* 	January 22, 2019
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const int WEIGHT_MIN   =    0,
              WEIGHT_MAX   =   20,
              DISTANCE_MIN =   10,
              DISTANCE_MAX = 3000;

    float package_weight,
          distance,
          total_charges;

    cout << "\nWhat is the weight (kg) of the package? ";
    cin >> package_weight;

    if (package_weight <= WEIGHT_MIN || 
        package_weight > WEIGHT_MAX)
    {
        cout << "\nWe're sorry, package weight must be\n"
             << " more than 0kg and less than 20kg.\n"
             << "Rerun the program and try again.\n" 
             << endl;
    }
    else 
    {
        cout << "\nDistance? ";
        cin >> distance;

        if (distance < DISTANCE_MIN || 
            distance > DISTANCE_MAX)
        {
            cout << "\nWe're sorry, the distance must be\n"       << "within 10 and 3000 miles.\n"
                 << "Rerun the program and try again.\n" 
                 << endl;
        }
        else
        {
             if (package_weight <= 2)
                total_charges = (distance / 500) * 1.10;
            else if (package_weight > 2 && 
                    package_weight <= 6)
                total_charges = (distance / 500) * 2.20;
            else if (package_weight > 6 && 
                    package_weight <= 10)
                total_charges = (distance / 500) * 3.70;
            else if (package_weight > 10 && 
                    package_weight <= 20)
                total_charges = (distance / 500) * 4.80;

            cout << setprecision(2) << fixed
                << "Total charges are $" 
                << total_charges 
                << "\nFor a distance of " 
                << distance
                << " miles\nand a total weight of " 
                << package_weight 
                << "kg.\n"
                << endl;
        }

    }

    return 0;
}

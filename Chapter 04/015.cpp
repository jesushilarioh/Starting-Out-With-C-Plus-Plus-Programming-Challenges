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
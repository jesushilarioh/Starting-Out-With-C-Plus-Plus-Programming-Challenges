
/*
Mass and Weight
*/

#include <iostream>
using namespace std;

int main()
{
    float weight, 
          mass;

    cout << "\nWhat is the object's mass: ";
    cin >> mass;


    weight = mass * 9.8;


    cout << "\nObject's weight = " << weight << endl;

    if (weight >= 1000)
        cout << "Too heavy." << endl;
    else if (weight <= 10)
        cout << "Too light." << endl;
    else
        cout << "Neither heavy or light." << endl;

    cout << endl;


    return 0;
}

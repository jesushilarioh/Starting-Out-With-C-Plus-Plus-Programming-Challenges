#include <iostream>
using namespace std;

int main()
{
    // Variables
    float weight, 
          mass;

    // Ask the user for object's mass
    cout << endl;
    cout << "What is the object's mass: ";
    cin >> mass;

    // Calculate object's weight
    weight = mass * 9.8;

    // Display weight.
    cout << "\nObject's weight = ";
    cout << weight << endl << endl;

    // Decision Statement
    if (weight >= 1000)
        cout << "Too heavy.";
    else if (weight <= 10)
        cout << "Too light.";
    else
        cout << "Neither heavy or light.";

    // Formating
    cout << endl << endl;

    // Terminate program
    return 0;
}

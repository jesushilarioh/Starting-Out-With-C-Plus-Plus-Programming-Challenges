#include <iostream>
#include <cmath>    // for pow() function
#include <iomanip>

using namespace std;

double inputValidate(double);
double kineticEnergy(double, double);
void displayInfo(double, double, double);

int main()
{
	double KINETIC_ENERGY,
            mass,
            velocity;

    cout << "Enter the object's mass: ";
    mass = inputValidate(mass);

    cout << "Enter the object's velocity: ";
    velocity = inputValidate(velocity);

	KINETIC_ENERGY = kineticEnergy(mass, velocity);

	displayInfo(mass, velocity, KINETIC_ENERGY);

  	return 0;
}

/********************************************************
 * Definition of inputValidate()                        *                                        *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num))
    {
        cout << "Error. A number must be entered. Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

/********************************************************
 * Definition of kineticEnergy function:                *
 ********************************************************/
double kineticEnergy(double mass, double velocity)
{
    return (0.5) * mass * pow(velocity, 2);
}

/********************************************************
 * Definition of displayInfo()                          *
 ********************************************************/ 
void displayInfo(double mass, double velocity, double KINETIC_ENERGY)
{
	cout << setprecision(2) << fixed;
    cout << endl;
    cout << "Mass           = " << mass << endl;
    cout << "Velocity       = " << velocity << endl;
    cout << "Kinetic Energy = " << KINETIC_ENERGY << endl;
    cout << endl;
}
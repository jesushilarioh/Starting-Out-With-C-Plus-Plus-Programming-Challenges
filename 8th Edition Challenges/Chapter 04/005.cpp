#include <iostream>
#include <cmath>    // pow(8, 2) == 8^2
using namespace std;

int main()
{
    // Variables
    float BMI, 
          weight, 
          height;

     // Ask user for height & weight
    cout << "Enter weight(in pounds): " << endl;
    cin >> weight;

    cout << "Enter height(in inches, e.g. 5' 9\" = 69): " << endl;
    cin >> height;

    // Calculate & display the person's (BMI)
    BMI = weight * (703 / pow(height, 2));

    // Display BMI
    cout << "BMI = " << BMI << endl;

    // Decision Structure
    if (BMI >= 18.5 && BMI <= 25)
        cout << "Weight optimal." << endl;
    else if (BMI >= 0 && BMI <= 18.5)
        cout << "Weight underweight." << endl;
    else if (BMI >= 25)
        cout << "Weight overweight." << endl;

    // Terminate program
    return 0;
}

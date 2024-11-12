/*

    Body Mass Index

*/

#include <iostream>
#include <cmath>    // for the pow() method
using namespace std;

int main()
{

    float BMI, // Body Mass Index
          weight, 
          height;


    cout << "\nEnter weight(in pounds): " << endl;
    cin >> weight;

    cout << "Enter height(in inches, e.g. 5' 9\" = 69): " << endl;
    cin >> height;


    BMI = weight * (703 / pow(height, 2));


    cout << "BMI = " << BMI << endl;


    if (BMI >= 18.5 && BMI <= 25)
        cout << "Weight optimal." << endl;

    else if (BMI >= 0 && BMI <= 18.5)
        cout << "Weight underweight." << endl;
        
    else if (BMI >= 25)
        cout << "Weight overweight." << endl;


    return 0;
}

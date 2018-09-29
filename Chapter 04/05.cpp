/********************************************************************
*
*	05. Body Mass Index
*
*       Write a program that calculates and displays a person’s body
*       mass index (BMI). The BMI is often used to determine whether
*       a person with a sedentary lifestyle is over- weight or
*       underweight for his or her height. A person’s BMI is
*       calculated with the following formula:
*
*       BMI = weight x 703 / height^2
*
*       where weight is measured in pounds and height is measured
*       in inches. The program should display a message indicating
*       whether the person has optimal weight, is under- weight,
*       or is overweight. A sedentary person’s weight is considered to be
*       optimal if his or her BMI is between 18.5 and 25. If the BMI is
*       less than 18.5, the person is consid- ered to be underweight.
*       If the BMI value is greater than 25, the person is considered to be
*       overweight.
*
* 	Jesus Hilario Hernandez
* 	February 15, 2018
*
********************************************************************/
#include <iostream>
#include <cmath>    // Included for using pow() function.
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

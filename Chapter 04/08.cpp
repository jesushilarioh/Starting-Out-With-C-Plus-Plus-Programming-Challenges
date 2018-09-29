/********************************************************************
*
*	08. Color Mixer
*
*       The colors red, blue, and yellow are known as the primary
*       colors because they cannot be made by mixing other colors.
*       When you mix two primary colors, you get a second- ary color,
*       as shown here:
*
*       When you mix red and blue, you get purple.
*       When you mix red and yellow, you get orange.
*       When you mix blue and yellow, you get green.
*
*       Write a program that prompts the user to enter the names
*       of two primary colors to mix. If the user enters anything
*       other than “red,” “blue,” or “yellow,” the program should
*       display an error message. Otherwise, the program should
*       display the name of the secondary color that results by
*       mixing two primary colors.
*
* 	Jesus Hilario Hernandez
*
* 	February 15, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    string color_1, 
           color_2;

    // Ask user for 2 primary colors
    cout << endl;
    cout << "Enter 1st primary color : ";
    cin >> color_1;
    cout << "The 2nd primary color is: ";
    cin >> color_2;

    // Format line break
    cout << endl;

    // Error checking, calculation, & Display
    if (color_1 == "red" || color_1 == "Red")
    {
        if (color_2 == "blue" || color_2 == "Blue")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = purple.\n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = Orange.\n";
        }
    }
    else if (color_1 == "blue" || color_1 == "Blue")
    {
        if (color_2 == "red" || color_2 == "Red")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = purple.\n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = green.\n";
        }
    }
    else if (color_1 == "yellow" || color_1 == "Yellow")
    {
        if (color_2 == "red" || color_2 == "Red")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = orange.\n";
        }
        else if (color_2 == "blue" || color_2 == "Blue")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = green.\n";
        }
    }
    else
    {
        cout << "Neither " << color_1;
        cout << " nor " << color_2;
        cout << " is a prime color. ";
        cout << "\nRun the program and try again.\n";
        cout << "Remember a primary color is either Red,";
        cout << "Blue, or Yellow.\n";
    }

    // Formatting
    cout << endl << endl;

    // Terminate program
    return 0;
}
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
    string prime_color_1, prime_color_2;

    // Ask user for 2 primary colors
    cout << endl;
    cout << "Enter 1st primary color : ";
    cin >> prime_color_1;
    cout << "The 2nd primary color is: ";
    cin >> prime_color_2;

    // Format line break
    cout << endl;

    // Decision statement and display
    if (prime_color_1 == "red" || prime_color_1 == "Red")
    {
        if (prime_color_2 == "blue" || prime_color_2 == "Blue")
            cout << prime_color_1 << " & " << prime_color_2 << " = purple.\n";
        else if (prime_color_2 == "yellow" || prime_color_2 == "Yellow")
            cout << prime_color_1 << " & " << prime_color_2 << " = Orange.\n";
    }

    else if (prime_color_1 == "blue" || prime_color_1 == "Blue")
    {
        if (prime_color_2 == "red" || prime_color_2 == "Red")
            cout << prime_color_1 << " & " << prime_color_2 << " = purple.\n";
        else if (prime_color_2 == "yellow" || prime_color_2 == "Yellow")
            cout << prime_color_1 << " & " << prime_color_2 << " = green.\n";
    }
    else if (prime_color_1 == "yellow")
    {
        if (prime_color_2 == "red" || prime_color_2 == "Red" || prime_color_2 == "RED")
            cout << prime_color_1 << " & " << prime_color_2 << " = orange.\n";
        else if (prime_color_2 == "blue" || prime_color_2 == "Blue")
            cout << prime_color_1 << " & " << prime_color_2 << " = green.\n";
    }
    else
    {
        cout << "Neither " << prime_color_1 << " or " << prime_color_2;
        cout << " is a NOT a prime number. \nRun the program and try again.\n";
        cout << "Remember a primary color is either Red, Blue, or Yellow.\n";
    }

    // Format line break
    cout << endl;

    // Terminate program
    return 0;
}

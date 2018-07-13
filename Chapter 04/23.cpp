/********************************************************************
*
*	23. TITLE
*
*       Write a program that displays the following menu:
*
*       Geometry Calculator
*
*           1. Calculate the Area of a Circle
*           2. Calculate the Area of a Rectangle
*           3. Calculate the Area of a Triangle
*           4. Quit
*
*       Enter your choice (1-4):
*
*       If the user enters 1, the program should ask for the radius of
*       the circle and then display its area. Use the following formula:
*
*       area = πr2
*
*       Use 3.14159 for π and the radius of the circle for r. If the user
*       enters 2, the program should ask for the length and width of
*       the rectangle and then display the rectangle’s area. Use the following
*       formula:
*
*       area = length * width
*
*       If the user enters 3 the program should ask for the
*       length of the triangle’s base and its height, and then
*       display its area. Use the following formula:
*
*       area = base * height * .5
*
*       If the user enters 4, the program should end.
*
*       Input Validation: Display an error message if the user
*       enters a number outside the range of 1 through 4 when
*       selecting an item from the menu. Do not accept negative
*       values for the circle’s radius, the rectangle’s length or
*       width, or the triangle’s base or height.
*
* 	Jesus Hilario Hernandez
* 	February 23, 2018
*
********************************************************************/
#include <iostream>
#include <cmath>    // for pow() function

using namespace std;
int main()
{
    // Constant Variables
    const float PI = 3.14159;

    // Variables
    int user_choice;

    // Display menu
    cout << endl << "Geometry Calculator\n"             << endl;
    cout << "   1. Calculate the Area of a Cricle"      << endl;
    cout << "   2. Calculate the Area of a Rectangle"   << endl;
    cout << "   3. Calculate the Area of a Triangle"    << endl;
    cout << "   4. Quit"                                << endl;
    cout << endl << "Enter you choice (1-4): ";
    cin >> user_choice;
    cout << endl;

    // Decision statement --> menu selection
    switch (user_choice)
    {
        // Switch Variables
        float area;

        case 1:
            // case 1 Variables;
            int radius;

            // Ask for radius
            cout << "What is the radius: ";
            cin >> radius;

            // Validate radius
            if (radius < 0)
            {
                cout << "We're sorry. \nThe radius must be a positive number." << endl;
                cout << "Rerun the program and try again.\n" << endl;
            }
            else
            {
                // Calculate area
                area = PI * pow(radius, 2);

                // Display area
                cout << "The area of the circle is  " <<  area << endl;
            }
            break;

        case 2:
            // case 2 variables
            float width, length;

            // Ask for length
            cout << "What is the length? " << endl;
            cin >> length;

            // Validate length
            if (length > 0)
            {
                // Ask for width
                cout << "Width? " << endl;
                cin >> width;

                // Validate width
                if (width > 0)
                {
                    // Calculate Area
                    area = length * width;

                    // Display area of user rectangle
                    cout << "The area of rectangle is " << area << endl;
                }
                else
                {
                    // Explain error
                    cout << "\nWe're sorry. \nWidth must be greater than 0." << endl;
                    cout << "Rerun the program and try again." << endl;
                }
            }
            else
            {
                // Explain error
                cout << "\nWe're sorry. \nLength must be greater that 0." << endl;
                cout << "Rerun the program and try again." << endl;
            }
            break;

        case 3:
            // case 3 variables
            float height,
                  base;

            //  Ask for length of triangle's base and height
            cout << "What is base length? ";
            cin >> base;

            // Validate bas|ze
            if (base > 0 |})
            {
                // Ask for height
                cout << "Height? ";
                cin >> height;

                // Validate height
                if (height > 0)
                {
                    // Calculate area
                    area = (base * height) * .5;

                    // Display area
                    cout << "Area of triangle is " << area << endl;
                }
                else
                {
                    // Explain base error
                    cout << "\nWe're sorry. \nHeight must be greater than 0." << endl;
                    cout << "Rerun the program and try again." << endl;
                }
            }
            else
            {
                // Explain height error
                cout << "\nWe're sorry. \nBase length must be greater than 0." << endl;
                cout << "Rerun the program and try again." << endl;
            }
            break;

        case 4:
            // Salutation
            cout << "Good-bye." << endl;
            break;

        // Validate user_choice
        default:
            cout << "We're sorry. \nYour choice must between 1 and 4.\n";
            cout << "Rerun the program and try again." << endl;
            break;
    }

    cout << endl;
    // Terminate program
    return 0;
}

/********************************************************************
*
*	04. Areas of Rectangles
*
*       The area of a rectangle is the rectangles's length times its
*       width. Write a program that asks for the length and width of
*       two rectangles. The program should tell the user which
*       rectangle has the greater area, or if the areas are the same.
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    float l1, l2, w1, w2, rectangle1, rectangle2;

    // Ask the user for l and w of 2 rectangles
    cout << endl;
    cout << "What is the length of the first rectangle: ";
    cin >> l1;
    cout << "What is the width: ";
    cin >> w1;
    cout << "What is the length of the second rectangle: ";
    cin >> l2;
    cout << "The width: ";
    cin >> w2;
    cout << endl;

    // Calculate area for each triangle
    rectangle1 = l1 * w1;
    rectangle2 = l2 * w2;

    // Decide & display rectangle with greatest area
    if (rectangle1 > rectangle2)
        cout << "Area for rectangle 1 is greater." << endl;
    else if (rectangle1 < rectangle2)
        cout << "Area for rectangle 2 is greater." << endl;
    else if (rectangle1 == rectangle2)
        cout << "Area for both rectangles is the same." << endl;

    // Formatting last line.
    cout << endl;

    // Terminate program
    return 0;
}

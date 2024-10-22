/*
4. Areas of Rectangles
The area of a rectangle is the rectangle’s length times its width. Write a program that asks for the length and width of two rectangles. The program should tell the user which rectangle has the greater area, or if the areas are the same.
*/

#include <iostream>
using namespace std;

int main()
{
    // Variables
    float rectangle1,
          l1, // rectangle 1 length
          w1, // rectangle 1 width

          rectangle2,
          l2, // rectangle 2 length
          w2; // rectangle 2 width


    cout << "\nWhat is the length of the first rectangle: ";
    cin >> l1;

    cout << "What is the width of the first rectangle : ";
    cin >> w1;

    cout << "What is the length of the second rectangle: ";
    cin >> l2;

    cout << "What is the width of the second rectangle : ";
    cin >> w2;


    rectangle1 = l1 * w1;
    rectangle2 = l2 * w2;


    cout << endl;

    if (rectangle1 > rectangle2)
        cout << "Area for rectangle 1 is greater." << endl;
    else if (rectangle1 < rectangle2)
        cout << "Area for rectangle 2 is greater." << endl;
    else if (rectangle1 == rectangle2)
        cout << "Area for both rectangles is the same." << endl;

    cout << endl;
    

    return 0;
}

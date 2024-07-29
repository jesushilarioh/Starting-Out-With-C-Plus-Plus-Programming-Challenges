#include <iostream>
using namespace std;

int main()
{
    // Variables
    float l1, 
          l2, 
          w1, 
          w2, 
          rectangle1, 
          rectangle2;

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

    // Calculate area for each rectangle
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

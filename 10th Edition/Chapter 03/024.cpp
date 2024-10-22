/*

 24. Planting Grapevines
 
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int V,  // number of grapevines that will fit in the row
        R,  // length of the row, in feet
        E,  // amount of space, in feet, used by an end-post assembly
        S;  // space between vines, in feet

    cout << "Enter length of the row, in feet: ";
    cin >> R;

    cout << "Enter Amount of space used by an end-post assembly, in feet: ";
    cin >> E;

    cout << "Enter amount of space between the vines, in feet: ";
    cin >> S;

    V = (R - (2 * E)) / S;

    cout << "\nNumber of grapevines that will fit in the row: " << V << endl
         << endl;

    return 0;
}

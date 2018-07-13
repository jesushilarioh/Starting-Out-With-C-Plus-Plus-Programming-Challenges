/********************************************************************
*
*	08. HOW MANY WIDGETS?
*
*       The Yukon Widget Company manufactures widgets that weigh 12.5
*       pounds each. Write a program that calculates how many widgets
*       are stacked on a pallet, based on the total weight of the
*       pallet. The program should ask the user how much the pallet
*       weighs by itself and with the widgets stacked on it. It
*       should then calculate and display the number of widgets
*       stacked on the pallet.
*
* 	Jesus Hilario Hernandez
* 	January 7th 2017
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float INDIVIDUAL_WIDGET_WEIGHT = 12.5; // Widget weight.
    float pallet_weight,
          pallet_with_widgets,
          widget_weight,
          number_of_widgets;

    // Ask user how much the pallet weighs by itself
    cout << endl;
    cout << "How much does the pallet weigh by itself? ";
    cin >> pallet_weight;

    // Ask user how much the pallet weighs with widget stacked on
    cout << "How much does the pallet weigh with widgets? ";
    cin >> pallet_with_widgets;

    /**
     *   Calculate how many widgets are stacked on a pallet,
     *  based on the total weight of the pallet.
     */
    widget_weight = pallet_with_widgets - pallet_weight;

    number_of_widgets = widget_weight / INDIVIDUAL_WIDGET_WEIGHT;

    // Display the number of widgets stacked on the pallet.
    cout << setprecision(2) << fixed << right << endl;
    cout << "Individual widget weight   = " << setw(6) << INDIVIDUAL_WIDGET_WEIGHT << endl;
    cout << "Pallet weight              = " << setw(6) << pallet_weight << endl;
    cout << "Pallet weight with widgets = " << setw(6) << pallet_with_widgets << endl;
    cout << "Widget weight              = " << setw(6) << widget_weight << endl;
    cout << "Number of widgets          = " << setw(6) << number_of_widgets << endl;
    cout << endl;

    // Terminate program
    return 0;
}

/*
8. How Many Widgets?
The Yukon Widget Company manufactures widgets that weigh 12.5 pounds each. Write a program that calculates how many widgets are stacked on a pallet, based on the total weight of the pallet. The program should ask the user how much the pallet weighs by itself and with the widgets stacked on it. It should then calculate and display the number of widgets stacked on the pallet.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{

    const float INDV_WIDGET_WT = 12.5;
    
    float pallet_weight,
          pallet_with_widgets,
          widget_weight,
          number_of_widgets;
    
    cout << "\nHow much does the pallet weight by itself? ";
    cin >> pallet_weight;
    
    cout << "\nHow much does the pallet weight with widgets? ";
    cin >> pallet_with_widgets;
    
    widget_weight = pallet_with_widgets - pallet_weight;
    number_of_widgets   = widget_weight / INDV_WIDGET_WT;
    
    cout << setprecision(2) << fixed << right
         << "\nIndividual widget weight   = " << setw(6) << INDV_WIDGET_WT  
         << "\nPallet weight              = " << setw(6) << pallet_weight           
         << "\nPallet weight with widgets = " << setw(6) << pallet_with_widgets 
         << "\nWidget weight              = " << setw(6) << widget_weight       
         << "\nNumber of widgets          = " << setw(6) << number_of_widgets        
         << endl 
         << endl;
    
    return 0;
}

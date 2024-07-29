#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    const float INDV_WIDGET_WIEGHT = 12.5;
    
    float pallet_wt,
          pallet_with_widgets,
          widget_weight,
          num_widgets;
    
    // Ask how much pallet weighs by itself
    cout << endl;
    cout << "How much does the pallet weight by itself? ";
    cin >> pallet_wt;
    
    // Ask how much pallet weighs with widget stacked on
    cout << endl;
    cout << "How much does the pallet weight with widgets?";
    cin >> pallet_with_widgets;
    
    // Calculate how many stacked on pallet
    widget_weight = pallet_with_widgets - pallet_wt;
    num_widgets   = widget_weight / INDV_WIDGET_WIEGHT;
    
    // Display number of widgets stacked on the pallet.
    cout << setprecision(2) << fixed << right << endl;
    cout << "Individual widget weight   = " << setw(6);
    cout << INDV_WIDGET_WIEGHT  << endl;
    
    cout << "Pallet weight              = " << setw(6);
    cout << pallet_wt           << endl;
    
    cout << "Pallet weight with widgets = " << setw(6);
    cout << pallet_with_widgets << endl;
    
    cout << "Widget weight              = " << setw(6);
    cout << widget_weight       << endl;
    
    cout << "Number of widgets          = " << setw(6);
    cout << num_widgets         << endl << endl;
    
    // Terminate Program
    return 0;
}

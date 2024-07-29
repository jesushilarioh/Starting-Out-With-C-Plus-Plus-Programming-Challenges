#include <iostream>
using namespace std;
int main()
{
    const double PACKAGE_A_PRICE = 39.99,
                 PACKAGE_B_PRICE = 59.99,
                 PACKAGE_C_PRICE = 69.99,

                 PACKAGE_A_MINUTES = 450,
                 PACKAGE_B_MINUTES = 900,

                 PACKAGE_A_ADDITIONAL_CHARGES = .45,
                 PACKAGE_B_ADDITIONAL_CHARGES = .40;

    char menu_choice;

    cout << "\nPackage A: For $39.99 per month 450\n"
         << "minutes are provided.\n"
         << "--Additional minutes are $0.45 per minute.\n"
         << endl
         << "Package B: For $59.99 per month 900\n"
         << "minutes are provided.\n"
         << "--Additional minutes are $0.40 per minute.\n"
         << endl
         << "Package C: For $69.99 per month unlimited\n"
         << "minutes provided.\n" 
         << endl;

    cout << "Choose package: ";
    cin >> menu_choice;
    cout << endl;

    switch (menu_choice)
    {
        int mins_used;
        float total_charges;

        case 'a':
        case 'A':
        case 'B':
        case 'b':
        case 'c':
        case 'C':
            cout << "How many minutes used? ";
            cin >> mins_used;
            cout << endl;

            if (mins_used < 0)
            {
                cout << "We're sorry. Minutes must be "
                     << "greater than 0.\n"
                     << "Rerun the program and try again."
                     << endl;
            }
            else
            {
                cout << "Total monthly charges: ";
                if (menu_choice == 'a' || 
                    menu_choice == 'A') 
                {
                    total_charges = mins_used > PACKAGE_A_MINUTES 
                    ? PACKAGE_A_PRICE + ((mins_used - PACKAGE_A_MINUTES) * PACKAGE_A_ADDITIONAL_CHARGES) 
                    : PACKAGE_A_PRICE;
                }
                else if(menu_choice == 'b' || 
                    menu_choice == 'B') 
                {
                    total_charges = mins_used > PACKAGE_B_MINUTES 
                    ? PACKAGE_B_PRICE + ((mins_used - PACKAGE_B_MINUTES) * PACKAGE_B_ADDITIONAL_CHARGES) 
                    : PACKAGE_B_PRICE;
                }
                else if (menu_choice == 'c' || 
                    menu_choice == 'C') 
                {
                    total_charges = PACKAGE_C_PRICE;
                }
                
                cout << total_charges << endl;
            }
            break;
    
        default:
            cout << "We're sorry. Menu choice must be "
                 << "A, B, or C.\n"
                 << "Rerun the program and try again." 
                 << endl;
            break;
    }

    cout << endl;

    return 0;
}

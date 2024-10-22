#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    const float PACKAGE_A_CHARGES = 39.99,
                PACKAGE_B_CHARGES = 59.99,
                PACKAGE_C_CHARGES = 69.99,

                PACKAGE_A_MINUTES = 450,
    			PACKAGE_B_MINUTES = 900,

   				PACKAGE_A_ADDITIONAL_CHARGES = .45,
                PACKAGE_B_ADDITIONAL_CHARGES = .40;
    			
    				
    char menu_choice;

    cout << "\nPackage A: For $39.99 per month 450 "
         << "minutes are provided.\n"
         << "--Additional minutes are $0.45 per minute." 
         << endl
         << "Package B: For $59.99 per month 900 "
         << "minutes are provided.\n"
         << "--Additional minutes are $0.40 per minute." 
         << endl
         << "Package C: For $69.99 per month unlimited\n"
         << "minutes provided.\n" 
         << endl;

    cout << "Choose package: ";
    cin >> menu_choice;
    cout << endl;

    switch (menu_choice)
    {
        int minutes_used;
        float total_charges_A,
              total_charges_B,
        	  total_charges_C;
        case 'a':
        case 'A':
        case 'B':
        case 'b':
        case 'c':
        case 'C':
            cout << "How many minutes used? ";
            cin >> minutes_used;
            cout << endl;

            if (minutes_used < 0)
            {
                cout << "We're sorry. Minutes must be "
                     << "greater than 0.\n"
                     << "Rerun the program and try again." 
                     << endl;
            }
            else
            {
                double could_have_saved;

                total_charges_A = minutes_used > PACKAGE_A_MINUTES 
                ? PACKAGE_A_CHARGES + ((minutes_used - PACKAGE_A_MINUTES) * PACKAGE_A_ADDITIONAL_CHARGES) 
                : PACKAGE_A_CHARGES;

                total_charges_B = minutes_used > PACKAGE_B_MINUTES 
                ? PACKAGE_B_CHARGES + ((minutes_used - PACKAGE_B_MINUTES) * PACKAGE_B_ADDITIONAL_CHARGES) 
                : PACKAGE_B_CHARGES;

                total_charges_C = PACKAGE_C_CHARGES;

                cout << setprecision(2) << fixed;

                if (menu_choice == 'a' || menu_choice == 'A')
                {
                    cout << "Package A monthly charges: $"
                         << total_charges_A << endl
                         << endl;
                    
                    if (total_charges_A > total_charges_B)
                    {
                        could_have_saved = total_charges_A - total_charges_B;
                    	cout << "You could have saved $" 
                             << could_have_saved 
                             << " with Package B." 
                             << endl;
                        
                        could_have_saved = total_charges_A - total_charges_C;
                    	cout << "You could have saved $" 
                             << could_have_saved
                             << " with Package C." 
                             << endl;
                    }

                }
                else if(menu_choice == 'b' || 
                        menu_choice == 'B') 
                {
                    cout << "Package B monthly charges: $" 
                         << total_charges_B 
                         << endl;
                    
                    if (total_charges_B > total_charges_C)
                    {
                        could_have_saved = total_charges_B - total_charges_C;
                    	cout << "You could have saved $" 
                             << could_have_saved
                             << " with Package C." 
                             << endl;
                    }
                }
                else if (menu_choice == 'c' || 
                         menu_choice == 'C') 
                {
                    cout << "Package C monthly charges: $"
                         << total_charges_C 
                         << endl;
                }    
            }
            break;
    
        default:
            cout << "We're sorry. Menu choice must be A, "
                 << "B, or C.\n"
                 << "Rerun the program and try again." 
                 << endl;
            break;
    }
    cout << endl;

    return 0;
}
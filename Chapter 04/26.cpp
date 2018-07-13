/********************************************************************
*
*	26. Mobile Service Provider, Part 2
*
*       Modify the Program in Programming Challenge 25 so that
*       it also displays how much money Package A customers would
*       save if they purchased packages B or C, and how much money
*       Package B customers would save if they purchased Package C.
*       If there would be no savings, no message should be printed.
*
* 	Jesus Hilario Hernandez
* 	February 28, 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
	// Constant Variables
    const float A_CHARGES = 39.99,
	
   				A_ADD 	  = .45,
    			A_MINS 	  = 450,
    			B_CHARGES = 59.99,
    			B_ADD	  = .40,
    			B_MINS	  = 900,
			
    			C_CHARGES = 69.99;
    				
    // Variables
    char menu_choice;

    // Display menu
    cout << "\nPackage A: For $39.99 per month 450 minutes are provided." << endl;
    cout << "           Additional minutes are $0.45 per minute." << endl;
    cout << "Package B: For $59.99 per month 900 minutes are provided." << endl;
    cout << "           Additional minutes are $0.40 per minute." << endl;
    cout << "Package C: For $69.99 per month unlimited minutes provided.\n" << endl;

    // Ask for package customer purchased
    cout << "Choose package: ";
    cin >> menu_choice;
    cout << endl;

    // Validate menu_choice
    switch (menu_choice)
    {
    	
        // Variables
        int mins_used;
        float total_charges_A,
        	  total_charges_B,
        	  total_charges_C;

        case 'a':
        case 'A':
        case 'B':
        case 'b':
        case 'c':
        case 'C':
            // Ask how many minutes used
            cout << "How many minutes used? ";
            cin >> mins_used;
            cout << endl;

            // Validate mins_used
            if (mins_used < 0)
            {
                cout << "We're sorry. Minutes must be greater than 0.\n";
                cout << "Rerun the program and try again." << endl;
            }
            else
            {
                // Display total amount due
                cout << setprecision(2) << fixed;
                
                // Conditional Statement for each Package
				total_charges_A = mins_used > A_MINS ? A_CHARGES + ((mins_used - A_MINS) * A_ADD) : A_CHARGES;
				total_charges_B = mins_used > B_MINS ? B_CHARGES + ((mins_used - B_MINS) * B_ADD) : B_CHARGES;
				total_charges_C = C_CHARGES;
				
                // Calculates customer's monthly bill (choice A)
                if (menu_choice == 'a' || menu_choice == 'A')
                {
                    cout << "Package A monthly charges: $" << total_charges_A << endl;
                    cout << endl;
                    
                    // Decides if Package A is greater than B
                    if (total_charges_A > total_charges_B)
                    {
                    	cout << "You could have saved $" << total_charges_A - total_charges_B;
                    	cout << " with Package B." << endl;
                    	cout << "You could have saved $" << total_charges_A - total_charges_C;
                    	cout << " with Package C." << endl;
                    }
                    
				}
                // Calculates customer's monthly bill (choice B)
                else if (menu_choice == 'b' || menu_choice == 'B')
                {
                	cout << "Package B monthly charges: $" << total_charges_B << endl;
                    
                    // Decides if Package B is greater than B
                    if (total_charges_B > total_charges_C)
                    {
                    	cout << "You could have saved $" << total_charges_B - total_charges_C;
                    	cout << " with Package C." << endl;
                    }
                    
				}
                // Calculates customer's monthly bill (choice C)
                else if (menu_choice == 'c' || menu_choice == 'C')
                	cout << "Package C monthly charges: $" << total_charges_C << endl;

            }
            break;

        default:
            // Display error.
            cout << "We're sorry. Menu choice must be A, B, or C.\n";
            cout << "Rerun the program and try again." << endl;
    }

    cout << endl;

    // Terminate program
    return 0;
}

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    const float PACKAGE_A_CHARGES = 39.99,
                PACKAGE_B_CHARGES = 59.99,
                PACKAGE_C_CHARGES = 69.99,

   				PACKAGE_A_ADDITIONAL_CHARGES = .45,
                PACKAGE_B_ADDITIONAL_CHARGES = .40,

    			PACKAGE_A_MINUTES = 450,
    			PACKAGE_B_MINUTES = 900,
    			
    			_30_DAYS   = 30,
    			_31_DAYS   = 31,
    			_28_DAYS   = 28,
                
    			NUM_MINS_IN_28_DAYS = 672 * 60,
    			NUM_MINS_IN_30_DAYS = 720 * 60,
    			NUM_MINS_IN_31_DAYS = 744 * 60;

    char menu_choice;
    int month;

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
        int counter;
        float total_charges_A,
        	  total_charges_B,
        	  total_charges_C;

        case 'a':
        case 'A':
        case 'B':
        case 'b':
        case 'c':
        case 'C':
            cout << "Choose a month (use numbers)\n" 
                 << " E.g. 12 = December, 3 = March:"
                 << endl;
        	cin >> month;

            switch (month)
            {
                case 1:
                case 3:
                case 5:
                case 7:
                case 8:
                case 10:
                case 12:
                    counter = _31_DAYS;
                    break;
                case 4:
                case 6:
                case 9:
                case 11:
                    counter = _30_DAYS;
                    break;
                case 2:
                    counter = _28_DAYS;
                    break;
            
                default:
                    cout << "Invalid month. Rerun program.\n"
                         << "Try again." 
                         << endl;
                    break;
            }

            if (counter >= _28_DAYS && counter <= _31_DAYS)
            {
                int minutes_used;
        		
            	cout << "How many minutes used? ";
            	cin >> minutes_used;
            	cout << endl;

                if (minutes_used < 0)
                {
                    cout << "We're sorry. Minutes must be "
                         << "greater than 0.\n"
                	     << "Rerun the program and try "
                         << "again." 
                         << endl;
                }
                else
                {
                    if (counter == _31_DAYS && 
                        minutes_used > NUM_MINS_IN_31_DAYS) 
                    {
                        cout << "We're sorry. Minutes must "
                             << "be " 
                             << NUM_MINS_IN_31_DAYS
                		     << " or less.\nRerun the "
                             << "program and try"
                             << " again." 
                             << endl;
                    }
                    else if (counter == _30_DAYS && 
                             minutes_used > NUM_MINS_IN_30_DAYS)
                    {
                        cout << "We're sorry. Minutes must "
                             << "be " 
                             << NUM_MINS_IN_30_DAYS
            			     << " or less.\nRerun the "
                             << "program and try"
                             << " again." 
                             << endl;
                    }
                    else if (counter == _28_DAYS && 
                             minutes_used > NUM_MINS_IN_28_DAYS)
                    {
                        cout << "We're sorry. Minutes must "
                             << "be " 
                             << NUM_MINS_IN_28_DAYS
            			     << " or less.\nRerun the "
                             << "program and try"
                             << " again." 
                             << endl;
                    }
                    else
                    {
                        cout << setprecision(2) << fixed;

                        total_charges_A = minutes_used > PACKAGE_A_MINUTES 
                        ? PACKAGE_A_CHARGES + ((minutes_used - PACKAGE_A_MINUTES) * PACKAGE_A_ADDITIONAL_CHARGES)
                        : PACKAGE_A_CHARGES;
						
                        total_charges_B = minutes_used > PACKAGE_B_MINUTES 
                        ? PACKAGE_B_CHARGES + ((minutes_used - PACKAGE_B_MINUTES) * PACKAGE_B_ADDITIONAL_CHARGES)
                        : PACKAGE_B_CHARGES;
						
                        total_charges_C = PACKAGE_C_CHARGES;

                        if (menu_choice == 'a' ||        
                            menu_choice == 'A')
                        {
                            cout << "Package A monthly" 
                                 << " charges: $" 
                                 << total_charges_A 
                                 << endl 
                                 << endl;
                            if (total_charges_A > 
                                total_charges_B)
                            {
                                cout << "You could have "
                                     << "saved $" 
                                     << total_charges_A - total_charges_B
                		    	     << " with Package B." 
                                     << endl
                		    	     << "You could have "
                                     << "saved $" 
                                     << total_charges_A - total_charges_C
                		    	     << " with Package C." 
                                     << endl;
                            }
                        }
                        else if (menu_choice == 'b' || 
                                 menu_choice == 'B')
                        {
                            cout << "Package B monthly "
                                 << "charges: $" 
                                 << total_charges_B 
                                 << endl;
                            if (total_charges_B >
                                total_charges_C)
                            {
                                cout << "You could have "
                                     << "saved $" 
                                     << total_charges_B - total_charges_C
                		    	     << " with Package C." 
                                     << endl;
                            }
                        }
                        else if (menu_choice == 'c' || 
                                 menu_choice == 'C')
                        {
                            cout << "Package C monthly "
                                 << "charges: $" 
                                 << total_charges_C 
                                 << endl;
                        }
                    }  
                }
            }
            break;
    
        default:
            cout << "We're sorry. Menu choice must be A, \n"
                 << "B, or C.\n"
                 << "Rerun the program and try again." 
                 << endl;
            break;
    }
    cout << endl;

    return 0;
}
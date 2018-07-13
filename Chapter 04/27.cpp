/********************************************************************
*
*	27. Mobile Service Provider, Part 3
*
*       Months with 30 days have 720 hours, and months with 31 days 
*		have 744 hours. February, with 28 days, has 672 hours. You can 
*		calculate the number of minutes in a month by multiplying its 
*		number of hours by 60. Enhance the input validation of the 
*		Mobile Service Provider program by asking the user for the 
*		month (by name), and validating that the number of minutes 
*		entered is not more than the maximum for the entire month. 
*		Here is a table of the months, their days, and number of hours
*		in each.
*
*		==============================================================
*		Month 					Days 				Hours
*		-------------------------------------------------------------
*		January 				31 					744
*		February 				28 					672
*		March 					31 					744
*		April 					30 					720
*		May 					31 					744
*		June 					30 					720
*		July 					31 					744
*		August 					31 					744
*		September 				30 					720
*		October 				31 					744
*		November 				30 					720
*		December 				31 					744
*		==============================================================
*
* 	Jesus Hilario Hernandez
* 	February 28, 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>
#include <string>

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
    			C_CHARGES = 69.99,
    			_30_DAYS   = 30,
    			_31_DAYS   = 31,
    			_28_DAYS   = 28,
    			NUM_MINS_IN_28_DAYS = 672 * 60,
    			NUM_MINS_IN_30_DAYS = 720 * 60,
    			NUM_MINS_IN_31_DAYS = 744 * 60;
    			

    // Variables
    char menu_choice;		// Menu selection (menu_choice)
    string month;			// User (month)

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
        
        	// Ask for (month)
        	cout << "Choose a month" << endl;
        	cin >> month;
        	
        	// Validate (month)
        	if (month == "January" || month == "january")
        		counter = _31_DAYS;
        	else if (month == "February" || month == "february")
        		counter = _28_DAYS;
        	else if (month == "March" || month == "march")
        		counter = _31_DAYS;
        	else if (month == "April" || month == "april")
        		counter = _30_DAYS;
        	else if (month == "May" || month == "may")
        		counter = _31_DAYS;
        	else if (month == "June" || month == "june")
        		counter = _30_DAYS;
        	else if (month == "July" || month == "july")
        		counter = _31_DAYS;
        	else if (month == "August" || month == "august")
        		counter = _31_DAYS;
        	else if (month == "September" || month == "september")
        		counter = _30_DAYS;
        	else if (month == "October" || month == "october")
        		counter = _31_DAYS;
        	else if (month == "November" || month == "november")
        		counter = _30_DAYS;
        	else if (month == "December" || month == "december")
        		counter = _31_DAYS;
        	else
        	{
        		// Explain input error (month)
        		cout << "Invalid month. Check spelling, rerun program ";
        		cout << "and try again." << endl;
        	}
        	
        	// Check if (counter) is between 28 and 31
        	if (counter >= _28_DAYS && counter <= _31_DAYS)
        	{
        		// Variables
        		int mins_used;					// Minutes used
        		
        		// Ask how many (mins_used)
            	cout << "How many minutes used? ";
            	cin >> mins_used;
            	cout << endl;

            	// Validate (mins_used)
            	if (mins_used < 0)
            	{
            		// Explain input error (mins_used)
                	cout << "We're sorry. Minutes must be greater than 0.\n";
                	cout << "Rerun the program and try again." << endl;
            	}
            	else
            	{
            		// Validate (mins_used)
            		if (counter == _31_DAYS && mins_used > NUM_MINS_IN_31_DAYS)
            		{
                		// Explain error (mins_used) to (NUM_MINS_IN_31_DAYS)
                		cout << "We're sorry. Minutes must be " << NUM_MINS_IN_31_DAYS;
                		cout << " or less.\nRerun the program and try again." << endl;
            		}	
            		else if (counter == _30_DAYS && mins_used > NUM_MINS_IN_30_DAYS)
            		{
            			// Explain error (mins_used) to (NUM_MINS_IN_30_DAYS)
            			cout << "We're sorry. Minutes must be " << NUM_MINS_IN_30_DAYS;
            			cout << " or less.\nReturn the program and try again." << endl;
            		}
            		else if (counter == _28_DAYS && mins_used > NUM_MINS_IN_28_DAYS)
            		{
            			// Explain error (mins_used) to (NUM_MINS_IN_28_DAYS)
            			cout << "We're sorry. Minutes must be " << NUM_MINS_IN_28_DAYS;
            			cout << " or less.\nReturn the program and try again." << endl;
            		}
           			else
           			{
           				// Format precision
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
            	}
        	}
            break;

        default:
            // Display error (menu_choice).
            cout << "We're sorry. Menu choice must be A, B, or C.\n";
            cout << "Rerun the program and try again." << endl;
    }

    cout << endl;

    // Terminate program
    return 0;
}

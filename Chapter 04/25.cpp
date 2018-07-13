/********************************************************************
*
*	25. Mobile Service Provider
*
*       A mobile phone service provider has three different
*       subscription packages for its customers:
*
*       Package A: For $39.99 per month 450 minutes are provided.
*                  Additional minutes are $0.45 per minute.
*       Package B: For $59.99 per month 900 minutes are provided.
*                  Additional minutes are $0.40 per minute.
*       Package C: For $69.99 per month unlimited minutes provided.
*
*       Write a program that calculates a customer’s monthly bill.
*       It should ask which package the customer has purchased and how
*       many minutes were used. It should then display the total amount
*       due.
*
*       Input Validation: Be sure the user only selects package A, B, or
*       C.
*
* 	Jesus Hilario Hernandez
* 	February 26, 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
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
        float total_charges;

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
                cout << "Total monthly charges: ";

                // Calculates customer's monthly bill (choice A)
                if (menu_choice == 'a' || menu_choice == 'A')
                    total_charges = mins_used > 450 ? 39.99 + ((mins_used - 450) * .45) : 39.99;

                // Calculates customer's monthly bill (choice B)
                else if (menu_choice == 'b' || menu_choice == 'B')
                    total_charges = mins_used > 900 ? 59.99 + ((mins_used - 900) * .40) : 59.99;

                // Calculates customer's monthly bill (choice C)
                else if (menu_choice == 'c' || menu_choice == 'C')
                    total_charges = 69.99;

                // Display total charges
                cout << total_charges << endl;
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

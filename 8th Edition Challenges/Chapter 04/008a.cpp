#include <iostream>
using namespace std;

int main()
{
    // Variables
    string color_1, 
           color_2;

    // Ask user for 2 primary colors
    cout << endl;
    cout << "Enter 1st primary color : ";
    cin >> color_1;

    // Format line break
    cout << endl;

    // Error checking & Input Validation
    if (color_1 == "red" || color_1 == "Red")
    {
        cout << "Enter 2nd primary color is: ";
        cin >> color_2;

        if (color_2 == "blue" || color_2 == "Blue")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = purple.\n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = Orange.\n";
        }
        else if (color_2 == "red" || color_2 == "Red")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = Red.\n";
        }
        else
        {
            cout << "\nSorry. Color No. 2 must be a primary color.\n"
             << "(yellow, blue, or red).\n" << endl
             << "Rerun program and try again."
             << endl;
        }
        
    }
    else if (color_1 == "blue" || color_1 == "Blue")
    {
        cout << "The 2nd primary color is: ";
        cin >> color_2;

        if (color_2 == "red" || color_2 == "Red")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = Purple.\n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = Green.\n";
        }
        else if (color_2 == "blue" || color_2 == "Blue")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = Blue.\n";
        }
        else
        {
            cout << "\nSorry. Color No. 2 must be a primary color.\n"
             << "(yellow, blue, or red)." << endl
             << "Rerun program and try again."
             << endl;
        }
        
    }
    else if (color_1 == "yellow" || color_1 == "Yellow")
    {
        cout << "The 2nd primary color is: ";
        cin >> color_2;

        if (color_2 == "red" || color_2 == "Red")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = orange.\n";
        }
        else if (color_2 == "blue" || color_2 == "Blue")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = green.\n";
        }
        else if (color_2 == "yellow" || color_2 == "Yellow")
        {
            cout << color_1 << " & ";
            cout << color_2 << " = Yellow.\n";
        }
        else
        {
            cout << "\nSorry. Color No. 2 must be a primary color.\n"
             << "(yellow, blue, or red)." << endl
             << "Rerun program and try again."
             << endl;
        }
    }
    else
    {
        cout << "Sorry. Color No. 1 must be a primary color.\n"
             << "(yellow, blue, or red)." << endl
             << "Rerun program and try again."
             << endl;
    }

    // Formatting
    cout << endl << endl;

    // Terminate program
    return 0;
}
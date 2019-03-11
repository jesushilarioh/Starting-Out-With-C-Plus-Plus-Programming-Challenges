// 1. Vegetarian, 2. Vegan, 3. Gluten-Free

// yes, yes, yes
// Corner Cafe
// The Chef's Kitchen

// yes, no, no
// Main Street Pizza Company
// Corner Cafe
// Mama's Fine Italian
// The Chef's Kitchen

// yes, yes, no
// Corner Cafe
// The Chef's Kitchen

// yes, no, yes
// Main Street Pizza Company
// Corner Cafe
// The Chef's Kitchen


// 1. Vegetarian, 2. Vegan, 3. Gluten-Free

// no, yes, yes
// Corner Cafe
// The Chef's Kitchen

// no, no, no
// Joe's Gourmet Burgers
// Main Street Pizza Company
// Corner Cafe
// Mama's Fine Italian
// The Chef's Kitchen

// no, yes, no
// Corner Cafe
// The Chef's Kitchen

// no, no, yes
// Main Street Pizza Company
// Corner Cafe
// The Chef's Kitchen

#include <iostream>
using namespace std;
int main()
{
    string vegetarian,
           vegan,
           gluten_free;

    cout << "Is anyone in your party a vegetarian? ";
    cin >> vegetarian;

    if (vegetarian == "yes" || vegetarian == "no")
    {
        cout << "Is anyone in your party a vegan? ";
        cin >> vegan;
        if (vegan == "yes" || vegan == "no")
        {
            cout << "Is anyone in your party a gluten-free? ";
            cin >> gluten_free;
            if (gluten_free == "yes" || gluten_free == "no")
            {
                cout << "\nHere are your restaurant choices:"
                     <<  endl;

                if(vegetarian == "yes")
                {
                   if(vegan == "yes") 
                   {
                       if(gluten_free == "yes" ||
                          gluten_free == "no")
                       {
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                       }                       
                   } 
                   else
                   {
                        if(gluten_free == "yes")
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                        else
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   Mama's Fine Italian\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                   }
                }
                else
                {
                    if (vegan == "yes")
                    {
                        if (gluten_free == "yes" ||
                            gluten_free == "no")
                        {
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                    }
                    else
                    {
                        if (gluten_free == "yes")
                        {
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   The Chef's Kitchen\n";
                        }
                        else
                        {
                            cout << "   Joe's Gourmet Burgers\n";
                            cout << "   Main Street Pizza Company\n";
                            cout << "   Corner Cafe\n";
                            cout << "   Mama's Fine Italian\n";
                            cout << "   The Chef's Kitchen\n";
                        }   
                    }
                }   
            }
            else
            {
                cout << "\nError. \"yes\" or \"no\" must be chosen.\n"
                     << "Rerun the program and try again."
                     << endl;
            }
        }
        else
        {
            cout << "\nError. \"yes\" or \"no\" must be chosen.\n"
                     << "Rerun the program and try again."
                     << endl;
        }
    }
    else
    {
        cout << "\nError. \"yes\" or \"no\" must be chosen.\n"
                     << "Rerun the program and try again."
                     << endl;
    }

    return 0;
}
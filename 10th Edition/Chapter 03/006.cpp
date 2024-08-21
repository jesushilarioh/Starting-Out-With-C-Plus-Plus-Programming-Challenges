/*
6. Ingredient Adjuster

A cookie recipe calls for the following ingredients:
• 1.5 cups of sugar
• 1 cup of butter
• 2.75 cups of flour

The recipe produces 48 cookies with this amount of the ingredients. Write a program that asks the user how many cookies he or she wants to make, then displays the number of cups of each ingredient needed for the specified number of cookies.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const float COOKIES = 48, // number of cookies to make
                SUGAR = 1.5, // cups
                BUTTER = 1, // cup
                FLOUR = 2.75; // cups
    
    float cookies,
          total_butter,
          total_sugar,
          total_flour;
    
    cout << "\nEnter number of cookies: ";
    cin >> cookies;
    
    total_sugar  = (SUGAR * cookies) / COOKIES; 
    total_flour  = (FLOUR * cookies) / COOKIES;
    total_butter = (BUTTER * cookies) / COOKIES;
    
    cout << setprecision(2) << fixed << endl
         << "Total cookies  = " << cookies      << endl
         << "Total sugar    = " << total_sugar  << " cups " << endl
         << "Total flour    = " << total_flour  << " cups " << endl
         << "Total butter   = " << total_butter << " cups " << endl
         << endl;

    return 0;
}

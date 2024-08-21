/*
9. How Many Calories?
A bag of cookies holds 30 cookies. The calorie information on the bag claims there are 10 “servings” in the bag and that a serving equals 300 calories. Write a program that asks the user to input how many cookies he or she actually ate, then reports how many total calories were consumed.
*/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int COOKIES_PER_BAG       = 30,
              SERVINGS_PER_BAG      = 10,
              CALORIES_PER_SERVING  = 300;
    
    float cookies,
          servings,
          calories,
          cookies_per_serving = COOKIES_PER_BAG / SERVINGS_PER_BAG;
    
    cout << "\nHow many cookies eaten? ";
    cin >> cookies;
    
    servings = cookies / cookies_per_serving;
    calories = servings * CALORIES_PER_SERVING;
    
    cout << setprecision(2) << fixed << right
         << "\nNumber of cookies per bag      = " << setw(8) << COOKIES_PER_BAG      
         << "\nNumber of servings per bag     = " << setw(8) << SERVINGS_PER_BAG     
         << "\nNumber of calories per serving = " << setw(8) << CALORIES_PER_SERVING 
         << "\nNumber of cookies per serving  = " << setw(8) << cookies_per_serving  
         << "\nNumber of cookies eaten        = " << setw(8) << cookies        
         << "\nNumber of servings eaten       = " << setw(8) << servings       
         << "\nNumber of calories consumed    = " << setw(8) << calories    
         << endl
         << endl;
    return 0;
}

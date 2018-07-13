/********************************************************************
*
*	09. HOW MANY CALORIES?
*
*       A bag of cookies holds 30 cookies. The calorie information on
*       the bag claims that there are 10 "servings" in the bag and
*       that a serving equals 300 calories. Write a program that
*       asks the user to input how many cookies he or she
*       actually ate and then reports how many total calories
*       were consumed.
*
* 	Jesus Hilario Hernandez
* 	January 16th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int NUM_COOKIES_PER_BAG = 30,  // Number of cookies per bag
              NUM_SERVINGS_PER_BAG = 10, // Number of servings per bag
              NUM_CALORIES_PER_SERVING = 300;            // Calories per serving.

    // Number of cookies per serving
    float num_cookies_per_serving = NUM_COOKIES_PER_BAG / NUM_SERVINGS_PER_BAG,
          num_cookies_eaten,
          num_servings_eaten,
          num_calories_consumed;

    // Ask user to input how many cookies she actually ate
    cout << endl;
    cout << "How many cookies did you eat? ";
    cin >> num_cookies_eaten;

    // Calculate number of servings she ate
    num_servings_eaten = num_cookies_eaten / num_cookies_per_serving;

    // Calculate number of calories were consumed
    num_calories_consumed = num_servings_eaten * NUM_CALORIES_PER_SERVING;

    // Display how many total calories were consumed
    cout << '\n' << setprecision(2) << fixed << right;

    cout << "Number of cookies per bag      = " << setw(8) << NUM_COOKIES_PER_BAG << endl;
    cout << "Number of servings per bag     = " << setw(8) << NUM_SERVINGS_PER_BAG << endl;
    cout << "Number of calories per serving = " << setw(8) << NUM_CALORIES_PER_SERVING << endl;
    cout << "Number of cookies per serving  = " << setw(8) << num_cookies_per_serving << endl;
    cout << "Number of cookies eaten        = " << setw(8) << num_cookies_eaten << endl;
    cout << "Number of servings eaten       = " << setw(8) << num_servings_eaten << endl;
    cout << "Number of calories consumed    = " << setw(8) << num_calories_consumed << endl;
    cout << endl;

    // Terminate program.
    return 0;
}

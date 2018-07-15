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
    // Constant Variables
    const int COOKIES_PER_BAG       = 30,
              SERVINGS_PER_BAG      = 10,
              CALORIES_PER_SERVING  = 300;

    // Variables
    float cookies_eaten,
          servings_eaten,
          calories_consumed,

          cookies_per_serving = COOKIES_PER_BAG / SERVINGS_PER_BAG;

    // Ask how many cookies eaten
    cout << endl;
    cout << "How many cookies eaten? ";
    cin >> cookies_eaten;

    // Calculate number of servings
    servings_eaten = cookies_eaten / cookies_per_serving;

    // Calculate caloires consumed
    calories_consumed = servings_eaten * CALORIES_PER_SERVING;

    cout << '\n' << setprecision(2) << fixed << right;

    cout << "Number of cookies per bag      = ";
    cout << setw(8) << COOKIES_PER_BAG      << endl;

    cout << "Number of servings per bag     = ";
    cout << setw(8) << SERVINGS_PER_BAG     << endl;

    cout << "Number of calories per serving = ";
    cout << setw(8) << CALORIES_PER_SERVING << endl;

    cout << "Number of cookies per serving  = ";
    cout << setw(8) << cookies_per_serving  << endl;

    cout << "Number of cookies eaten        = ";
    cout << setw(8) << cookies_eaten        << endl;

    cout << "Number of servings eaten       = ";
    cout << setw(8) << servings_eaten       << endl;

    cout << "Number of calories consumed    = ";
    cout << setw(8) << calories_consumed    << endl;

    cout << endl;
    return 0;
}

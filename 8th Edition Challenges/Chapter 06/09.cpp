/************************************************************
*
*   Chapter 6 - #09. Present Value
*
*   Suppose you want to deposit a certain amount of money 
*   into a savings account and then leave it alone to draw 
*   interest for the next 10 years. At the end of 10 years 
*   you would like to have $10,000 in the account. How much 
*   do you need to deposit today to make that happen? You can 
*   use the following formula, which is known as the present
*   value formula, to find out:
*
*   P = F / (1 + r)^n  // P = F / pow((1 + r), n)
*
*   The terms in the formula are as follows:
*
*   • P is the present value, or the amount that you need to 
*       deposit today.
*   • F is the future value that you want in the account. 
*       (In this case, F is $10,000.)
*   • r is the annual interest rate.
*   • n is the number of years that you plan to let the money 
*       sit in the account.
*
*   Write a program that has a function named presentValue 
*   that performs this calculation. The function should 
*   accept the future value, annual interest rate, and number 
*   of years as arguments. It should return the present value, 
*   which is the amount that you need to deposit today. 
*   Demonstrate the function in a program that lets the user 
*   experiment with different values for the formula’s terms.
*
*************************************************************/
#include <iostream>
#include <cmath> // pow(5, n) = 5^n
using namespace std;

// Function Prototypes
double presentValue(double, double, double);
double inputValidate(double);
char inputValidate(char);

int main()
{
    // Variables
    double P,   // Present value
           F,   // Future value
           r,   // Annual interest rate
           n;   // Number of years
    
    char user_choice;

    do 
    {
        cout << "What is the annual interest rate? ";
        r = inputValidate(r);

        cout << "What is the future value? ";
        F = inputValidate(F);

        cout << "What is the number of years? ";
        n = inputValidate(n);

        P = presentValue(F, r, n);
        cout << "The present value should be: $"
             << P << '\n' << endl;

        cout << "Would you like to make another calculation? (y/n):";
        user_choice = inputValidate(user_choice);
        
        cout << endl;

    } while (user_choice == 'y' || user_choice == 'Y');
    
    return 0;
}

/********************************************************
 * Definition of presentValue function:                 *
 * The presentValue function calculates the present     *
 * value using this formula: P = F / (1 + r)^n          *
 * accepting the future value (F), annual interest rate *
 * (r), and number of years (n) as arguments.           *
 ********************************************************/
double presentValue(double F, double r, double n)
{
    r *= .01; // 3.33% = .0333
    return F / pow((1 + r), n);
}

/********************************************************
 * Definition of inputValidate function:                *
 * This function checks user input. When the            *
 * user enters anything other than a (double), the      *
 * inputValidate will display an error, clear the input *
 * stream, ignore previous input up untill the new      *
 * line (\n) character.                                 *
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

char inputValidate(char letter)
{
    cin >> letter;

    while (!(letter == 'y' || 
           letter == 'Y' || 
           letter == 'N' || 
           letter == 'n'))
    {
        cout << "ERROR: a Y or an N must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> letter;
    }

    return letter;
}
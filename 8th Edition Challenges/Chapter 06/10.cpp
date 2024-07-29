/************************************************************
*
*   10. Future Value
*
*   Suppose you have a certain amount of money in a savings 
*   account that earns compound monthly interest, and you want 
*   to calculate the amount that you will have after a 
*   specific number of months. The formula, which is known 
*   as the future value formula, is:
*
*   F = P x (1 + i)^t //---> F = P * pow((1 + i), t);
*
*   The terms in the formula are as follows:
*
*   • F is the future value of the account after the 
*       specified time period.
*   • P is the present value of the account.
*   • i is the monthly interest rate.
*   • t is the number of months.
*
*   Write a program that prompts the user to enter the 
*   account’s present value, monthly interest rate, and 
*   the number of months that the money will be left in the 
*   account. The program should pass these values to a 
*   function named futureValue that returns the future value 
*   of the account, after the specified number of months. The 
*   program should display the account’s future value.
*
*************************************************************/
#include <iostream>
#include <cmath> // pow(5, n) = 5^n
using namespace std;

double inputValidate(double);
char inputValidate(char);
double futureValue(double, double, double);

int main()
{
    double present_value,
           future_value,
           monthly_interest_rate,
           number_of_months;

    char user_choice;

    do
    {
        cout << "Enter account's present value  : ";
        present_value = inputValidate(present_value);

        cout << "Enter monthly interest rate    : ";
        monthly_interest_rate = inputValidate(monthly_interest_rate);

        cout << "Enter number of months         : ";
        number_of_months = inputValidate(number_of_months);

        future_value = futureValue(present_value, monthly_interest_rate, number_of_months);
        cout << "Future value is: $"
                << future_value 
                << endl 
                << endl;

        cout << "Would you like to make another calculation? (y/n):";
        user_choice = inputValidate(user_choice);

        cout << endl;

    } while (user_choice == 'y' || user_choice == 'Y');

    return 0;
}

/********************************************************
 * Definition of inputValidate function:
 * This function checks for positive integers
 ********************************************************/
double inputValidate(double num)
{
    while(!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

/********************************************************
 * Definition of inputValidate function:
 * This function checks for either a 'y' or an 'n'
 ********************************************************/
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

/********************************************************
 * Definition of futureValue function:
 * The futureValue function calculates the present
 * value using this formula: 
 * present_value * pow((1 + monthly_interest_rate), number_of_months);
 * accepting the present_value,monthly_interest_rate, 
 * and number_of_months as arguments.
 ********************************************************/
double futureValue(double present_value, double monthly_interest_rate, double number_of_months)
{
    monthly_interest_rate *= .01; // 3.33% = .0333
    
    return present_value * pow((1 + monthly_interest_rate), number_of_months);
}

/**
 * 1. Charge Account Validation
 * 
 * Write a program that lets the user enter a charge account number. 
 * The program should determine if the number is valid by checking for 
 * it in the following list:
 * 
 * 5658845 4520125 7895122 8777541 8451277 1302850 
 * 8080152 4562555 5552012 5050552 7825877 1250255 
 * 1005231 6545231 3852085 7576651 7881200 4581002
 * 
 * The list of numbers above should be initialized in a single-dimensional 
 * array. A simple linear search should be used to locate the number 
 * entered by the user. If the user enters a number that is in the array, 
 * the program should display a message saying that the number is valid. 
 * If the user enters a number that is not in the array, the program should 
 * display a message indicating that the number is invalid.
 *
 **/
#include <iostream>
using namespace std;

int inputValidation(int);
bool linearSearch(const int[], 
                  const int, 
                  const int);

int main()
{
    const int NUMBER_OF_ACCOUNTS = 18;

    int account_numbers[NUMBER_OF_ACCOUNTS] = { 5658845, 4520125, 7895122, 
                                                8777541, 8451277, 1302850, 
                                                8080152, 4562555, 5552012, 
                                                5050552, 7825877, 1250255, 
                                                1005231, 6545231, 3852085, 
                                                7576651, 7881200, 4581002 };

    cout << "Enter an account #: " << endl;
    int user_account_number = inputValidation(user_account_number);

    bool user_account_number_is_valid = linearSearch(account_numbers, 
                                                     NUMBER_OF_ACCOUNTS, 
                                                     user_account_number);

    if (user_account_number_is_valid)
        cout << "Your account number is valid." << endl;
    else
        cout << "Your account number is invalid." << endl;

    return 0;
}

int inputValidation(int user_number)
{
    while (!(cin >> user_number))
    {
        cout << "Error. Enter a valid number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return user_number;
}

bool linearSearch(const int array[], const int ARRAY_SIZE, const int user_number)
{
    int index = 0;
    bool found = false;

    while (index < ARRAY_SIZE && !found)
    {
        if (array[index] == user_number)
            found = true;
        index++;
    }
    return found;
}

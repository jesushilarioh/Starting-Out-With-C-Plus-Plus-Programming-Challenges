/**
 * 4. Charge Account Validation Modification 
 * Modify the program you wrote for Problem 1 
 * (Charge Account Validation) so it performs 
 * a binary search to locate valid account numbers. 
 * Use the selection sort algorithm to sort the array 
 * before the binary search is performed.
 * 
 **/
#include <iostream>
using namespace std;

int inputValidation(int, string);
void selectionSort(int [], const int);
bool binarySearch(const int[], const int, const int);

int main()
{
    const int NUMBER_OF_ACCOUNTS = 18;

    int account_numbers[NUMBER_OF_ACCOUNTS] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 
                                                8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 
                                                1005231, 6545231, 3852085, 7576651, 7881200, 4581002 };

    int user_account_number = inputValidation(user_account_number, "Enter an account #: ");

    selectionSort(account_numbers, NUMBER_OF_ACCOUNTS);

    bool user_account_number_is_valid = binarySearch(account_numbers, NUMBER_OF_ACCOUNTS, user_account_number);

    if (user_account_number_is_valid)
        cout << "Your account number is valid." << endl;
    else
        cout << "Your account number is invalid." << endl;

    return 0;
}

int inputValidation(int user_number, string prompt)
{
    cout << prompt << endl;
    while (!(cin >> user_number))
    {
        cout << "Error. Enter a valid number: " << endl;
        cout << prompt << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return user_number;
}

void selectionSort(int array[], const int ARRAY_SIZE)
{
    int min_index,
        min_value;

    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < ARRAY_SIZE; index ++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }
        }
        swap(array[min_index], array[start_index]);
    }
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

bool binarySearch(const int array[], const int ARRAY_SIZE, const int user_number)
{

    int first_index = 0,
        middle_index,
        last_index = ARRAY_SIZE - 1;

    bool found = false;

    while (!found && first_index <= last_index)
    {
        middle_index = (first_index + last_index) / 2;

        if (array[middle_index] == user_number)
            found = true;
        else if (array[middle_index] > user_number)
            last_index = middle_index - 1;
        else
            first_index = middle_index + 1;
    }
    
    return found;
}

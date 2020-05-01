#include <iostream>
using namespace std;

// Global constants
const int ARRAY_SIZE = 10;

// Prototypes
int inputValidate(int);
void getValues(int []);
void displayValues(int []);
int getLargestValue(int []);
int getSmallestValue(int []);

int main()
{
    int user_value_array[ARRAY_SIZE];

    getValues(user_value_array);

    int largest_value = getLargestValue(user_value_array);
    cout << "Largest value = " << largest_value << endl;

    int smallest_value = getSmallestValue(user_value_array);
    cout << "Smallest value = " << smallest_value << endl;

    return 0;
} // END int main()

int inputValidate(int user_number)
{
    while(!(cin >> user_number))
    {
        cout << "Error: an integer must be entered. "
             << "Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return user_number;
}

void getValues(int array[])
{
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Enter number for element #"
             << (i + 1) << ": ";
        array[i] = inputValidate(array[i]);
    }
}

int getLargestValue(int array[])
{
    int largest = array[0];

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array[i] >= largest)
            largest = array[i];
        
    }

    return largest;
}

int getSmallestValue(int array[])
{
    int smallest = array[0];

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array[i] <= smallest)
            smallest = array[i];
        
    }
    
    return smallest;
}
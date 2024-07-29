/**
 * 6. String Selection Sort
 * 
 * Modify the selectionSort function presented in this chapter 
 * so it sorts an array of strings instead of an array of ints. 
 * Test the function with a driver program. Use Program 8-8 as 
 * a skeleton to complete.
 * 
 **/

// Program 8-8
#include <iostream> 
#include <string> 
using namespace std;

void selectionSort(string[], int);
void swap(string &, string &);
void displayArray(string[], int, string);

int main() {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES] = {"Collins, Bill", "Smith, Bart", "Allen, Jim",
                               "Griffin, Jim", "Stamey, Marty", "Rose, Geri", 
                               "Taylor, Terri", "Johnson, Jill", 
                               "Allison, Jeff", "Looney, Joe", "Wolfe, Bill", 
                               "James, Jean", "Weaver, Jim", "Pore, Bob", 
                               "Rutherford, Greg", "Javens, Renee", 
                               "Harrison, Rose", "Setzer, Cathy",
                               "Pike, Gordon", "Holland, Beth" };
    // Insert your code to complete this program
    displayArray(names, NUM_NAMES, "UNSORTED: \n--------------------");

    selectionSort(names, NUM_NAMES);

    displayArray(names, NUM_NAMES, "SORTED: \n-------------------- ");

    return 0; 
}

void selectionSort(string array[], int ARRAY_SIZE)
{
    int min_index;
    string min_value;

    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < ARRAY_SIZE; index++)
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

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

void displayArray(string array[], int ARRAY_SIZE, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << endl;
    cout << endl;
}

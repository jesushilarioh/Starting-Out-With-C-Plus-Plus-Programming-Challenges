/**
 * 7. Binary String Search
 * 
 * Modify the binarySearch function presented in this 
 * chapter so it searches an array of strings instead 
 * of an array of ints. Test the function with a driver 
 * program. Use Program 8-8 as a skeleton to complete. 
 * (The array must be sorted before the binary search 
 * will work.)
 * 
 **/
#include <iostream> 
#include <string> 
using namespace std;

void selectionSort(string[], int);
void swap(string &, string &);
void displayArray(string[], int, string);
int binarySearch(string[], int, string);

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

    string user_name;
    cout << "Choose a name: ";
    getline(cin, user_name);

    int position = binarySearch(names, NUM_NAMES, user_name);

    if (position != -1)
       cout << names[position] << " was found." << endl;
    else
        cout << user_name << " was NOT found." << endl;
    

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

int binarySearch(string array[], int array_size, string user_name)
{
    int first = 0,
        last = array_size - 1,  // 19
        middle,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2; // (0 + 19) / 2 = 8

        if (array[middle] == user_name)     // Middle
        {
            position = middle;
            found = true;
        }
        else if (array[middle] > user_name)   // Lower Half
            last = middle - 1; // 8 - 1 = 7  // 8, 4, 4, 3, 2, 3, 
        else                                  // Upper Half
            first = middle + 1;  // 8 + 1 = 9
        
    }
    return position;
}

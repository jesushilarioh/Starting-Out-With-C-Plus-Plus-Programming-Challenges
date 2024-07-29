/**
 * 10. Sorting Orders
 * 
 * Write a program that uses two identical arrays 
 * of just eight integers. It should display the 
 * contents of the first array, then call a function 
 * to sort the array using an ascending order bubble 
 * sort modified to print out the array contents after 
 * each pass of the sort. Next, the program should 
 * display the contents of the second array, then 
 * call a function to sort the array using an ascending 
 * order selection sort modified to print out the array 
 * contents after each pass of the sort.
 * 
 **/
#include <iostream>
#include <string>

using namespace std;

void displayArray(int[], int, string);
void bubbleSort(int[], int);
void swap(int &, int &);
void selectionSort(int[], int);

int main()
{
    const int ARRAY_SIZE = 8;
    int array_1[ARRAY_SIZE] = {8, 100, 55, 2, 99, 12, 1, 0};
    int array_2[ARRAY_SIZE] = {8, 100, 55, 2, 99, 12, 1, 0};

    cout << "<-----BUBBLE SORT----->" << endl;
    displayArray(array_1, ARRAY_SIZE, "Unsorted:-------------|");
    bubbleSort(array_1, ARRAY_SIZE);
    displayArray(array_1, ARRAY_SIZE, "Sorted:---------------|");

    //---------------------------------------------------------|

    cout << "\n<-----SELECTION SORT----->" << endl;
    displayArray(array_2, ARRAY_SIZE, "Unsorted:-------------|");
    selectionSort(array_2, ARRAY_SIZE);
    displayArray(array_2, ARRAY_SIZE, "\nSorted:---------------|");
    cout << endl;
    
    return 0;
} // End int main()

void displayArray(int array[], int ARRAY_SIZE, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << " ";
    cout << endl;
}

void bubbleSort(int array[], int ARRAY_SIZE)
{
    int max_element,
        index,
        pass = 0;

    // <-----------| 19
    for (max_element = ARRAY_SIZE - 1; max_element > 0; max_element--)
    {       
        // 0 |------------->
        for (index = 0; index < max_element; index++)
        {   // 9, 2
            if (array[index] > array[index + 1])
                swap(array[index], array[index + 1]);
        }

        cout << "\nPass #" << pass + 1 << ": --> ";
        for (int i = 0; i < ARRAY_SIZE; i++)
            cout << array[i] << " ";

        pass++;
    }
    cout << endl << endl;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int array[], int ARRAY_SIZE)
{
    int min_index,
        min_value,
        pass = 0;

    // 0 -> 18
    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        // 1 -> 19
        for (int index = start_index + 1; index < ARRAY_SIZE; index++)
        {
            if (array[index] < min_value)
            {
                min_index = index;
                min_value = array[index];
            }
        }
        swap(array[min_index], array[start_index]);

        cout << "\nPass #" << (pass + 1) << ": --> ";
        for (int i = 0; i < ARRAY_SIZE; i++)
            cout << array[i] << " ";

        pass++;
    }
    cout << endl;
}
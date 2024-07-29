/**
 * 8. Search Benchmarks
 * 
    //  Write a program that has an array of at least 
 *      20 integers. It should call a function that uses 
 *      the linear search algorithm to locate one of the 
 *      values. The function should keep a count of the 
 *      number of comparisons it makes until it finds the 
 *      value. The program then should call a function that 
 *      uses the binary search algorithm to locate the same 
 *      value. It should also keep count of the number of 
 *      comparisons it makes. Display these values on the 
 *      screen.
 * 
 **/ 
#include <iostream>
using namespace std;

void selectionSort(int[], int);
void swap(int &, int &);
int binarySearch(int[], int, int, int &);
int linearSearch(int[], int, int, int &);

int main()
{
    const int ARRAY_SIZE = 20;
    int numbers[ARRAY_SIZE] = {6, 7, 3, 100, 55,
                               34, 14, 78, 19, 80,
                               76, 2, 3, 1, 67, 
                               89, 99, 10, 97, 60};

    cout << "Unsorted:\n---------------" << endl;
    for (auto element : numbers) // C++11
        cout << element << ", ";
    cout << endl;

    selectionSort(numbers, ARRAY_SIZE);

    cout << "Sorted:\n---------------" << endl;
    for (auto element : numbers) // C++11
        cout << element << ", ";
    cout << endl;


    int search_value;
    cout << "\nEnter a value: ";
    cin >> search_value;

    int number_of_comparisions = 0;
    int results = linearSearch(numbers, ARRAY_SIZE, search_value, number_of_comparisions);

    cout << endl;
    if (results != -1)
    {
        cout << search_value << " was found at position " << results << '.' << endl
             << "Number of comparisons = " << number_of_comparisions << endl;
    }
    else
    {
        cout << search_value << " was NOT found. " << endl
             << "Number of comparisons = " << number_of_comparisions << endl;
    }

    number_of_comparisions = 0;
    results = binarySearch(numbers, ARRAY_SIZE, search_value, number_of_comparisions);

    cout << endl;
    if (results != -1)
    {
        cout << search_value << " was found at position " << results << '.' << endl
             << "Number of comparisons = " << number_of_comparisions << endl;
    }
    else
    {
        cout << search_value << " was NOT found. " << endl
             << "Number of comparisons = " << number_of_comparisions << endl;
    }

    return 0;
}

void selectionSort(int array[], int ARRAY_SIZE)
{
    int min_index,
        min_value;

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

int linearSearch(int array[], int array_size, int search_value, int &number_of_comparisons)
{
    int index = 0,
        position = -1;

    bool found = false;

    while (index < array_size && !found)
    {
        if (array[index] == search_value)
        {
            found = true;
            position = index;
        }

        number_of_comparisons++;
        index++;
    }
    return position;
}

int binarySearch(int array[], int array_size, int search_value, int &number_of_comparisons)
{
    int first = 0,
        middle,
        last = array_size - 1,
        position = -1;
    bool found = false;

    while (!found && first <= last)
    {
        middle = (first + last) / 2;    // (0 + 19) / 2 = 9

        if (array[middle] == search_value)      // Middle
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > search_value)  // Lower half
            last = middle - 1; // 8
        else                                    // Upper half
            first = middle + 1;
        
        number_of_comparisons++;
    }
    
    return position;
}
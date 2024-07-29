#include <iostream>
using namespace std;

// Function prototypes
// void arrSelectionSort(int *[], int);
void arrSelectionSort(int *, int);
void showArray(const int [], int);
// void showArrPtr(int *[], int);
void showArrPtr(int *, int);

int main()
{
    // const int NUM_DONATIONS = 15;   // Number of donations
    int number_of_donations;

    cout << "Enter number of donations: ";
    cin >> number_of_donations;

    // An array containing the donation amounts.
    // int donations[NUM_DONATIONS] = { 5, 100, 5, 25, 10,
    //                                  5, 25, 5, 5, 100, 
    //                                  10, 15, 10, 5, 10 };
    int donations[number_of_donations];
    
    cout << "Enter donation amounts: " << endl;
    for (int i = 0; i < number_of_donations; i++)
    {
        cout << "Donations #" << (i + 1) << " = ";
        cin >> *(donations + i); // donations[i]
    }
    
    // An array of pointers to int.
    // int *arrPtr[NUM_DONATIONS] = { nullptr, nullptr, nullptr, nullptr, nullptr,
    //                                nullptr, nullptr, nullptr, nullptr, nullptr,
    //                                nullptr, nullptr, nullptr, nullptr, nullptr };
    int *arrPtr = new int[number_of_donations];
    
    // Each element of arrPtr is a pointer to int. Make each
    // element point to an element in the donation array.
    for (int count = 0; count < number_of_donations; count++)
    {
        // arrPtr[count] = &donations[count];
        *(arrPtr + count) = donations[count];
    }
        
    // Sort the elements of the array of pointers.
    arrSelectionSort(arrPtr, number_of_donations);

    // Display the donations using the array of pointers. This
    // will display them in sorted order.
    cout << "The donations, sorted in ascending order are: \n";
    showArrPtr(arrPtr, number_of_donations);

    delete [] arrPtr;
    arrPtr = nullptr; //0x0
    
    // Display the donstions in their original order.
    cout << "The donations, in their original order are: \n";
    showArray(donations, number_of_donations);
    
    return 0;
}

/****************************************************************
 * Definition of function arrSelectionSort.                     *
 * This function performs an ascending order selection sort on  *
 * arr, which is an array of pointers. Each element of array    *
 * points to an element of a second array. After the sort,      *
 * arr will point to the elements of the second array in        *
 * ascending order.                                             *
 ****************************************************************/

void arrSelectionSort(int *arr, int size)
{
    int startScan, minIndex;
    // int *minElem;
    int minElem;
    
    for ( startScan = 0; startScan < (size - 1); startScan++)
    {
        minIndex = startScan;
        minElem = arr[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            // if (*(arr[index]) < *minElem)
            if (*(arr + index ) < minElem)
            {
                minElem = arr[index];
                minIndex = index;
            }
        }
        // arr[minIndex] = arr[startScan];
        // arr[startScan] = minElem;  
        swap(*(arr + minIndex), *(arr + startScan));
    }
}
void swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
}
/************************************************************
 * Definition of function showArray.                        *
 * This function displays the contents of arr.  size is the *
 * number of elements.                                      *
 ************************************************************/

void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

//***************************************************************
// Definition of function showArrPtr.                           *
// This function displays the contents of the array pointed to  *
// by arr. size is the number of elements.                      *
//***************************************************************

void showArrPtr(int *arr, int size)
{
    for (int count = 0; count < size; count++)
        // cout << *(arr[count]) << " ";
        cout << *(arr + count) << " ";
    cout << endl;
}
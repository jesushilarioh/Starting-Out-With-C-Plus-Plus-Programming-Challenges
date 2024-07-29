// program 9-19.cpp
#include <iostream>
using namespace std;

void arrSelectionSort(int *[], int);
void showArray(const int [], int);
void showArrPtr(int *[], int);

int main()
{
    const int NUM_DONATIONS = 15; 

    int donations[NUM_DONATIONS] = { 5, 100, 5, 25, 10,
                                     5, 25, 5, 5, 100, 
                                     10, 15, 10, 5, 10 };
    
    int *arrPtr[NUM_DONATIONS] = { nullptr, nullptr, nullptr, nullptr, nullptr,
                                   nullptr, nullptr, nullptr, nullptr, nullptr,
                                   nullptr, nullptr, nullptr, nullptr, nullptr };
    
    for (int count = 0; count < NUM_DONATIONS; count++)
        arrPtr[count] = &donations[count];
    
    arrSelectionSort(arrPtr, NUM_DONATIONS);

    cout << "The donations, sorted in decending order are: \n";
    showArrPtr(arrPtr, NUM_DONATIONS);

    cout << "The donations, in their original order are: \n";
    showArray(donations, NUM_DONATIONS);
    return 0;
}

void arrSelectionSort(int *arr[], int size)
{
    int startScan, maxIndex;
    int *maxElem;
    
    for ( startScan = 0; startScan < (size - 1); startScan++)
    {
        maxIndex = startScan;
        maxElem = arr[startScan];
        for (int index = startScan + 1; index < size; index++)
        {
            if (*(arr[index]) > *maxElem)
            {
                maxElem = arr[index];
                maxIndex = index;
            }
        }
        arr[maxIndex] = arr[startScan];
        arr[startScan] = maxElem;  
    }
}

void showArray(const int arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << arr[count] << " ";
    cout << endl;
}

void showArrPtr(int *arr[], int size)
{
    for (int count = 0; count < size; count++)
        cout << *(arr[count]) << " ";
    cout << endl;
}
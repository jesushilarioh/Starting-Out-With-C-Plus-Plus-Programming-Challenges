/**
 * 
 * 12. Element Shifter
 * 
 * Write a function that accepts an int array 
 * and the array’s size as arguments. The function 
 * should create a new array that is one element 
 * larger than the argument array. The first element 
 * of the new array should be set to 0. Element 0 of 
 * the argument array should be copied to element 1 
 * of the new array, element 1 of the argument array 
 * should be copied to element 2 of the new array, and 
 * so forth. The function should return a pointer to 
 * the new array.
 * 
 */ 
#include <iostream>
using namespace std;

int *createOneNewElement(int *, const int);
void displayArray(int *, const int);

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = { 2, 4, 6, 8, 10 };

    int *oneElementAdded = createOneNewElement(numbers, SIZE);

    displayArray(numbers, SIZE);
    cout << endl;
    displayArray(oneElementAdded, (SIZE + 1));
    cout << endl;

    delete [] oneElementAdded;
    oneElementAdded = nullptr; // 0x0

    return 0;
}
int *createOneNewElement(int *array, const int SIZE)
{
    const int NEW_SIZE = SIZE + 1;
    int *newArray = new int[NEW_SIZE];

    for (int i = 0; i < NEW_SIZE; i++)
    {
        if (i == 0)
            *(newArray + i) = 0;
        else
            *(newArray + i) = array[i - 1];
    }

    return newArray;
}

void displayArray(int *array, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " "; // array[i]
    
}

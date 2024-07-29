#include <iostream>
using namespace std;

int *reverseArray(int [], const int);
void displayArray(int *, const int);

int main()
{
    const int ARRAY_SIZE = 10;
    int numbers[ARRAY_SIZE] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 20 };

    int *numbers_reversed = reverseArray(numbers, ARRAY_SIZE);

    cout << endl;
    displayArray(numbers, ARRAY_SIZE);
    cout << endl;
    displayArray(numbers_reversed, ARRAY_SIZE);

    delete [] numbers_reversed;
    numbers_reversed = nullptr; // 0x0

    return 0;
}
int *reverseArray(int array[], const int SIZE)
{
    int *newArray = new int[SIZE];

    int j = (SIZE - 1);

    for (int i = 0; i < SIZE; i++, j--)
        *(newArray + i) = array[j]; 

    return newArray;
}
void displayArray(int *array, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " ";
}
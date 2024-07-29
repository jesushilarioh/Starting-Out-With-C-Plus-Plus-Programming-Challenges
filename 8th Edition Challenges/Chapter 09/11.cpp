#include <iostream>
using namespace std;

int *doubleArraySize(int [], const int);
void displayArray(int *, const int);

int main()
{
    const int SIZE = 5;
    int numbers[SIZE] = { 2, 4, 6, 8, 10 };

    int *numbers_doubled = doubleArraySize(numbers, SIZE);

    displayArray(numbers, SIZE);
    cout << endl;
    displayArray(numbers_doubled, (SIZE * 2));
    cout << endl << endl;

    delete [] numbers_doubled;
    numbers_doubled = nullptr; // 0x0

    return 0;
}
int *doubleArraySize(int array[], const int SIZE)
{
    const int NEW_SIZE = SIZE * 2;
    int *newArray = new int[NEW_SIZE];

    for (int i = 0; i < NEW_SIZE; i++)
    {
        if (i >= SIZE)
            *(newArray + i) = 0;
        else
            *(newArray + i) = array[i];
    }

    return newArray;
}
void displayArray(int *array, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
        cout << *(array + i) << " "; // array[i]
}
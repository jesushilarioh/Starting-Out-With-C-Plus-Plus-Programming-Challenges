#include <iostream>
using namespace std;

int *dynAllocateArray(int);

int main()
{
    const int ARRAY_SIZE = 5;
    int *numbers = dynAllocateArray(ARRAY_SIZE);

    cout << "Enter #s: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "#" << (i + 1) << ": ";
        cin >> *(numbers + i); // numbers[i]
    }

    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << *(numbers + i) << endl;
    

    delete [] numbers;
    numbers = nullptr;

    return 0;
}

int *dynAllocateArray(int SIZE)
{
    return new int[SIZE];
}
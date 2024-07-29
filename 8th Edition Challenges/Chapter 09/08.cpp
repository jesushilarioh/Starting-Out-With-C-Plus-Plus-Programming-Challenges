#include <iostream>
using namespace std;

int findMode(int [], const int); 

int main()
{
    const int SIZE = 10;
    int numbers[SIZE] = { 1, 2, 3, 4, 5, 7, 7, 8 ,7, 10 };

    int mode = findMode(numbers, SIZE);

    cout << "\nMode = " << mode << endl;

    return 0;
}
int findMode(int array[], const int SIZE)
{
    int maxValue = 0,
        maxCount = 0,
        i, j;
    
    for (i = 0; i < SIZE; i++)
    {
        int count = 0;

        for (j = 0; j < SIZE; j++)
        {
            if (*(array + j) == *(array + i)) // array[j] == array[i]
                count++;
        }

        if (count > maxCount)
        {
            maxCount = count;
            maxValue = *(array + i); // array[i]
        }
        else if (maxCount == 1)
            maxValue = -1;
    }

    return maxValue;
}

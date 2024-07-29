#include <iostream>
using namespace std;

void greaterNumbers(const int[], int, int);

int main()
{   
    const int ARRAY_SIZE = 30;
    int numbers_array[ARRAY_SIZE] = {1, 2, 3, 4,  5, 
                                     6, 7, 8, 9, 10,
                                     11, 12, 13, 14, 15, 
                                     16, 17, 18, 19, 20,
                                     21, 22, 23, 24, 25, 
                                     26, 27, 28, 29, 30};
    int n = 20;

    cout << "All numbers greater that " << n << " are: ";
    greaterNumbers(numbers_array, ARRAY_SIZE, n);
    cout << endl;

    return 0;
} // END int main()

void greaterNumbers(const int array[], int ARRAY_SIZE, int n)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if (array[i] > n)
        {
            if(i == ARRAY_SIZE - 1)
                cout << array[i];
            else
                cout << array[i] << ", ";
            
        }

    }
    
}
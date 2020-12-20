#include <iostream>
using namespace std;

double findMedian(int [], const int);

int main()
{
    const int SIZE = 10;
    int numbers[SIZE] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    double median = findMedian(numbers, SIZE);

    cout << "Median = " << median << endl;

    return 0;
}
double findMedian(int array[], const int SIZE)
{
    double median = 0.0;

    if (SIZE % 2 != 0)
    {
        median = *(array + (SIZE / 2));
        // median = array[SIZE / 2];
    }
    else
        median = (*(array + ((SIZE - 1) / 2)) + *(array + (SIZE / 2))) / 2.0;

    return median;
}
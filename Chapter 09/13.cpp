#include <iostream>
using namespace std;

int inputValidation(int);
void getMovieInfo(int *, const int);
int getAverage(int *, const int);
int getMedian(int *, const int);
int getMode(int *, const int);

int main()
{
    cout << "How many students surveyed? ";
    int number_of_students = inputValidation(number_of_students);
    int *movieInfo = new int[number_of_students];

    getMovieInfo(movieInfo, number_of_students);

    int average = getAverage(movieInfo, number_of_students);
    int median = getMedian(movieInfo, number_of_students);
    int mode = getMode(movieInfo, number_of_students);

    cout << "Average = " << average << endl;
    cout << "Median = " << median << endl;

    cout << "Mode = ";
    if (mode != -1)
        cout << mode;
    else
        cout << "no mode";
    cout << endl;

    delete [] movieInfo;
    movieInfo = nullptr; // 0x0

    return 0;
}
int inputValidation(int number)
{
    while(!(cin >> number) || number < 0)
    {
        cout << "Error. Positive number only." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}

void getMovieInfo(int *movieInfo, const int number_of_students)
{
    cout << "Enter number of movies watched: " << endl;
    for (int i = 0; i < number_of_students; i++)
    {
        cout << "Student #" << (i + 1) << ": ";
        *(movieInfo + i) = inputValidation(*(movieInfo + i));
        // movieInfo[i] = inputValidate(movieInfo[i]);
    }
}

int getAverage(int *array, const int SIZE)
{
    int sum = 0;

    for (int i = 0; i < SIZE; i++)
        sum += *(array + i); // array[i]

    return sum/SIZE;
}
int getMedian(int *array, const int SIZE)
{
    int median = 0;

    if (SIZE % 2 != 0)
        median = *(array + (SIZE / 2)); // array[SIZE / 2]
    else
        median = (*(array + ((SIZE - 1) / 2)) + *(array + (SIZE / 2))) / 2;
    
    return median;
}
int getMode(int *array, const int SIZE)
{
    int mode, maxCount = 0, i, j;

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
            mode = *(array + i);
        }
        else if (maxCount == 1)
        {
            mode = -1;
        }
    }

    return mode;
}
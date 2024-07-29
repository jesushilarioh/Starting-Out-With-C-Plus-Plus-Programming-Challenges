#include <iostream>
using namespace std;

void getArrayElements(double *, string *, const int);
void displayArray(double *, string *, const int);
void selectionSort(double *, string *, const int);
double averageArrayElements(double *, const int);
void swap(double *, double *);
void swap(string *, string *);
int inputValidate(int);
double inputValidate(double);

int main()
{
    int number_of_test_scores;

    cout << "Enter the number of test scores: ";
    number_of_test_scores = inputValidate(number_of_test_scores);

    double *test_scores = new double[number_of_test_scores];
    string *student_names = new string[number_of_test_scores];

    cout << "Enter each test score: " << endl;
    getArrayElements(test_scores, student_names, number_of_test_scores);
    
    selectionSort(test_scores, student_names, number_of_test_scores);

    double average = averageArrayElements(test_scores, number_of_test_scores);

    cout << "\nSorted test scores:" << endl;
    displayArray(test_scores, student_names, number_of_test_scores);

    delete [] test_scores;
    test_scores = nullptr; // 0x0
    delete [] student_names;
    student_names = nullptr; // 0x0

    cout << "\nAverage = " << average << endl;

    return 0;
}
int inputValidate(int number)
{
    while (!(cin >> number))
    {
        cout << "Error. Enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}
double inputValidate(double number)
{
    while (!(cin >> number))
    {
        cout << "Error. Enter a number: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
}
void getArrayElements(double *array, string *student_names, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Student #" << (i + 1) << " name      : ";
        cin >> *(student_names + i); // student_names[i];
        // cin >> array[i];
        // cin >> *(array + i);
        cout << "Student #" << (i + 1) << " test score: ";
        *(array + i) = inputValidate(*(array + i));
    }
    
}
void selectionSort(double *array, string *student_names, const int SIZE)
{
    int start_index,
        minIndex;
    double min_test_score;
    string min_test_score_name;
    
    for (start_index = 0; start_index < (SIZE - 1); start_index++)
    {
        minIndex = start_index;
        min_test_score = *(array + start_index);
        min_test_score_name = *(student_names + start_index); // student_names[start_index];

        for (int index = start_index + 1; index < SIZE; index++)
        {
            if (*(array + index) < min_test_score)
            {
                min_test_score = *(array + index);
                min_test_score_name = *(student_names + index);
                minIndex = index;
            }
            
        }
        swap(*(array + minIndex), *(array + start_index));
        swap(*(student_names + minIndex), *(student_names + start_index));
    }
}
void swap(string *a, string *b)
{
    string *temp = a;
    a = b;
    b = temp;
}
void swap(double *a, double *b)
{
    double *temp = a;
    a = b;
    b = temp;
}
double averageArrayElements(double *array, const int SIZE)
{
    double sum = 0;

    for (int i = 0; i < SIZE; i++)
        sum += *(array + i);
    
    return sum / SIZE;
}
void displayArray(double *array, string *student_names, const int SIZE)
{
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Student #" << (i + 1) << " name      : " << *(student_names + i) << endl;
        cout << "Student #" << (i + 1) << " test score: " << *(array + i) << endl;
    }
        
    
}
/**
 * 5. Rainfall Statistics Modification
 * 
 * Modify the Rainfall Statistics program you wrote for 
 * Programming Challenge 2 of Chapter 7. The program 
 * should display a list of months, sorted in order of 
 * rainfall, from highest to lowest.
 * 
 **/
#include <iostream>
#include <vector>
using namespace std;

// Global constants
const int ARRAY_SIZE = 12;

// Function Prototypes
double inputValidate(double);
void getValues(double []);
double average(double);
double calculateTotal(double []);
void findHighestMonths(double [], vector<int> &);
void findLowestMonths(double [], vector<int> &);
void display(double, double, vector<int>, vector<int>);
void swap(double &, double &);
void swap(int &, int &);
void selectionSort(double [], int [], const int);


int main()
{
    double rainfall[ARRAY_SIZE];
    int months[ARRAY_SIZE] = { 1, 2, 3, 4,  5,  6,
                               7, 8, 9, 10, 11, 12 };
    string month_names[ARRAY_SIZE] = { "January", "February", "March", 
                                       "April"  , "May"     , "June",
                                       "July"   , "August"  , "September", 
                                       "October", "November", "December" };

    cout << "Enter average rainfall for each month: " << endl;
    getValues(rainfall);

    double total_rainfall = calculateTotal(rainfall);
    double avarage_rainfall = average(total_rainfall);

    vector<int>highest_months;
    findHighestMonths(rainfall, highest_months);

    vector<int>lowest_months;
    findLowestMonths(rainfall, lowest_months);

    selectionSort(rainfall, months, ARRAY_SIZE);

    cout << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << month_names[months[i] - 1] << "(" 
             << months[i] << ")" << ": " 
             << rainfall[i] 
             << endl;
    cout << endl;
    
    display(total_rainfall, avarage_rainfall, highest_months, lowest_months);

    return 0;
}

/********************************************************
 * function definitions                                 *
 ********************************************************/
double inputValidate(double user_number)
{
    while(!(cin >> user_number) || user_number < 0)
    {
        cout << "Error: please enter a positive number."
             << "Try again: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return user_number;
}

void getValues(double array[])
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << (i + 1)
             << ": ";
        array[i] = inputValidate(array[i]);
    }
    
}

double calculateTotal(double array[])
{
    double total = 0;

    for (int i = 0; i < ARRAY_SIZE; i++)
        total += array[i];

    return total;
}

double average(double sum)
{
    return sum / ARRAY_SIZE;
}

void findHighestMonths(double array[], vector<int> &vector_array)
{
    double max = array[0];
    vector_array.push_back(0);

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if(array[i] > max)
        {
            max = array[i];  
            vector_array.clear();
            vector_array.push_back(i);        
        }
        else if (array[i] == max)
        {
            max = array[i];
            vector_array.push_back(i);
        }
        
    }

}

void findLowestMonths(double array[], vector<int> &vector_array)
{
    double min = array[0];
    vector_array.push_back(0);

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if(array[i] < min)
        {
            min = array[i];
            vector_array.clear();
            vector_array.push_back(i);
        }
        else if (array[i] == min)
        {
            min = array[i];
            vector_array.push_back(i);
        }
        
            
    }
    
}

void display(double total, double average, vector<int> highest_months, vector<int> lowest_months)
{
    const string MONTHS[] = {"January", "February", "March",
                             "April"  , "May"     , "June",
                             "July"   , "August"  , "September",
                             "October", "November", "December"};

    cout << "\nTotal rainfall for the year   = "
         << total
         << endl;
    
    cout << "Average monthly rainfall      = "
         << average
         << endl;
    
    cout << "Month with highest amount     = ";

    for (int i = 0; i < highest_months.size(); i++)
    {
        if(i == highest_months.size() - 1)
            cout << MONTHS[highest_months[i]];
        else
            cout << MONTHS[highest_months[i]] << ", ";
        
    }

    cout << endl;
    
    cout << "Month with lowest amount      = ";

    for (int i = 0; i < lowest_months.size(); i++)
    {
        if(i == lowest_months.size() - 1)
            cout << MONTHS[lowest_months[i]];
        else
            cout << MONTHS[lowest_months[i]] << ", ";
    }
            
    cout << endl;
}

void selectionSort(double rainfall[], int months[], const int array_size)
{
    int max_index, 
        max_value,
        temporary_month;

    for (int start_index = 0; start_index < (array_size - 1); start_index++)
    {
        max_index = start_index;
        max_value = rainfall[start_index];
        temporary_month = months[start_index];

        for (int index = start_index + 1; index < array_size; index++)
        {
            if (rainfall[index] > max_value)
            {
                max_value = rainfall[index];
                temporary_month = months[index];
                max_index = index;
            }
        }
        swap(rainfall[max_index], rainfall[start_index]);
        swap(months[max_index], months[start_index]);
    }
}

void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

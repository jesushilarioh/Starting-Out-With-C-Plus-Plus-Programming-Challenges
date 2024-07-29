#include <iostream>
#include <vector>
using namespace std;

// Global constant variable
const int ARRAY_SIZE = 12;

// Function Prototypes
double inputValidate(double);
void getValues(double []);
double average(double);
double calculateTotal(double []);
void findHighestMonths(double [], vector<int> &);
void findLowestMonths(double [], vector<int> &);
void display(double, double, vector<int>, vector<int>);

int main()
{
    double rainfall[ARRAY_SIZE];

    cout << "Enter average rainfall for each month: " << endl;
    getValues(rainfall);

    double total_rainfall = calculateTotal(rainfall);
    double avarage_rainfall = average(total_rainfall);

    vector<int>highest_months;
    findHighestMonths(rainfall, highest_months);

    vector<int>lowest_months;
    findLowestMonths(rainfall, lowest_months);

    display(total_rainfall, avarage_rainfall, highest_months, lowest_months);

    return 0;
} // END int main()

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

void display(double total, 
             double average, 
             vector<int> highest_months, 
             vector<int> lowest_months)
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
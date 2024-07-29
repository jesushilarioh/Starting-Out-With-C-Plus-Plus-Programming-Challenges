/**
 * 
 * 12. Sorted List of 1994 Gas Prices
 * 
 * In the student sample programs for this book, you will find a test file names 1994_
 * Weekly_Gas_Averages.txt. The file contains the average gas price for each week in the
 * year 1994. (There are 52 lines in the file. Line 1 contians the average price for week 1; 
 * line 2 contains the average price for week 2, and so forth.) Write a program that reads
 * the gas prices from the file, and calculates the average gas price for each month. (To get 
 * the average price for a given month, calculate the average of the average weekly prices 
 * for that month.) Then, the program should create another file that lists the names of 
 * the month_numbers, along with each month's average gas price, sorted from the lowest to highest.
 * 
 **/
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

const int NUMBER_OF_WEEKS = 52;
const int NUMBER_OF_MONTHS = 12;

void getContentsFromFile(vector<int> &, vector<double> &, string);
void displayVector(vector<double>);
void displayVector(vector<int>);
void displayVector(vector<string>);
void displayParallelVectors(vector<double>, vector<string>, vector<int>);
void calculateAverageMonthlyPrice(vector<int>, vector<double>, vector<double> &);
void writeToAFile(vector<string>, vector<double>, string, vector<int>);
void selectionSort(vector<double> &, vector<string> &, vector<int> &);

int main()
{
    // 1. Write a program that reads the gas prices from the file,
    vector<double> gas_prices;
    vector<int> month_numbers;
    vector<string> month_names = {"January", "February", "March", "April", 
                                  "May", "June", "July", "August", 
                                  "September", "October", "November", "December"};

    vector<double> average_price_per_month;
    
    getContentsFromFile(month_numbers, gas_prices, "1994_Weekly_Gas_Averages.txt");

    // 2. and calculates the average gas price for each month.
    // 3. (To get the average price for a given month, calculate the average of the average weekly prices for that month.)
    calculateAverageMonthlyPrice(month_numbers, gas_prices, average_price_per_month);
    
    month_numbers.clear();
    for (int i = 0; i < NUMBER_OF_MONTHS; i++)
        month_numbers.push_back(i + 1);

    displayParallelVectors(average_price_per_month, month_names, month_numbers);
    
    selectionSort(average_price_per_month, month_names, month_numbers);

    displayParallelVectors(average_price_per_month, month_names, month_numbers);

    writeToAFile(month_names, 
                 average_price_per_month, 
                 "1994_Gas_Averages_Lowest_to_Highest.txt", 
                 month_numbers);

    // 4. Then, the program should create another file that lists the names of the month, along with each month's 
    //  average gas price, sorted from the lowest to highest.
    return 0;
}

void displayVector(vector<double> vector_array)
{
    cout << endl;
    for (int i = 0; i < vector_array.size(); i++)
        cout << (i + 1) << ": " << vector_array[i] << endl;
    cout << endl;
}

void displayVector(vector<int> vector_array)
{
    cout << endl;
    for (int i = 0; i < vector_array.size(); i++)
        cout << (i + 1) << ": " << vector_array[i] << endl;
    cout << endl;
}

void displayVector(vector<string> vector_array)
{
    cout << endl;
    for (int i = 0; i < vector_array.size(); i++)
        cout << (i + 1) << ": " << vector_array[i] << endl;
    cout << endl;
}

void displayParallelVectors(vector<double> average_price_per_month, 
                            vector<string> month_names, 
                            vector<int> month_numbers)
{
    cout << setprecision(3) << fixed << endl;
    for (int i = 0; i < average_price_per_month.size(); i++)
    {
        cout << average_price_per_month[i] << ": (" 
             << month_numbers[i] << ") -> " 
             << month_names[i] 
             << endl;
    }
    cout << endl;
}

void getContentsFromFile(vector<int> &vector_array_1, 
                         vector<double> &vector_array_2, 
                         string file_name)
{
    ifstream inputFile;

    inputFile.open(file_name);

    if (inputFile)
    {
        double element;

        for (int i = 0; i < NUMBER_OF_WEEKS; i++)
        {
            inputFile >> element;
            vector_array_1.push_back(element);

            inputFile >> element;
            vector_array_2.push_back(element);
        }        
    }
    else
    {
        cout << "Invalid file." << endl;
        exit(EXIT_FAILURE);
    }
        
    
}

void calculateAverageMonthlyPrice(vector<int> month_numbers, 
                                  vector<double> gas_prices, 
                                  vector<double> &average_price_per_month)
{
    double average,
           sum,
           denominator;

    for (int month = 0; month < NUMBER_OF_MONTHS; month++)
    {
        sum = 0;
        denominator = 0;

        for (int week = 0; week < NUMBER_OF_WEEKS; week++)
        {
            if (month_numbers[week] == (month + 1))
            {
                denominator++;
                sum += gas_prices[week];
            }
        }
        average_price_per_month.push_back(sum / denominator);
    }
}

void writeToAFile(vector<string> month_names, 
                  vector<double> average_price_per_month, 
                  string file_name, 
                  vector<int> month_numbers)
{
    ofstream outputFile;

    outputFile.open(file_name);

    outputFile << setprecision(3) << fixed;
    
    for (int i = 0; i < average_price_per_month.size(); i++)
    {
        outputFile << average_price_per_month[i] << ": (" 
                   << month_numbers[i] << ") -> " 
                   << month_names[i] 
                   << endl;
    }
        
    outputFile.close();
}

void selectionSort(vector<double> &average_price_per_month, 
                   vector<string> &month_names, 
                   vector<int> &month_numbers)
{
    int min_index;
    double min_price;
    string temporary_month_name;
    int temporary_month_number;

    for (int start_index = 0; 
         start_index < (average_price_per_month.size() - 1); 
         start_index++)
    {
        min_index = start_index;
        min_price = average_price_per_month[start_index];
        temporary_month_name = month_names[start_index];
        temporary_month_number = month_numbers[start_index];

        for (int index = start_index + 1;
             index < average_price_per_month.size();
             index++)
        {
            if (average_price_per_month[index] < min_price)
            {
                min_price = average_price_per_month[index];
                temporary_month_name = month_names[index];
                temporary_month_number = month_numbers[index];
                min_index = index;
            }
        }
        swap(average_price_per_month[min_index], average_price_per_month[start_index]);
        swap(month_names[min_index], month_names[start_index]);
        swap(month_numbers[min_index], month_numbers[start_index]);
    }
}

void swap(double &a, double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

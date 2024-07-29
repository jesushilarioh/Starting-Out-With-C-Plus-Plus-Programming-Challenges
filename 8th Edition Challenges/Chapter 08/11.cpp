/**
 * 
 * 11. Using Files—String Selection Sort Modification
 * 
 * Modify the program you wrote for Programming Challenge 6 
 * so it reads in 20 strings from a file. The data can be 
 * found in the names.txt file.
 * 
 **/
#include <iostream> 
#include <string> 
#include <fstream>

using namespace std;

void selectionSort(string[], int);
void swap(string &, string &);
void displayArray(string[], int, string);
void readFileIntoArray(string[], string, int);

int main() {
    const int NUM_NAMES = 20;
    string names[NUM_NAMES];

    readFileIntoArray(names, "names.txt", NUM_NAMES);

    // Insert your code to complete this program
    displayArray(names, NUM_NAMES, "UNSORTED: \n--------------------");

    selectionSort(names, NUM_NAMES);

    displayArray(names, NUM_NAMES, "SORTED: \n-------------------- ");

    return 0; 
}

void readFileIntoArray(string array[], string file_name, int ARRAY_SIZE)
{
    // 1. open
    ifstream inputFile;

    inputFile.open(file_name);

    if (inputFile.fail())
    {
        cout << "Invalid file." << endl;
    }
    else
    {
        // 2. read  
        int index = 0;

        while(getline(inputFile, array[index]) && index != ARRAY_SIZE)
            index++;

        // 3. close
        inputFile.close();
    }
    
    
}

void selectionSort(string array[], int ARRAY_SIZE)
{
    int min_index;
    string min_value;

    for (int start_index = 0; start_index < (ARRAY_SIZE - 1); start_index++)
    {
        min_index = start_index;
        min_value = array[start_index];

        for (int index = start_index + 1; index < ARRAY_SIZE; index++)
        {
            if (array[index] < min_value)
            {
                min_value = array[index];
                min_index = index;
            }
        }
        swap(array[min_index], array[start_index]);
    }
}

void swap(string &a, string &b)
{
    string temp = a;
    a = b;
    b = temp;
}

void displayArray(string array[], int ARRAY_SIZE, string prompt)
{
    cout << prompt << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << array[i] << endl;
    cout << endl;
}

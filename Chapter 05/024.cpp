#include <iostream>
#include <fstream>

using namespace std;
int main() 
{
    ifstream inputFile;

    double sum = 0,
           total = 0,
           average,
           number;

    // 1. Open file
    inputFile.open("Random.txt");

    if (inputFile.fail())
    {
        cout << "Error opening the file." << endl;
    }
    else 
    {
        // Valid
        // 2. Process file (eof = end of file)
        while(inputFile >> number)
        {
            sum += number;
            total++;
            // cout << "Number : " << number << endl;
        }
        average = sum / total;

        // 3. Close file
        inputFile.close();

        cout << "Sum  : " << sum << endl;
        cout << "Total: " << total << endl;
        cout << "Average: " << average << endl; 

    }
    
    cout << "File closed. Program Ended." << endl;

    return 0;
}
#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
    vector<double> numbers;
    ifstream inputFile;

    string user_file_name;
    cout << "What is the file name? ";
    cin >> user_file_name;

    inputFile.open(user_file_name);

    if (inputFile)
    {
        // cout << "Valid file." << endl;

        int file_number;

        while(inputFile >> file_number)
            numbers.push_back(file_number);

        inputFile.close();
    }
    else
    {
        cout << "Invalid file." << endl;
        exit(EXIT_SUCCESS);
    }
    
    double lowest_number = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
        if (numbers[i] <= lowest_number)
            lowest_number = numbers[i];
    cout << "Lowest Number = " << lowest_number << endl;

    double highest_number = numbers[0];
    for (int i = 1; i < numbers.size(); i++)
        if (numbers[i] >= highest_number)
            highest_number = numbers[i];
    cout << "Highest Number = " << highest_number << endl;


    double total = 0;
    for (int i = 0; i < numbers.size(); i++)
        total += numbers[i];
    cout << "Total = " << total << endl;

    double average = total / numbers.size();
    cout << "Average = " << average << endl;

    return 0;
}
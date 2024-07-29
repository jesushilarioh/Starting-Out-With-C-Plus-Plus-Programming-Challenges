#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;

    string student, 
           first, 
           last;
           
    int num_of_students;
    
    // 1. Open the file
    inputFile.open("LineUp.txt");

    if (inputFile)
    {
        // 2. Process the file
        inputFile >> student;

        first = last = student;

        while (inputFile >> student)
        {
            if (student < first)
                first = student;

            if (student > last)
                last = student;
        }

            // 3. Close File
            inputFile.close(); 
    }
    else
    {
        cout << "Error opening file." << endl;
    }
    
    cout << "First student in line = " 
         << first << endl;

    cout << "Last student in line  = " 
         << last << endl << endl;
    
    return 0;
}
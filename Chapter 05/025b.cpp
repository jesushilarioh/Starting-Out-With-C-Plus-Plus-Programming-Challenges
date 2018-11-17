/********************************************************************
*
*	  025. Using Files—Student Line Up
*
*       Modify the Student Line Up program described in Programming 
*       Challenge 14 so that it gets the names from a file. Names 
*       should be read in until there is no more data to read. 
*       If you have downloaded this book’s source code from the 
*       companion Web site, you will find a file named LineUp.txt in 
*       the Chapter 05 folder. You can use this file to test the 
*       program.
*
* 	Jesus Hilario Hernandez
* 	November 16, 2018
*
********************************************************************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Variables
    ifstream inputFile; // declare input file stream object

    string student, 
           first, 
           last;

    int num_of_students = 0,
        student_num     = 1;


    // 1. Open file
    inputFile.open("LineUp.txt");

    // Check if file opens successfully
    if (inputFile.fail())
    {
        // Display error if file did not open
        cout << "Error opening the file." << endl;
    }
    else
    {
        // 2. Process file
        cout << "\nHere are the names of students in line: " << endl;
        cout << "-----------------------------------------" << endl;

        // Read all names in file until eof is reached
        while (inputFile >> student)
        {
            // Display student name
            cout << (student_num) << ". " << student << endl;

            // Set the first and last students
            if (student_num == 1)
                first = student;
            if (student_num > num_of_students)
                last = student;

            // Keep running total of number of names in file
            num_of_students++;
            student_num++;
        }

        cout << "-----------------------------------------" << endl;
        cout << "\nFirst student in line = " << first << endl;
        cout << "Last  student in line = " << last << endl;

        // Display number of students
        cout << "\nThere are " << num_of_students;
        cout << " students in line.\n" << endl;

        // 3. Close file
        inputFile.close();
    }

    // Terminate program
    return 0;
}
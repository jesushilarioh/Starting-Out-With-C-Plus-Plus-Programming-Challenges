/********************************************************************
*
*	  024. Using Files—Numeric Processing
*
*       If you have downloaded this book’s source code from the 
*       companion Web site, you will find a file named Random.txt 
*       in the Chapter 05 folder. (The companion Web site is at 
*       www.pearsonhighered.com/gaddis.) This file contains a long 
*       list of random numbers. Copy the file to your hard drive and 
*       then write a program that opens the file, reads all the numbers 
*       from the file, and calculates the following:
*
*       A) The number of numbers in the file
*       B) The sum of all the numbers in the file (a running total) 
*       C) The average of all the numbers in the file
*
*       The program should display the number of numbers found in the 
*       file, the sum of the numbers, and the average of the numbers.
*
* 	Jesus Hilario Hernandez
* 	November 16, 2018
*
********************************************************************/
#include <iostream>
#include <fstream>

using namespace std;
int main() 
{
    // Declare input file stream object.
    ifstream inputFile;

    // Variables
    double sum = 0,
           total = 0,
           average,
           number;

    // 1. Open file
    inputFile.open("Random.txt");

    // Check if file opens successfully
    if (inputFile.fail()) 
    {     
        // Display error if file did not open
        cout << "Error opening the file." << endl;
    } 
    else
    {
        // 2. Process file
        // read from "Random.txt" file until the eof is reached.
        while (inputFile >> number)
        {
            // Add each number in the file to the sum variable
            sum += number;
            // Keep a running total of the number of numbers in "Random.txt" file
            total++;
        }

        // Display the total number of numbers in "Random.txt" file
        cout << "There are " << total << " numbers in ";
        cout << "the Random.txt file" << endl;

        // Display the sum of all number in "Random.txt" file
        cout << "The sum of all numbers in Random.txt is " << sum << endl;
        
        // Find the average of all the numbers in the file "Random.txt"
        average = sum / total;

        // Display average
        cout << "The average of those numbers is " << average << endl;

        // 3. Close file
        inputFile.close();
    }
    
    // Terminate
    return 0;
}

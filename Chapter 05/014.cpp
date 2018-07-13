/********************************************************************
*
*       014. STUDENT LINE UP
*
*       A teacher has asked all her students to line up single file
*       according to their first name. For example, in one class Amy
*       will be at the front of the line and Yolanda will be at the
*       end. Write a program that prompts the user to enter the number of
*       students in the class, then loops to read that many names.
*       Once all the names have been read it reports which
*       student would be at the front of the line and which one
*       would be at the end of the line. You may assume that no two
*       students have the same name.
*
*       Input Validation: Do not accept a number less than 1 or
*                         greater than 25 for the number of
*                         students.
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
#include <string>
using namespace std;
int main()
{
    // Variables
    string student, first, last;
    int num_of_students, i = 1;

    // prompt the user to enter the number of students in the class,
    cout << "Enter the number of students: ";

    // Input Validation: Do not accept a number less than 1 or greater than 25
    while(!(cin >> num_of_students) || (num_of_students < 1 || num_of_students > 25))
    {
        cout << "ERROR: Enter a number between 1 and 25: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    cout << "Enter the name of student No. 1: ";
    cin >> student;

    first = last = student;

    if (student < first)
        first = student;
    if (student > last)
        last = student;

    for (int i = 1; i < num_of_students; i++)
    {
        cout << "Enter the name of student No. " << (i + 1) << ": ";
        cin >> student;

        if (student < first)
            first = student;
        if (student > last)
            last = student;
    }

    // Once all the names have been read it reports which student
    // would be at the front of the line and which one would be at the
    // end of the line.
    cout << "First student in line = " << first << endl;
    cout << "Last student in line  = " << last << endl;

    return 0;
}

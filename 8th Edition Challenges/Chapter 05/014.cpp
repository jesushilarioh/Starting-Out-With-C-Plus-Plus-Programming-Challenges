#include <iostream>
#include <string>

using namespace std;

int main()
{
    string student, 
           first, 
           last;
    int num_of_students;

    cout << "Enter the number of students: ";

    while (!(cin >> num_of_students) || 
        (num_of_students < 1 || num_of_students > 25))
        {
            cout << "ERROR: Enter a number between " 
             << "1 and 25: ";
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
        cout << "Enter the name of student No. " 
             << (i + 1) << ": ";
        cin >> student;

        if (student < first)
            first = student;

        if (student > last)
            last = student;
    }

    cout << "First student in line = " 
         << first << endl;

    cout << "Last student in line  = " 
         << last << endl;
    
    return 0;
}
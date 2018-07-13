/********************************************************************
*
*	05. MALE AND FEMALE PERCENTAGES
*
*       Write a program that asks the user for the number of males and
*       the number of females registered in a class. The program
*       should display the percentage of males and females in the class.
*
*       Hint: Suppose there are 8 males and 12 females in a class.
*       There are 20 students in the class. The percentage of males
*       can be calculated as 8 / 20 = 0.4, or 40%. The percentage
*       of females can be calculated as 12 / 20 = 0.06, or 60%.
*
* 	Jesus Hilario Hernandez
* 	January 6th 2017
*
********************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Variables
    int number_of_males,
        number_of_females,
        total_num_of_students;

    float percentage_of_males,
          percentage_of_females;

    // Ask user for number of males and females in the class.
    cout << endl;
    cout << "How many males have register for the class: ";
    cin >> number_of_males;
    cout << "How many females have registered: ";
    cin >> number_of_females;
    cout << endl;

    // Calculate the percentage of each with the class.
    total_num_of_students = number_of_males + number_of_females;
    percentage_of_males = (number_of_males / static_cast<float>(total_num_of_students)) * 100;
    percentage_of_females = (number_of_females / static_cast<float>(total_num_of_students)) * 100;

    // Display the percentage of male and females in the class.
    cout << setprecision(2);
    cout << "There are " << total_num_of_students << " in the class. " << endl;
    cout << "The percentage of males in the class is %" << percentage_of_males << '.' << endl;
    cout << "The percentage of females is %" << percentage_of_females << '.' << endl << endl;

    // Terminate Program
    return 0;
}

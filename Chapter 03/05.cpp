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
* 	July 14th 2018
*
********************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    // Variables
    const int HUNDRED = 100;

    int males,
        females,
        total;

    float per_males,
          per_females;

    // Ask user for number of males and females
    cout << endl;
    cout << "How many males in the class: ";
    cin >> males;
    cout << "How many females: ";
    cin >> females;
    cout << endl;

    // Calculate percentages
    total = males + females;

    per_males = (males / static_cast<float>(total)) * HUNDRED;

    per_females = (females / static_cast<float>(total)) * HUNDRED;

    // Display percentage
    cout << setprecision(1) << fixed;
    cout << "There are " << total << " students." << endl;
    cout << "The percentage of males is %" << per_males;
    cout << ",\nwhile, the percentage of females is %";
    cout << per_females << ".\n" << endl;

    // Terminate Program
    return 0;
}

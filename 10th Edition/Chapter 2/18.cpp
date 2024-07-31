/*
18. Energy Drink Consumption
A soft drink company recently surveyed 16,500 of its customers and found that approxi- mately 15 percent of those surveyed purchase one or more energy drinks per week. Of those customers who purchase energy drinks, approximately 58 percent of them prefer citrus-flavored energy drinks. Write a program that displays the following:

• The approximate number of customers in the survey who purchase one or more energy drinks per week.
• The approximate number of customers in the survey who prefer citrus-flavored energy drinks.

*/
#include <iostream>
using namespace std;

int main()
{
    const int NUM_SURVEYED = 16500;

    float group1 = 15, // one or more drinks
          group2 = 58, // citrus only

          group1Total = NUM_SURVEYED * (group1 / 100),
          group2Total = NUM_SURVEYED * (group2 / 100);

    cout << endl
         << "Group 1 = " << group1Total << " customers" << endl
         << "Group 2 = " << group2Total << " customers" << endl
         << endl;

    return 0;
}
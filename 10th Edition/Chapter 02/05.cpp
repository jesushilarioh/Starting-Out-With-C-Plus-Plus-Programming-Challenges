/*
5. Average of Values
To get the average of a series of values, you add the values up then divide the sum by the number of values. Write a program that stores the following values in five different variables: 28, 32, 37, 24, and 33. The program should first calculate the sum of these five variables and store the result in a separate variable named sum. Then, the program should divide the sum variable by 5 to get the average. Display the average on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    const int DIVISOR = 5;

    int number_1 = 28,
        number_2 = 32,
        number_3 = 37,
        number_4 = 24,
        number_5 = 36,

        sum = number_1 + 
              number_2 + 
              number_3 + 
              number_4 + 
              number_5,

        average = sum / DIVISOR;

    cout << endl
         << "The average is " << average
         << endl 
         << endl;

    return 0;
}
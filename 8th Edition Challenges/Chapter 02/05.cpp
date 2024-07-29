/********************************************************************
*
*	05. AVERAGE OF VALUES
*       To get the average of a series of values, you add the values
*       up and then divide the sum by the number of values. Write a
*       program that stores the following values in five different
*       variables: 28, 32, 37, 24, and 33. The program should first
*       calculate the sum of these five variables and store the result
*       in a separate variable name sum. Then, the program should divide
*       the sum variable by 5 to get the average. Display the average on
*       the screen.
*
* 	Jesus Hilario Hernandez
* 	December 18th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const int FIVE = 5;
    int a = 28,
        b = 32,
        c = 37,
        d = 24,
        e = 33,
        sum = a + b + c + d + e,
        average = sum / FIVE;

    cout << endl;
    cout << "The average is " << average;
    cout << endl << endl;
    return 0;
}
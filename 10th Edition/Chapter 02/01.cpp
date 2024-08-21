/*

1. Sum of Two Numbers
Write a program that stores the integers 
50 and 100 in variables, and stores the 
sum of these two in a variable named total.

*/
#include <iostream>
using namespace std;

int main()
{
    int number1 = 50,
        number2 = 100,
        total = number1 + number2;

    cout << endl
         << "number1 + number2 = " << total << endl
         << endl;

    return 0;
}
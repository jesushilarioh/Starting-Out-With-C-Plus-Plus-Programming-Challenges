/*
9. Cyborg Data Type Sizes
You have been given a job as a programmer on a Cyborg supercomputer. In order to accomplish some calculations, you need to know how many bytes the following data types use: char, int, float, and double. You do not have any technical documenta- tion, so you can’t look this information up. Write a C++ program that will determine the amount of memory used by these types and display the information on the screen.
*/
#include <iostream>
using namespace std;

int main()
{
    char letter;
    int number;
    float decimal;
    double another_decimal;

    cout << endl
         << "A char uses " << sizeof(letter) << " byte(s)." << endl
         << "An int uses " << sizeof(number) << " byte(s)." << endl
         << "A float uses " << sizeof(decimal) << " byte(s)." << endl
         << "A double uses " << sizeof(another_decimal) << " byte(s)." << endl
         << endl;

    return 0;
}
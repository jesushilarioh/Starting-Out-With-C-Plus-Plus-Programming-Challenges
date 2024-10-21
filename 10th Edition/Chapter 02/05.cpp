/*
5. Average of Values

video walk through: https://youtu.be/lVfbFS19xEM
video walk through: https://youtu.be/lVfbFS19xEM
video walk through: https://youtu.be/lVfbFS19xEM

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
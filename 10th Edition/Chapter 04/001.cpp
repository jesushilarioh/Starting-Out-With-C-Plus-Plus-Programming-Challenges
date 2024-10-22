
#include <iostream>
using namespace std;

int main()
{
    int num1, 
        num2;

    cout << "\nEnter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;

    int smallest = (num1 < num2) ? num1 : num2,
        largest = (num1 > num2) ? num1 : num2;

    cout << endl
         << "Num 1 = " << num1 << endl
         << "Num 2 = " << num2 << endl
         << "Smallest = " << smallest << endl
         << "Largest = " << largest << endl
         << endl;

    return 0;
}

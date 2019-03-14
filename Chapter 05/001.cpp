#include <iostream>
using namespace std;
int main()
{
    int user_number,
        total = 0;

    cout << "\nEnter a positive number: ";
    cin >> user_number;

    while (user_number < 0)
    {
        cout << "ERROR: a positive number must be chosen\n";
        cout << "Enter a positive number: ";
        cin >> user_number; // < 0
    }

    for (int i = 1; i <= user_number; i++)
    {
        cout << total 
             << "+" 
             << i 
             << " = ";
        total += i;
        cout << total << endl;
    }

    cout << "Total = " 
         << total 
         << endl 
         << endl;

    return 0;
}

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int INCREMENTAL_AMOUNT = 2;

    int num_of_days;

    float daily_salary = .01,
          total_salary = 0;

    cout << "\nEnter number of days: ";
    while(!(cin >> num_of_days) || (num_of_days < 1))
    {
        cout << "ERROR: number of days must be \n"
             << "greater than 1 \n"
             << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }

    cout << "\n   Day             Amount Earned" << endl;
    cout << "--------------------------------------\n";
    cout << setprecision(2) << fixed;

    for(int i = 0; i < num_of_days; i++)
    {
        total_salary += daily_salary;
        cout << "   " << (i + 1) << "           $";
        cout << daily_salary << endl;
        daily_salary *= INCREMENTAL_AMOUNT;
    }

    cout << "\nTotal salary for " << num_of_days;
    cout << " days = $" << total_salary << endl;
    cout << endl;
    
    return 0;
}

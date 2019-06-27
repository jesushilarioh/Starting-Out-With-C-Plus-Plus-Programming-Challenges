#include <iostream>
using namespace std;
int main()
{
    int speed,
        hours_traveled,
        distance = 0;

    cout << "What is the speed? ";
    while(!(cin >> speed) || (speed < 0))
    {
        cout << "ERROR: number of speed must be \n"
             << "greater that 0 \n"
             << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }

    cout << "What is the hours traveled? ";
    while(!(cin >> hours_traveled) || (hours_traveled < 1))
    {
        cout << "ERROR: number of hours traveled must be \n"
             << "greater that 1 \n"
             << endl;
        cin.clear();
        cin.ignore(1200, '\n');
    }

    cout << "Hour   Distance Traveled" << endl;
    cout << "------------------------" << endl;

    for(int i = 0; i < hours_traveled; i++)
    {
        distance += speed;
        cout << "   " << (i + 1) << "   " 
                << distance 
                << endl;
    }

    return 0;
}

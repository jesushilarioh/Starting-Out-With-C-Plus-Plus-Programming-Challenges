#include <iostream>
using namespace std;
int main()
{
    int user_integer;

    cout << "Enter a positive integer no greater than 15: ";
    while(!(cin >> user_integer) || 
            user_integer > 15    || 
            user_integer < 0
         )
    {
        cout << "Error. A positive integer no \n"
             << "greater than 15 must be entered: ";
        cin.clear();
        cin.ignore(1200, '\n');
    }
    
    for (int i = 0; i < user_integer; i++)
    {
        for (int j = 0; j < user_integer; j++)
        {
            cout << "Y";
        }
        cout << endl;
    }

    return 0;
}
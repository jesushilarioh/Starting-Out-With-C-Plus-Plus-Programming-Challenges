#include <iostream>
using namespace std;
int main()
{
    float user_temp;

    cout << "Enter temperature: "; 
    cin >> user_temp;

    cout << "\nAt " 
         << user_temp 
         << " F these substances will either "
         << " freeze or boil.\n";
    
    if (user_temp <= 32)
    {
        cout << "\nFreeze:\n";
        cout << "--------" << endl;
        cout << "Water" << endl;

        if (user_temp <= -38)
        {
            cout << "Mercury" << endl;

            if (user_temp <= -173)
            {
                cout << "Ethyl alcohol" << endl;

                if (user_temp <= -362)
                {
                    cout << "Oxygen" << endl;
                }
            }
        }
        cout << endl;
    }

    if (user_temp >= -306)
    {
        cout << "Boil: \n";
        cout << "--------" << endl;
        cout << "Oxygen." << endl;

        if (user_temp >= 172)
        {
            cout << "Ethyl alcohol." << endl;

            if (user_temp >= 212)
            {
                cout << "Water" << endl;

                if (user_temp >= 676)
                {
                    cout << "Mercury" << endl;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
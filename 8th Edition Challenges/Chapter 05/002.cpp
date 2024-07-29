#include <iostream>
using namespace std;
int main()
{
    char ascii_code_number;

    for (int i = 0; i <= 127; i++)
    {
        ascii_code_number = i;
        cout << ascii_code_number << " ";

        if (i % 16 == 0)
            cout << endl;
    }
    cout << endl
         << endl;

    return 0;
}

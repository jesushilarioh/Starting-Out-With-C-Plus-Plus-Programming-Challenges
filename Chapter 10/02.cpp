#include <iostream>
#include <cstring> // strlen()

using namespace std;

void reverseArray(const char *);
void displayCString(const char *);
void getUserInfo(char *, const int);

int main()
{
    const int SIZE = 8;
    char user_c_string[SIZE];

    getUserInfo(user_c_string, SIZE);

    cout << endl;
    displayCString(user_c_string);
    cout << endl;

    cout << endl;
    reverseArray(user_c_string);
    cout << endl << endl;

    return 0;
}
void getUserInfo(char *user_c_string, const int SIZE)
{
    cout << "\nEnter a string with no more than " 
         << (SIZE - 1) << " characters: ";
    cin.getline(user_c_string, SIZE);
}

void displayCString(const char *c_string)
{
    while(*c_string != '\0')
    {
        cout << *c_string;
        c_string++;
    }
}

void reverseArray(const char *c_string)
{
    for (int i = strlen(c_string); i >= 0; i--)
        cout << *(c_string + i); // c_string[i]
}
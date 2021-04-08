#include <iostream>
#include <cstring> // strlen()

using namespace std;

int countNumberOfChars(const char *);

int main()
{
    const int SIZE = 18;
    char user_string[SIZE]; // 11111111111111111/0

    cout << "\nEnter a string with " << SIZE - 1 << " characters: ";
    cin.getline(user_string, SIZE);

    int number_of_characters = countNumberOfChars(user_string);

    cout << "user_sting has " << number_of_characters 
         << " characters." << endl;
    cout << endl;

    return 0;
}
int countNumberOfChars(const char *c_string)
{
    return strlen(c_string);
}

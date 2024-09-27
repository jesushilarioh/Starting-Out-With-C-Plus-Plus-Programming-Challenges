#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    // Variables
    string username,
           city,
           college,
           profession,
           animal,
           pet_name,
           age;

    // ask the user to enter info
    cout << endl;
    cout << "What is your name? ";
    getline(cin, username);

    cout << "Your age? ";
    getline(cin, age);

    cout << "What city to you live? ";
    getline(cin, city);

    cout << "What college? ";
    getline(cin, college);

    cout << "What do you do for a living? ";
    getline(cin, profession);

    cout << "What type of animal? ";
    getline(cin, animal);

    cout << "Pet's name? ";
    getline(cin, pet_name);

    cout << endl;

    // Display user info in a sentence
    cout << "There once was a person named ";
    cout << username;

    cout << " who lived in ";
    cout << city;

    cout << ". At the age of " << age << ", ";
    cout << username;

    cout << " went to college at " << college << ". ";
    cout << username;

    cout << " graduated and went to work as a ";
    cout << profession;

    cout << ". Then, " << username << " adopted a(n) ";
    cout << animal << " named " << pet_name;

    cout << ". They both lived happily ever after!\n" << endl;

    return 0;
}
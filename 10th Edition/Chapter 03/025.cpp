#include <iostream>
#include <iomanip>
using namespace std;

int main()
{   
    // Variables
    string name,
           city,
           college,
           profession,
           animal,
           pet_name,
           age;

    cout << "\nWhat is your name? ";
    getline(cin, name);

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


    cout << endl 
         << "Name:          " << name       << endl
         << "City:          " << city       << endl
         << "Age:           " << age        << endl
         << "College:       " << college    << endl
         << "Profession:    " << profession << endl
         << "Animal:        " << animal     << endl
         << "Pet Name:      " << pet_name   << endl
         << endl;

    return 0;
}
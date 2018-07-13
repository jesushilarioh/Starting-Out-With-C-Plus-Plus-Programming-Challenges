/********************************************************************
*
*	24. WORD GAME
*
*       Write a program that plays a word game with the user. The
*       program should ask the user to enter the following:
*
*       • His or her name
*       • His or her age
*       • The name of a city
*       • The name of a college
*       • A profession
*       • A type of animal
*       • A pet’s name
*
*       After the user has entered these items, the program should
*       display the following story, inserting the user’s input into
*       the appropriate locations:
*
*       There once was a person named NAME who lived in CITY. At the
*       age of AGE, NAME went to college at COLLEGE. NAME graduated
*       and went to work as a PROFESSION. Then, NAME adopted
*       a(n) ANIMAL named PETNAME. They both lived happily
*       ever
*       after!
*
* 	Jesus Hilario Hernandez
* 	January 9th 2017
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    // Variables
    string username,
           city,
           college,
           profession,
           animal,
           pet_name;

    int age;

    // ask the user to enter info
    cout << endl;
    cout << "What is your name? ";
    getline(cin, username);
    cout << "Your age? ";
    cin >> age;
    cin.ignore();
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
    cout << "There once was a person named " << username << " who lived in " << city << ". At the age of " << age << ", " << username << " went to college at " << college << ". " << username << " graduated and went to work as a " << profession << ". Then, " << username << " adopted a(n) " << animal << " named " << pet_name << ". They both lived happily ever after!\n" << endl;

    // Terminate
    return 0;
}

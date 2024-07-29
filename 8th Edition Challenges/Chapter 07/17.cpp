#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void readFileContentsIntoVector(vector<string> &, const string);
void showMenu();
bool checkIfValueInVector(const vector<string>, const string);
void displayIfAmongMostPopular(const vector<string>, const string);
int inputValidate(int);
void program(const vector<string>, const vector<string>);

int main()
{
    vector<string> boy_names;
    readFileContentsIntoVector(boy_names, "BoyNames.txt");

    vector<string> girl_names;
    readFileContentsIntoVector(girl_names, "GirlNames.txt");

    program(boy_names, girl_names);

    return 0;
} // END int main()

void readFileContentsIntoVector(vector<string> &vector, const string file_name)
{
    ifstream inputFile;

    inputFile.open(file_name);

    if (inputFile.fail())
    {
        cout << "Error opening file." << endl; 
        exit(EXIT_SUCCESS);
    }
    else
    {
        string content;

        while (inputFile >> content)
            vector.push_back(content);
                
        inputFile.close();

    }
    
}

void program(const vector<string> boy_names, const vector<string> girl_names)
{
    const int BOYS_NAME_CHOICE = 1,
              GIRLS_NAME_CHOICE = 2, 
              BOYS_AND_GIRLS_NAME_CHOICE = 3,
              QUIT_PROGRAM_CHOICE = 4;

    int user_menu_choice;

    string users_boy_name, 
           users_girl_name;

    do
    {
        showMenu();

        user_menu_choice = inputValidate(user_menu_choice);

        cout << endl;
        if(user_menu_choice == BOYS_NAME_CHOICE)
        {
            cout << "Enter a boy's name: ";
            cin >> users_boy_name;

            displayIfAmongMostPopular(boy_names, users_boy_name);

        }
        else if(user_menu_choice == GIRLS_NAME_CHOICE)
        {
            cout << "Enter a girl's name: ";
            cin >> users_girl_name;

            displayIfAmongMostPopular(girl_names, users_girl_name);

        }
        else if (user_menu_choice == BOYS_AND_GIRLS_NAME_CHOICE)
        {
            cout << "First, enter a boy's name: ";
            cin >> users_boy_name;

            displayIfAmongMostPopular(boy_names, users_boy_name);

            cout << "Next, enter a girl's name: ";
            cin >> users_girl_name;

            displayIfAmongMostPopular(girl_names, users_girl_name);
        }
        cout << endl;

    } while(user_menu_choice != QUIT_PROGRAM_CHOICE);
}

void showMenu()
{
    cout 
         << "Would you like to enter a boy's name, a girl's name, or both?\n" << endl
         << "Press 1 for a boy's name." << endl
         << "Press 2 for a girl's name." << endl
         << "Press 3 for both a boy's name and a girl's name." << endl
         << "Press 4 to quit program." 
         << 
            endl;

}

int inputValidate(int number)
{
    while (!(cin >> number) || (number < 1 || number > 4))
    {
        cout << "Error. Enter an number 1 thru 4: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return number;
    
}

void displayIfAmongMostPopular(const vector<string> vector, const string name)
{
    cout << endl
         << name 
         << (checkIfValueInVector(vector, name) ? " IS" : " IS NOT")
         << " among the most popular names." 
         << endl;
}

bool checkIfValueInVector(const vector<string> vector, const string value)
{
    bool value_exists = false;
    for(int i = 0; i < vector.size(); i++)
    {
        if (value == vector[i])
            value_exists = true;

    }
    return value_exists;
}

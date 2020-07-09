/**
 * 2. Lottery Winners
 * 
 * A lottery ticket buyer purchases 10 tickets a week, always 
 * playing the same 10 5-digit “lucky” combinations. Write a 
 * program that initializes an array or a vector with these 
 * numbers and then lets the player enter this week’s winning 
 * 5-digit number. The program should perform a linear search 
 * through the list of the player’s numbers and report whether 
 * or not one of the tickets is a winner this week. Here are 
 * the numbers:
 * 
 * 13579 26791 26792 33445 55555 
 * 62483 77777 79422 85647 93121
 * 
 **/
#include <iostream>
#include <vector>

using namespace std;

int inputValidate(int, const string);
bool linearSearch(const vector<int>, const int);

int main()
{
    vector<int> users_lotto_numbers { 13579, 26791, 26792, 33445, 55555, 
                                      62483, 77777, 79422, 85647, 93121 };

    int winning_numbers = inputValidate(winning_numbers, "Enter 5-digit lotto numbers:");

    bool number_found = linearSearch(users_lotto_numbers, winning_numbers);

    if (number_found)
        cout << "Winner!!" << endl;
    else 
        cout << "None of you lotto numbers match the winning numbers." << endl;
       

    return 0;
}

int inputValidate(int user_number, const string prompt)
{
    cout << prompt << endl;

    while (!(cin >> user_number))
    {
        cout << "Error. A number must be entered." << endl;
        cout << prompt << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return user_number;
}

bool linearSearch(const vector<int> vector_array, const int search_term)
{
    bool is_found = false;

    for(int i = 0; i < vector_array.size(); i++)
    {
        if (search_term == vector_array[i])
            is_found = true;

    }

    return is_found;
}


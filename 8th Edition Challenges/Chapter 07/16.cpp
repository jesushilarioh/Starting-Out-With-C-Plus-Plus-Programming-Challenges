/************************************************************
 *
 *   16. World Series Champions
 * 
 *  If you have downloaded this book’s source code from the 
 *  companion Web site, you will find the following files in 
 *  this chapter’s folder:
 * 
 *  • Teams.txt—This file contains a list of several Major 
 *      League baseball teams in alphabetical order. Each 
 *      team listed in the file has won the World Series at 
 *      least once.
 * 
 *  • WorldSeriesWinners.txt—This file contains a 
 *      chronological list of the World Series’ winning teams 
 *      from 1903 to 2012. (The first line in the file is the 
 *      name of the team that won in 1903, and the last line 
 *      is the name of the team that won in 2012. Note that 
 *      the World Series was not played in 1904 or 1994.)
 * 
 *  Write a program that displays the contents of the 
 *  Teams.txt file on the screen and prompts the user 
 *  to enter the name of one of the teams. The program 
 *  should then display the number of times that team has 
 *  won the World Series in the time period from 1903 to 2012.
 * 
 *  TIP: Read the contents of the WorldSeriesWinners.txt file 
 *  into an array or vector. When the user enters the name of 
 *  a team, the program should step through the array or 
 *  vector counting the number of times the selected team appears.
 *
 *************************************************************/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

void getContentsFromFile(const string, vector<string> &);
void displayVector(const vector<string>);
void getRunningTotal(const vector<string>, int &, const string);
void displayInfo(const string, const int);

int main()
{
    vector<string> teams;
    getContentsFromFile("Teams.txt", teams);

    vector<string> world_series_winners;
    getContentsFromFile("WorldSeriesWinners.txt", world_series_winners);

    cout << "\nMajor League Baseball teams: \n" << endl;
    displayVector(teams);

    cout << "\n\nEnter the name of one of these teams: \n" << endl;
    string user_team;
    getline(cin, user_team);

    int number_of_titles_won = 0;
    getRunningTotal(world_series_winners, number_of_titles_won, user_team);

    displayInfo(user_team, number_of_titles_won);

    return 0;
} // END int main()

void getContentsFromFile(const string file_name, vector<string> &vector_array)
{
    ifstream inputFile;

    inputFile.open(file_name);

    if(inputFile.fail())
        cout << "Error opening file" << endl;
    else
    {
        string vector_element;

        while(getline(inputFile, vector_element))
            vector_array.push_back(vector_element);
            
        inputFile.close();
    }
}

void displayVector(const vector<string> vector_array)
{
    for (int i = 0; i < vector_array.size(); i++)
        cout << vector_array[i] << endl;
}

void getRunningTotal(const vector<string> vector_array,
                     int &running_total,
                     const string user_choice)
{
    for(int i = 0; i < vector_array.size(); i++)
    {
        if(user_choice == vector_array[i])
            running_total++;
    }
}

void displayInfo(const string user_team, const int number_of_titles_won)
{
    cout << user_team << " have won the world series " 
         << number_of_titles_won 
         << " times."
         << endl
         << endl;
}

#include <iostream>
using namespace std;

const int ROWS_AND_COLUMNS = 3; 

void displayTwoDimensionalArray(const char[][ROWS_AND_COLUMNS]);
void player(char[][ROWS_AND_COLUMNS], char);
bool checkIfWinnerAcross(const char[][ROWS_AND_COLUMNS], 
                         const char, 
                         string &);
bool checkIfWinnerDown(const char[][ROWS_AND_COLUMNS], 
                       const char, 
                       string &);
bool checkIfWinnerDiagonalLeftToRight(const char[][ROWS_AND_COLUMNS], 
                                      const char, 
                                      string &);
bool checkIfWinnerDiagonalRightToLeft(const char[][ROWS_AND_COLUMNS],
                                      const char, 
                                      string &);
bool checkForWinner(const char[][ROWS_AND_COLUMNS], 
                    const char, 
                    string &);
int inputValidate(int, int, int);

int main()
{
    char game_board[ROWS_AND_COLUMNS][ROWS_AND_COLUMNS] = {{'*', '*', '*'},
                                                           {'*', '*', '*'},
                                                           {'*', '*', '*'}};
    string game_winner = "";

    displayTwoDimensionalArray(game_board);

    player(game_board, 'X');
    displayTwoDimensionalArray(game_board);

    for (int i = 0; i < 4; i++)
    {
        player(game_board, 'O');
        displayTwoDimensionalArray(game_board);

        if(checkForWinner(game_board, 'O', game_winner))
            break;

        player(game_board, 'X');
        displayTwoDimensionalArray(game_board);

        if(checkForWinner(game_board, 'X', game_winner))
            break;
    }

    cout << "Game winner: " << game_winner << endl;

    return 0;
} // END int main()

void displayTwoDimensionalArray(const char array[][ROWS_AND_COLUMNS])
{
    cout << endl;
    for(int i = 0; i < ROWS_AND_COLUMNS; i++)
    {
        for(int j = 0; j < ROWS_AND_COLUMNS; j++)
            cout << array[i][j];
        cout << endl;
    }
    cout << endl;
}

void player(char array[][ROWS_AND_COLUMNS], char letter)
{
    cout << "Select a location to place an " << letter << ": " << endl;

    int row, column;
    bool element_occupied = false;

    do
    {
        cout << "Which row? ";
        row = inputValidate(row, 1, 3);

        cout << "Which column? ";
        column = inputValidate(column, 1, 3);

        if(array[(row - 1)][(column - 1)] == '*')
        {
            array[(row - 1)][(column - 1)] = letter; 
            element_occupied = true;
        }
        else
        {
            cout << "Sorry, that spot is taken." << endl;
            element_occupied = false;
        }

    } while (element_occupied == false);
}

int inputValidate(int user_number, int lowest, int highest)
{

    while (!(cin >> user_number) || (user_number < lowest || user_number > highest))
    {
        cout << "Error. Enter a number from " << lowest << " to " << highest << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return user_number;
}

bool checkForWinner(const char array[][ROWS_AND_COLUMNS], 
                    const char letter, 
                    string &game_winner)
{
    bool winner = false;

    if(checkIfWinnerAcross(array, letter, game_winner))
        winner = true;
    else if(checkIfWinnerDown(array, letter, game_winner))
        winner = true;
    else if(checkIfWinnerDiagonalLeftToRight(array, letter, game_winner))
        winner = true;
    else if(checkIfWinnerDiagonalRightToLeft(array, letter, game_winner))
        winner = true;
    else 
    {
        game_winner = "tie!";
        winner = false;
    }

    return winner;
}

bool checkIfWinnerAcross(const char array[][ROWS_AND_COLUMNS], 
                         const char letter, 
                         string &game_winner)
{
    int letter_across = 0;
    bool winner = false;

    for(int row = 0; row < ROWS_AND_COLUMNS; row++)
    {
        for(int column = 0; column < ROWS_AND_COLUMNS; column++)
        {
            if (array[row][column] == letter)
                letter_across++; 
        }

        if (letter_across == 3)
        {
            if (letter == 'X')
                game_winner = "Player 1";
            else if (letter == 'O')
                game_winner = "Player 2";

            winner = true;
            break;
        }
        else
        {
            winner = false;
            letter_across = 0;
        }

    }

    return winner;
}

bool checkIfWinnerDown(const char array[][ROWS_AND_COLUMNS], 
                       const char letter, 
                       string &game_winner)
{
    int letter_down = 0;
    bool winner = false;

    for (int column = 0; column < ROWS_AND_COLUMNS; column++)
    {
        for (int row = 0; row < ROWS_AND_COLUMNS; row++)
        {
            if (array[row][column] == letter)
                letter_down++;
        }

        if (letter_down == 3) 
        {
            if (letter == 'X')
                game_winner = "Player 1";
            else if (letter == 'O')
                game_winner = "Player 2";

            winner = true;
            break;
        }
        else 
        {
            winner = false;
            letter_down = 0;
        }
    }
    
    return winner;
}

bool checkIfWinnerDiagonalLeftToRight(const char array[][ROWS_AND_COLUMNS], 
                                      const char letter, 
                                      string &game_winner)
{
    int letter_diagonal = 0;
    bool winner = false;
    
    for (int i = 0; i < ROWS_AND_COLUMNS; i++)
    {
        if (array[i][i] == letter)
            letter_diagonal++;
        
    }
    if (letter_diagonal == 3)
    {
        if (letter == 'X')
            game_winner = "Player 1";
        else if (letter == 'O')
            game_winner = "Player 2";
        
        winner = true;
    }
        
    else
        winner = false;
    
    return winner;
}

bool checkIfWinnerDiagonalRightToLeft(const char array[][ROWS_AND_COLUMNS], 
                                      const char letter, 
                                      string &game_winner)
{
    int letter_diagonal = 0; 
    bool winner;

    for (int row = 0, column = (ROWS_AND_COLUMNS - 1); row < ROWS_AND_COLUMNS; row++, column--)
    {
        if (array[row][column] == letter)
            letter_diagonal++;
    }

    if (letter_diagonal == 3)
    {
        if (letter == 'X')
            game_winner = "Player 1";
        else if (letter == 'O')
            game_winner = "Player 2";
        
        winner = true;
    }
    else
        winner = false;
    
    return winner;
}

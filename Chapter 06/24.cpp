#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For the time() function

// Constant variables
const int ROCK = 1,
          PAPER = 2,
          SCISSORS = 3;

// Function Prototypes
int inputValidate(int);
int computerChoice(int);
int getUserChoice(int);
void displayRandomNumber(int);
void winnerSelection(int, int, bool &);

using namespace std;

int main()
{
    int computer_choice,
        user_number;

    bool play_again;

    do
    {
        computer_choice = computerChoice(computer_choice);

        user_number = getUserChoice(user_number);

        displayRandomNumber(computer_choice);

        winnerSelection(computer_choice, user_number, play_again);

    } while (play_again == 1);

    return 0;
} // END int main()

int computerChoice(int computer_choice)
{
    // Get the system time.
    unsigned seed = time(0);

    // Seed the random number generator.
    srand(seed);

    // Random number
    return (rand() % (SCISSORS - ROCK + 1)) + ROCK;
}

int getUserChoice(int user_number)
{
    cout << "\nChoose 'rock', 'paper', or 'scissors'.\n"
         << "(1) for rock, (2) for paper, or (3) for scissors: ";
         
    user_number = inputValidate(user_number);

    return user_number;
}

int inputValidate(int num1)
{

    while (!(cin >> num1) || (num1 < 1 || num1 > 3))
    {
        cout << "Error. Number must not be "
             << " 0 or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return num1;
}

void displayRandomNumber(int computer_choice)
{
    cout << "\nComputer Choice = ";

    if (computer_choice == 1)
        cout << "Rock";
    else if (computer_choice == 2)
        cout << "Paper";
    else if (computer_choice == 3)
        cout << "Scissors";

    cout << endl;
}

void winnerSelection(int computer_choice,
                     int user_number,
                     bool &play_again)
{
    cout << endl;

    if (computer_choice == ROCK)
    {
        if (user_number == PAPER)
        {
            cout << "You win: (Paper covers rock).\n";
            play_again = 0;
        }
        else if (user_number == SCISSORS)
        {
            cout << "Computer wins: (Rock smashes scissors).\n";
            play_again = 0;
        }
        else if (user_number == ROCK)
        {
            cout << "Tie. Play again to determine the winner." << endl;
            play_again = 1;
        }
    }
    else if (computer_choice == PAPER)
    {
        if (user_number == ROCK)
        {
            cout << "Computer wins: (Paper covers rock).\n";
            play_again = 0;
        }
        else if (user_number == SCISSORS)
        {
            cout << "You win: (Scissors cuts paper).\n";
            play_again = 0;
        }
        else if (user_number == PAPER)
        {
            cout << "Tie. Play again to determine the winner." << endl;
            play_again = 1;
        }
    }
    else if (computer_choice == SCISSORS)
    {
        if (user_number == ROCK)
        {
            cout << "You win: (Rock smashes scissors).\n";
            play_again = 0;
        }
        else if (user_number == PAPER)
        {
            cout << "Computer wins: (Scissors cuts paper).\n";
            play_again = 0;
        }
        else if (user_number == SCISSORS)
        {
            cout << "Tie. Play again to determine the winner." << endl;
            play_again = 1;
        }
    }

    cout << endl;
}                     
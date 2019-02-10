#include <iostream>
using namespace std;

int main()
{
    // Variables
    int userNum;

    // Ask the user to enter a number between 1 and 10. (within range)
    cout << "Enter a number between 1 and 10: ";
    cin >> userNum;

    // Use switch statement to display the Roman numeral version of that #.
    switch (userNum)
    {
        case 1:
            cout << "The Roman numeral for ";
            cout  << userNum << " is I\n";
            break;
        case 2:
            cout << "The Roman numeral for ";
            cout << userNum << " is II\n";
            break;
        case 3:
            cout << "The Roman numeral for ";
            cout << userNum << " is III\n";
            break;
        case 4:
            cout << "The Roman numeral for ";
            cout << userNum << " is IV\n";
            break;
        case 5:
            cout << "The Roman numeral for ";
            cout << userNum << " is V\n";
            break;
        case 6:
            cout << "The Roman numeral for ";
            cout << userNum << " is VI\n";
            break;
        case 7:
            cout << "The Roman numeral for ";
            cout << userNum << " is VII\n";
            break;
        case 8:
            cout << "The Roman numeral for ";
            cout << userNum << " is VIII\n";
            break;
        case 9:
            cout << "The Roman numeral for ";
            cout << userNum << " is XI\n";
            break;
        case 10:
            cout << "The Roman numeral for ";
            cout << userNum << " is X\n";
            break;
        default:
            cout << "You must enter a number between 1 and 10\n";
            cout << "Re-run the program and try again.\n";
            break;
    }

    // Terminate program
    return 0;
}
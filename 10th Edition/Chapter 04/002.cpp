
#include <iostream>
using namespace std;

int main()
{

    int userNum;

    cout << "Enter a number between 1 and 10: ";
    cin >> userNum;


    switch (userNum)
    {
        case 1:
            cout << "The Roman numeral for " << userNum << " is I\n";
            break;

        case 2:
            cout << "The Roman numeral for " << userNum << " is II\n";
            break;

        case 3:
            cout << "The Roman numeral for " << userNum << " is III\n";
            break;

        case 4:
            cout << "The Roman numeral for " << userNum << " is IV\n";
            break;

        case 5:
            cout << "The Roman numeral for " << userNum << " is V\n";
            break;

        case 6:
            cout << "The Roman numeral for " << userNum << " is VI\n";
            break;

        case 7:
            cout << "The Roman numeral for " << userNum << " is VII\n";
            break;

        case 8:
            cout << "The Roman numeral for " << userNum << " is VIII\n";
            break;

        case 9:
            cout << "The Roman numeral for " << userNum << " is XI\n";
            break;

        case 10:
            cout << "The Roman numeral for " << userNum << " is X\n";
            break;

        default:
            cout << "You must enter a number between 1 and 10" << endl
                 << "Re-run the program and try again." << endl
                 << endl; 
            break;

    }

    return 0;
}
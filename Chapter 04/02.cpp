/********************************************************************
*
*	02. Roman Numeral Converter
*
*       Write a program that asks the user to enter a number
*       within the range of 1 through 10. Use a switch
*       statement to display the Roman numeral version of
*       that number.
*
*       Input Validation: Do not accept a number less than 1 or
*       greater than 10.
*
* 	Jesus Hilario Hernandez
* 	February 1, 2018
*
********************************************************************/
#include <iostream>
using namespace std;

// Functions
void Roman_Numeral_Output (int);

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
            Roman_Numeral_Output(userNum);
            cout << "I\n";
            break;
        case 2:
            Roman_Numeral_Output(userNum);
            cout << "II\n";
            break;
        case 3:
            Roman_Numeral_Output(userNum);
            cout << "III\n";
            break;
        case 4:
            Roman_Numeral_Output(userNum);
            cout << "IV\n";
            break;
        case 5:
            Roman_Numeral_Output(userNum);
            cout << "V\n";
            break;
        case 6:
            Roman_Numeral_Output(userNum);
            cout << "VI\n";
            break;
        case 7:
            Roman_Numeral_Output(userNum);
            cout << "VII\n";
            break;
        case 8:
            Roman_Numeral_Output(userNum);
            cout << "VIII\n";
            break;
        case 9:
            Roman_Numeral_Output(userNum);
            cout << "XI\n";
            break;
        case 10:
            Roman_Numeral_Output(userNum);
            cout << "X\n";
            break;
        default:
            cout << "You must enter a number between 1 and 10" << endl;
            cout << "Run the program over and try again."      << endl;
            break;
    }
    // Terminate program
    return 0;
}

void Roman_Numeral_Output(int x)
{
    cout << "The Roman numeral for " << x << " is ";
}

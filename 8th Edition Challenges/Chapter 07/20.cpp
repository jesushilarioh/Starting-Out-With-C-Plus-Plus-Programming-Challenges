/************************************************************
 *
 *   20. Theater Seating
 * 
 *  This program should be designed and written by a team of 
 *  students. Here are some suggestions:
 *  
 *  • One student should design function main, which will call 
 *          the other functions in the program. The remainder of the 
 *          functions will be designed by other members of the team.
 *  
 *  • The requirements of the program should be analyzed so each 
 *          student is given about the same work load.
 *  
 *  • The parameters and return types of each function should 
 *          be decided in advance.
 *  
 *  • The program can be implemented as a multi-file program, 
 *          or all the functions can be cut and pasted into the 
 *          main file.
 *  
 *  Here is the assignment: Write a program that can be used 
 *  by a small theater to sell tickets for performances. The 
 *  theater’s auditorium has 15 rows of seats, with 30 seats 
 *  in each row. The program should display a screen that 
 *  shows which seats are available and which are taken. 
 *  For example, the following screen shows a chart depicting 
 *  each seat in the theater. Seats that are taken are 
 *  represented by an * symbol, and seats that are available 
 *  are represented by a # symbol:
 * 
 *                      Seats
 *          123456789012345678901234567890    
 * Row 1    ***###***###*########*****####
 * Row 2    ####*************####*******##
 * Row 3    **###**********########****###
 * Row 4    **######**************##******
 * Row 5    ********#####*********########
 * Row 6    ##############************####
 * Row 7    #######************###########
 * Row 8    ************##****############
 * Row 9    #########*****############****
 * Row 10   #####*************############
 * Row 11   #**********#################**
 * Row 12   #############********########*
 * Row 13   ###***********########**######
 * Row 14   ##############################
 * Row 15   ##############################
 * 
 *  Here is a list of tasks this program must perform:
 * 
 *  • When the program begins, it should ask the user to enter 
 *      the seat prices for each row. The prices can be stored 
 *      in a separate array. (Alternatively, the prices may be 
 *      read from a file.)
 * 
 *  • Once the prices are entered, the program should display 
 *      a seating chart similar to the one shown above. The 
 *      user may enter the row and seat numbers for tickets 
 *      being sold. Every time a ticket or group of tickets is 
 *      purchased, the program should display the total ticket 
 *      prices and update the seating chart.
 * 
 *  • The program should keep a total of all ticket sales. 
 *      The user should be given an option of viewing this 
 *      amount.
 * 
 *  • The program should also give the user an option to 
 *      see a list of how many seats have been sold, how 
 *      many seats are available in each row, and how 
 *      many seats are available in the entire auditorium.
 * 
 *  Input Validation: When tickets are being sold, do not 
 *      accept row or seat numbers that do not exist. When 
 *      someone requests a particular seat, the program 
 *      should make sure that seat is available before it 
 *      is sold.
 *
 *************************************************************/

#include <iostream>
#include <fstream>
using namespace std;

const int ROWS = 15, 
          COLUMNS = 30;

void displayMenu();
void getValuesFromFile(double[], string);
void getValuesFromFile(char [][COLUMNS], string);
void displaySeatingPrices(const double []);
void displaySeatingChart(const char [][COLUMNS]);
int inputValidate(int, int, int);
char inputValidateYesOrNo(char);

int main()
{
    double seat_prices[ROWS];
    getValuesFromFile(seat_prices, "seating_prices.txt");

    char seating_chart[ROWS][COLUMNS];
    getValuesFromFile(seating_chart, "seating_chart.txt"); 

    int menu_choice, 
        seats_sold = 0;
    char user_choice;
    double total_ticket_sales = 0;

    do
    {
        displayMenu();

        cout << "Enter menu choice: " << endl;
        cin >> menu_choice;

        if (menu_choice == 1)
        {
            cout << "Menu choice = " << menu_choice << endl;
            cout << "\nSeat prices: " << endl;
            displaySeatingPrices(seat_prices);

        }
        else if (menu_choice == 2)
        {
            cout << "Menu choice = " << menu_choice << endl;
            cout << "Seating chart: " << endl
                 << "Taken = * | Available = #" << endl;  
            displaySeatingChart(seating_chart);

        }
        else if (menu_choice == 3)
        {
            cout << "Menu choice = " << menu_choice << endl;

            cout << "Choose a seat: " << endl;
            cout << "Enter row #: ";
            int row_number = inputValidate(row_number, 1, 15);

            cout << "Enter seat #: ";
            int seat_number = inputValidate(seat_number, 1, 30);

            if (seating_chart[row_number - 1][seat_number - 1] == '#')
            {
                cout << "That seat is available." << endl << endl;
                cout << "The price for Row #" << row_number 
                    << " Seat #" << seat_number 
                    << " is $" << seat_prices[row_number - 1] << "." 
                    << endl;

                cout << "Whould you like to purchase Row #" << row_number << " Seat #" << seat_number << "? ";
                user_choice = inputValidateYesOrNo(user_choice);
                

                if (user_choice == 'Y' || user_choice == 'y')
                {

                    // 3b. Every time a ticket or group of tickets is purchased, 
                    //      the program should display the total ticket prices 
                    //      and update the seating chart.
                    seating_chart[row_number - 1][seat_number - 1] = '*';
                    total_ticket_sales += seat_prices[row_number - 1];

                    cout << "Total charges = $" << total_ticket_sales << endl;

                    // 4. keep a total of all ticket sales. 
                    seats_sold++;
                }
                else if (user_choice == 'N' || user_choice == 'n')
                {
                    continue;
                }
                
            }
            else
            {
                cout << "\nThat seat is NOT available.\n" << endl;
                cout << "Would you like to pick another seat? ";
                user_choice = inputValidateYesOrNo(user_choice);

            }

        }
        else if (menu_choice == 4)
        {
            cout << "Menu choice = " << menu_choice << endl;
            cout << "Number of seats sold = " << seats_sold << endl;
        }
        else if (menu_choice == 5)
        {
            cout << "Menu choice = " << menu_choice << endl;
            int seats_available = 0;

            for (int row = 0; row < ROWS; row++)
            {
                for (int column = 0; column < COLUMNS; column++)
                {
                    if (seating_chart[row][column] == '#')
                        seats_available++;
                    
                }
                cout << "Seats available for row #" << (row + 1) << " = " << seats_available << endl;
                seats_available = 0;
            }
        }
        else if (menu_choice == 6)
        {
            cout << "Menu choice = " << menu_choice << endl;
            int seats_available = 0;

            for (int row = 0; row < ROWS; row++)
            {
                for (int column = 0; column < COLUMNS; column++)
                {
                    if (seating_chart[row][column] == '#')
                        seats_available++;
                    
                }
                
            }
            cout << "Total seats available in the entire auditorium = " 
                 << seats_available 
                 << endl;
        }
        else if (menu_choice == 7)
        {
            cout << "Menu choice = " << menu_choice << endl;
            cout << "Number of seats sold = " << seats_sold << endl;
            cout << "Total ticket sales = $" << total_ticket_sales << endl;
        }
        else if (menu_choice == 8)
        {
            cout << "Menu choice = " << menu_choice << endl;
        }
        

    } while (menu_choice != 8);
    
    return 0;
} // END int main()

void getValuesFromFile(double array[], string file_name)
{
    ifstream inputFile;

    inputFile.open(file_name);
    
    if (inputFile.fail())
    {
        cout << "Error opening file. " << endl;
        exit(EXIT_SUCCESS);
    }
    else
    {
        for(int row = 0; row < ROWS; row++)
            inputFile >> array[row];

    }
    
}

void getValuesFromFile(char array[][COLUMNS], string file_name)
{
    ifstream inputFile;
    
    inputFile.open(file_name);

    if(inputFile.fail())
    {
        cout << "Error opening file. " << endl;
        exit(EXIT_SUCCESS);
    }
    else
    {
        for (int row = 0; row < ROWS; row++)
        {
            for (int column = 0; column < COLUMNS; column++)
            {
                inputFile >> array[row][column];
            }
            
        }
        
    }
}

void displayMenu()
{
    cout << "\nChoose from menu: " << endl
         << "1. Seat Prices" << endl
         << "2. Seating Chart" << endl
         << "3. Purchase a seat" << endl
         << "4. See how many seats have sold" << endl
         << "5. See how many seats are available in each row" << endl
         << "6. See how many seats are available in the entire auditorium" << endl 
         << "7. View ticket sales" << endl
         << "8. Quit Program." << endl
         << endl;
}

void displaySeatingPrices(const double array[])
{
    for (int i = 0; i < ROWS; i++)
        cout << "Row #" << (i + 1) << " = $" << array[i] << " " << endl;

    cout << endl;

}

void displaySeatingChart(const char array[][COLUMNS])
{
    for (int row = 0; row < ROWS; row++)
    {
        for (int column = 0; column < COLUMNS; column++)
            cout << array[row][column];

        cout << endl;

    }
    
}

int inputValidate(int user_number, int lowest, int highest)
{
    while(!(cin >> user_number) || (user_number < lowest || user_number > highest))
    {
        cout << "Error: Enter a number from " << lowest << " to " << highest << ": ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return user_number;

}

char inputValidateYesOrNo(char letter)
{
    cin >> letter;
    while (!(letter == 'Y' || letter == 'y' || letter == 'N' || letter == 'n'))
    {
        cout << "Error: Enter a \"Y\" for yes or \"N\" for \"no\"";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> letter;
    }

    return letter;

}

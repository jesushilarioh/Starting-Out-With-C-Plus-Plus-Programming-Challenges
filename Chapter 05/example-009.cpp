/********************************************************************
*
*	  009. Hotel Occupancy
*
*       Write a program that calculates the occupancy rate for a
*       hotel. The program should start by asking the user how many
*       floors the hotel has. A loop should then iterate once
*       for each floor. In each iteration, the loop should ask the
*       user for the number of rooms on the floor and how many of
*       them are occupied. After all the iterations, the program
*       should display how many rooms the hotel has, how many of them
*       are occupied, how many are unoccupied, and the percentage of
*       rooms that are occupied. The percentage may be calculated by
*       dividing the number of rooms occupied by the number of rooms.
*
*       Note: It is traditional that most hotels do not have a 13th
*             floor. The loops in the program should skip the entire
*             13th iteration.
*
*       Input Validation: Do not accept a value less than 1 for the
*                         number of floors. Do Not accept a number
*                         less than 10 for the number of rooms on
*                         a floor.
*
* 	Jesus Hilario Hernandez
* 	April 27th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    float occupancy_rate = 0,
          rooms_occupied = 0,
          total_rooms = 0;

    int num_of_rooms,
        num_of_floors,
        total_rooms_used = 0,
        total_rooms_occupied = 0,
        total_rooms_unoccupied = 0;

    // ask user how many floors the hotel has
    cout << "How many floors does your hotel have? ";

    // Input Val. (num_of_floors) not less than 1
    while (!(cin >> num_of_floors) || (num_of_floors < 1))
    {
        // Explain error
        cout << "ERROR: number of floors must be greater that 1 \n";
        // Clear input stream
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
        // Re-enter (num_of_floors)
        cout << "How many floors does your hotel have? ";

    }

    // A (user contolled loop) should iterate once for each floor
        // (for)
    for (int i = 0; i < num_of_floors; i++)
    {
        // 3). Note: skip the 13th iteration.
        if ((i + 1) == 13)
        {
            cout << "\nI'm assuming there is no 13th floor,\n";
            cout << "So we'll skip that one. :)" << endl << endl;
        }
        else
        {
            // 1). ask the user for number of rooms on the floor
            cout << "How many rooms does floor number ";
            cout << (i + 1) << " have? ";

            // // Input Val. (num_of_rooms) not less than 10
            while (!(cin >> num_of_rooms) || (num_of_rooms) < 10)
            {
                // Explain error
                cout << "ERROR: enter a number greater that 10: ";
                // Clear input stream
                cin.clear();
                // Dicard previous input up to 123 characters
                cin.ignore(123, '\n');
                // Re-enter (num_of_rooms)
                cout << "How many rooms does floor number ";
                cout << (i + 1) << " have? ";
            }

            // After all the iterations, the program should display
                // 1). how many rooms the hotel has,
            total_rooms += num_of_rooms;

            // 2). ask user how many rooms are occupied on that floor
            cout << "How many rooms are occupied on that floor? ";

            while (!(cin >> rooms_occupied) || (rooms_occupied) < 1)
            {
                // Explain error
                cout << "ERROR: enter a number greater that 10: ";
                // Clear input stream
                cin.clear();
                // Dicard previous input up to 123 characters
                cin.ignore(123, '\n');
                // Re-enter (num_of_rooms)
                cout << "How many rooms are occupied on that floor? ";
            }
            // After all the iterations, the program should display
                // 2). how many of them are occupied,
                total_rooms_used += rooms_occupied;
        }
    }

    // After all the iterations, the program should display
        // 3). how many are unoccupied, and
    total_rooms_unoccupied = total_rooms - total_rooms_used;
    cout << "Total rooms unoccupied = " << total_rooms_unoccupied << endl;
    cout << "Total rooms used = " << total_rooms_used << endl;
    cout << "Total number of rooms = " << total_rooms << endl;

    // After all the iterations, the program should display
        // 4). the percentage of rooms that are occupied.
    // calculate the occupancy rate for a hotel
    // The percentage may be calculated by dividing
    // the number of rooms occupied by the number of rooms
    occupancy_rate = (total_rooms_used / total_rooms) * 100;
    cout << "Occupancy rate = " << occupancy_rate << "%." << endl;

    return 0;
}

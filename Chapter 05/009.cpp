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

    cout << "How many floors does your hotel have? ";

    while (!(cin >> num_of_floors) || (num_of_floors < 1))
    {
        cout << "ERROR: number of floors must be\n"
             << "greater that 1 \n";        
        cin.clear();        
        cin.ignore(1230, '\n');
    }

    for(int i = 0; i < num_of_floors; i++)
    {
        if ((i + 1) == 13) 
        {
            cout << "\nSkipping 13th floor." 
                 << endl 
                 << endl;
        }
        else
        {
            cout << "How many rooms does floor number ";
            cout << (i + 1) << " have? ";

            while (!(cin >> num_of_rooms) || 
                    (num_of_rooms < 10))
            {
                cout << "ERROR: enter a number\n"
                     << "greater than 10: ";                
                cin.clear();
                cin.ignore(123, '\n');
            }

            total_rooms += num_of_rooms;

            cout << "How many rooms are occupied\n"
                 << "on that floor? ";

            while (!(cin >> rooms_occupied) || 
                    (rooms_occupied < 1))
            {
                cout << "ERROR: enter a number\n"
                     << "greater than 10: ";                
                cin.clear();
                cin.ignore(123, '\n');
            }

             total_rooms_used += rooms_occupied;
        }
        
        
    }

    total_rooms_unoccupied = total_rooms - total_rooms_used;
    cout << "Total rooms unoccupied = " 
         << total_rooms_unoccupied 
         << endl;

    cout << "Total rooms used = " 
         << total_rooms_used 
         << endl;
         
    cout << "Total number of rooms = " 
         << total_rooms 
         << endl;

    occupancy_rate = (total_rooms_used / total_rooms) * 100;
    cout << "Occupancy rate = " 
         << occupancy_rate 
         << "%." 
         << endl;
    

    return 0;
}

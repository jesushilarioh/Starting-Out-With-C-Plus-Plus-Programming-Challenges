#include <iostream>
using namespace std;
int main()
{
    const int MIN_NUMBER = 0,
              NUM_OF_STORES = 5,
              HUNDRED = 100;

    int store_1,
        store_2,
        store_3,
        store_4,
        store_5,
        store_1_100s, 
        store_2_100s, 
        store_3_100s, 
        store_4_100s, 
        store_5_100s;

    cout << "\nEnter today's sales for store 1: ";
    cin >> store_1;
    store_1_100s = store_1 / HUNDRED; // 200/100 = 2

    cout << "Enter today's sales for store 2: ";
    cin >> store_2;
    store_2_100s = store_2 / HUNDRED; // 300/100 = 3

    cout << "Enter today's sales for store 3: ";
    cin >> store_3;
    store_3_100s = store_3 / HUNDRED;

    cout << "Enter today's sales for store 4: ";
    cin >> store_4;
    store_4_100s = store_4 / HUNDRED;
    
    cout << "Enter today's sales for store 5: ";
    cin >> store_5;
    store_5_100s = store_5 / HUNDRED;

    cout << "\nSALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl;
    cout << "Store 1: ";
    for (int i = MIN_NUMBER; i < store_1_100s; i++)
        cout << '*';

    cout << endl;

    cout << "Store 2: ";
    for (int i = MIN_NUMBER; i < store_2_100s; i++)
        cout << '*';

    cout << endl;

    cout << "Store 3: ";
    for (int i = MIN_NUMBER; i < store_3_100s; i++)
        cout << '*'; 

    cout << endl;

    cout << "Store 4: ";
    for (int i = MIN_NUMBER; i < store_4_100s; i++)
        cout << '*';

    cout << endl;
    
    cout << "Store 5: ";
    for (int i = MIN_NUMBER; i < store_5_100s; i++)
        cout << '*';
        
    cout << '\n' << endl;

    return 0;
}

/********************************************************************
*
*	  017. SALES BAR CHART
*
*       Write a program that asks the user to enter today’s sales 
*       for five stores. The program should then display a bar graph 
*       comparing each store’s sales. Create each bar in the bar graph 
*       by displaying a row of asterisks. Each asterisk should represent 
*       $100 of sales. Here is an example of the program’s output.
*
*       Enter today's sales for store 1: 1000 [Enter]
*       Enter today's sales for store 2: 1200 [Enter]
*       Enter today's sales for store 3: 1800 [Enter]
*       Enter today's sales for store 4: 800 [Enter]
*       Enter today's sales for store 5: 1900 [Enter]
*
*       SALES BAR CHART
*       (Each * = $100)
*       Store 1: **********
*       Store 2: ************
*       Store 3: ****************** 
*       Store 4: ********
*       Store 5: *******************
*
*
* 	Jesus Hilario Hernandez
* 	June 26th 2018
*
********************************************************************/
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
        store_1_hundreds, 
        store_2_hundreds, 
        store_3_hundreds, 
        store_4_hundreds, 
        store_5_hundreds;

    cout << "\nEnter today's sales for store 1: ";
    cin >> store_1;
    store_1_hundreds = store_1 / HUNDRED;
    cout << "Enter today's sales for store 2: ";
    cin >> store_2;
    store_2_hundreds = store_2 / HUNDRED;
    cout << "Enter today's sales for store 3: ";
    cin >> store_3;
    store_3_hundreds = store_3 / HUNDRED;
    cout << "Enter today's sales for store 4: ";
    cin >> store_4;
    store_4_hundreds = store_4 / HUNDRED;
    cout << "Enter today's sales for store 5: ";
    cin >> store_5;
    store_5_hundreds = store_5 / HUNDRED;


    cout << "\nSALES BAR CHART" << endl;
    cout << "(Each * = $100)" << endl;
    cout << "Store 1: ";
    for (int i = MIN_NUMBER; i < store_1_hundreds; i++)
    {
        cout << '*';
    }
    cout << endl;

    cout << "Store 2: ";
    for (int i = MIN_NUMBER; i < store_2_hundreds; i++)
    {
        cout << '*';
    }
    cout << endl;

    cout << "Store 3: ";
    for (int i = MIN_NUMBER; i < store_3_hundreds; i++)
    {
        cout << '*';
    }
    cout << endl;

    cout << "Store 4: ";
    for (int i = MIN_NUMBER; i < store_4_hundreds; i++)
    {
        cout << '*';
    }
    cout << endl;
    
    cout << "Store 5: ";
    for (int i = MIN_NUMBER; i < store_5_hundreds; i++)
    {
        cout << '*';
    }
    cout << '\n' << endl;

    return 0;
}

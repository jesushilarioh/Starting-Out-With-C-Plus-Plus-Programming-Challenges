#include <iostream>
#include <cstdlib>  // For rand() and srand()
#include <ctime>    // For time() function
using namespace std;

void coinToss();
int inputValidate(int);

int main()
{
    int choice;
    unsigned seed = time(0);
    srand(seed);

    cout << "How many times should the coin be tossed? ";
    choice = inputValidate(choice);

    for (int i = 0; i < choice; i++)
        coinToss();

    return 0;
}

/********************************************************
 * inputValidate()                                      *
 ********************************************************/
int inputValidate(int num)
{
    while(!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

/********************************************************
 * coinToss()                                           *
 ********************************************************/
void coinToss()
{
    const int MIN_VALUE = 1,
              MAX_VALUE = 2;
    
    int coin;

    coin = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;

    cout << (coin == MIN_VALUE ? "Heads" : "Tails") << endl;
}
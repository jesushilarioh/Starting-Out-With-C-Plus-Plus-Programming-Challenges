#include <iostream>
using namespace std;

int inputValidate(int);
bool isPrime(int);

int main()
{
    int number;

    cout << "Enter a number: ";
    number = inputValidate(number);

    cout << "Your number is "
         << (isPrime(number) ? "PRIME." : "NOT PRIME.")
         << endl;

    return 0;
} // END int main()

int inputValidate(int num)
{
    
    while(!(cin >> num) || num < 0)
    {
        cout << "Error. Number must not be "
             << " 0 or greater:";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return num;
}

bool isPrime(int number)
{
    int isPrime = 0;
    
    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
            isPrime++;
    }
    
    return isPrime == 2 ? 1 : 0;
    
}
#include <iostream>
#include <fstream>

using namespace std;

bool isPrime(int);

int main()
{
    // 1. Open
    ofstream outputFile;
    outputFile.open("primeNumber.txt");

    // 2. Process
    if (outputFile)
    {
        for (int i = 1; i <= 100; i++)
        {
            if(isPrime(i))
                outputFile << i << endl;
        }

        // 3. Close
        outputFile.close();
        cout << "Numbers written to file." << endl;
    }
    else
    {
        cout << "Error opening the file.\n";
    }

    return 0;
} // END int main()

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
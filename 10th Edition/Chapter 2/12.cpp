/*
12. Land Calculation
One acre of land is equivalent to 43,560 square feet. Write a program that calculates the number of acres in a tract of land with 391,876 square feet.
*/
#include <iostream>
using namespace std;

int main()
{
    const int ONE_ACRE_OF_LAND = 43560;

    int numberOfAcres = 391876,
        totalAcreage = numberOfAcres / ONE_ACRE_OF_LAND;
    
    cout << endl
         << "1 Acre             = " << ONE_ACRE_OF_LAND << endl
         << "Number of acres    = " << numberOfAcres << endl
         << "Total acreage      = " << totalAcreage << endl
         << endl;

    return 0;
}
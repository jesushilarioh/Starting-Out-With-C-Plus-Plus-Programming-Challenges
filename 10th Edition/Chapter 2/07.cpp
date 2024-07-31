/********************************************************************
*
*	07. OCEAN LEVELS
*       Assuming the ocean's level is currently rising at about 1.5
*       millimeters per year, write a program the displays:
*
*       - The number of millimeters higher than the current level that
*           the ocean's level will be in 5 years
*
*       - The number of millimeters higher than the current level that
*           the ocean's level will be in 7 years
*
*       - The number of millimeters higher than the current level that
*           the ocean's level will be in 10 years
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const double MIL_PER_YEAR = 1.5;

    int years1 = 5,
        years2 = 7,
        years3 = 10;
        
    float mils_after_5 = MIL_PER_YEAR * years1,
          mils_after_7 = MIL_PER_YEAR * years2,
          mils_after_10 = MIL_PER_YEAR * years3;
    
    cout << endl
         << "In " << years1 << " years, the ocean's level will grow " << mils_after_5 << " millimeters higher." << endl
         << "In " << years2 << " years, the ocean's level will grow " << mils_after_7 << " millimeters higher." << endl
         << "In " << years3 << " years, the ocean's level will grow " << mils_after_10 << " millimeters higher." << endl
         << endl;
    
    return 0;
}
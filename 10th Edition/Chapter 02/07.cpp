/*

07. OCEAN LEVELS
video walk through: https://youtu.be/aWj0rbOtMOw
video walk through: https://youtu.be/aWj0rbOtMOw
video walk through: https://youtu.be/aWj0rbOtMOw

*/
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
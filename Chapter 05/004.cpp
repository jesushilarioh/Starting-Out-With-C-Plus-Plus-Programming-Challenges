#include <iostream>
using namespace std;
int main()
{
    const float CALORIES_BURNED_PER_MIN = 3.6;

    float calories_burned = 0;

    for (int i = 5; i <= 30; i += 5)
    {
        calories_burned = (i * CALORIES_BURNED_PER_MIN);

        cout << "Calories burned after " << i << " minutes = " 
             << calories_burned << endl;
    }

    return 0;
}
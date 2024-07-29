#include <iostream>
using namespace std;
int main()
{
    const float RISE_PER_YEAR = 1.5; 

    float number_of_millimeters_each_year = 0;

    cout << "--------------------------------------------------\n";
    for (int i = 1; i <= 25; i++)
    {
        number_of_millimeters_each_year += RISE_PER_YEAR;
        cout << "Year " << i << ":    " 
             << number_of_millimeters_each_year 
             << endl;
    }
    cout << "--------------------------------------------------\n";


    return 0;
}

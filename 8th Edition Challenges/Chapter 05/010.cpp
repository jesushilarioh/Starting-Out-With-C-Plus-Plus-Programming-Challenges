#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    const int NUM_OF_MONTHS = 12;

    int num_of_years,
        total_num_of_months = 0;

    double rainfall,
           total_rainfall,
           average_rainfall_per_month;

    cout << "Enter number of years: ";
    cin >> num_of_years;
    cout << "You've entered " 
         << num_of_years 
         << " years." 
         << endl;

    for(int i = 0; i < num_of_years; i++)
    {
        cout << "Year " << (i + 1) << ": " << endl;
        for(int j = 0; j < NUM_OF_MONTHS; j++)
        {
            cout << "How much rainfall (inches)\n"
                 << "for month " << (j + 1) << ": ";
            cin >> rainfall;

            total_rainfall += rainfall;

            total_num_of_months++;
        }
    }

    average_rainfall_per_month = total_rainfall / 
                                 total_num_of_months;

    cout << setprecision(2) << fixed;
    cout << "Total number of months = " 
         << total_num_of_months << endl;

    cout << "Total inches of rainfall = " 
         << total_rainfall << endl;

    cout << "Average rainfall per month = " 
         << average_rainfall_per_month << endl;
    

    return 0;
}
// Blog post: https://www.jesushilarioh.com/chapter-5-10-average-rainfall-tony-gaddis-starting-out-with-c-plus-plus
// YouTube video: https://youtu.be/eWzFQKSXhwE

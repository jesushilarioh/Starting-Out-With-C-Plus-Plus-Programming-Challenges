/*

2. Sales Prediction

Video walk through here: https://youtu.be/625ZvaRfteg
Video walk through here: https://youtu.be/625ZvaRfteg
Video walk through here: https://youtu.be/625ZvaRfteg

*/
#include <iostream>
using namespace std;

int main()
{
    float total_sales_percent = .58,
          total_sales_this_year = 8.6E6, // $8,600,000 or $8.6 million
          total_predicted_sales = total_sales_percent * total_sales_this_year;

    cout << endl
         << "The East Coast division will generate " 
         << total_predicted_sales 
         << " in sales this year."
         << endl;

    return 0;
}
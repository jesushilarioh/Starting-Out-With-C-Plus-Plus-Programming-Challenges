#include <iostream>
using namespace std;

double inputValidate(double, double);
void getInfo(double &, double &, double &);
void calcAndDisplay(double, double, double);

int main()
{
    const double CHARGE_PER_HOUR = 25.00;
    double num_of_rooms,
           price_per_gal,
           sqft_to_paint = 0;

    getInfo(num_of_rooms, price_per_gal, sqft_to_paint);
    calcAndDisplay(num_of_rooms, price_per_gal, sqft_to_paint);

    return 0;
} // END int main()

void getInfo(double &num_of_rooms,
             double &price_per_gal,
             double &sqft_to_paint)
{
     // Get number of rooms to be painted
     cout << "Number of rooms to be painted: ";
     num_of_rooms = inputValidate(num_of_rooms, 1);

     for (int i = 0; i < num_of_rooms; i++)
     {
          // Get sqft of wall space per room
          cout << "Sq. Ft. of wall space to be painted "
               << "in room " << (i + 1) << ": ";

          sqft_to_paint += inputValidate(sqft_to_paint, 0);
     }

     // Get price of paint per gallon
     cout << "Price of paint per gallon: $";
     price_per_gal = inputValidate(price_per_gal, 10.00);

}

double inputValidate(double number, double limit_number)
{
    
    while(!(cin >> number) || number < limit_number)
    {
        cout << "Error. Number must not be "
             << " " << limit_number << " or greater:";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return number;
}

void calcAndDisplay(double num_of_rooms, 
                    double price_per_gal, 
                    double sqft_to_paint)
{
     double gals_of_paint_req,
            labor_required,
            cost_of_paint,
            labor_charges,
            total_cost;

     // Calculate:
     gals_of_paint_req  = sqft_to_paint / 110.0;
     labor_required = gals_of_paint_req * 8.0;
     cost_of_paint  = price_per_gal * gals_of_paint_req;
     labor_charges  = labor_required * 25.00;
     total_cost     = labor_charges + cost_of_paint;

     // Display:
     cout << "Total SqFt to paint  : " 
          << sqft_to_paint      
          << endl;

     cout << "Price per gallon     : " 
          << price_per_gal      
          << endl;

     // • The number of gallons of paint required
     cout << "Gallons required     : " 
          << gals_of_paint_req      
          << endl;

     // • The hours of labor required
     cout << "Hours required       : " 
          << labor_required    
          << endl;

     // • The cost of the paint
     cout << "Cost of paint        :$" 
          << cost_of_paint     
          << endl;

     // • The labor charges
     cout << "Labor charges        :$" 
          << labor_charges    
          << endl;

     // • The total cost of the paint job
     cout << "Total cost of job    :$"  
          << total_cost  
          << endl;
}
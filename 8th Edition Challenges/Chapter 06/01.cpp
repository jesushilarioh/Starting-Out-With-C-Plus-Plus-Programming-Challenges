#include <iostream>
#include <iomanip>

using namespace std;

double calculateRetail(double, double);
double inputValidate(double);

int main()
{
    double wholesale_cost,
           markup_percent,
           retail_price;

    cout << "Enter wholesale cost: ";
    wholesale_cost = inputValidate(wholesale_cost);

    cout << "Enter it's markup percentage: ";
    markup_percent = inputValidate(markup_percent) * .01;

    retail_price = calculateRetail(wholesale_cost, markup_percent);

    cout << "Markup percentage = %" 
         << (markup_percent / .01) 
         << endl;

    cout << setprecision(2) << fixed
    
         << "Wholesale cost    = $" 
         << wholesale_cost 
         << endl

         << "Retail price      = $" 
         << retail_price 
         << endl;
    
    return 0;
}

double calculateRetail(double num1, double num2)
{
    return (num1 * num2) + num1;
}

double inputValidate(double num)
{
    while(!(cin >> num) || (num < 0))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(123, '\n');
    }
    return num;
}
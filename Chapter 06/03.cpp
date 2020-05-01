#include <iostream>
#include <string>

using namespace std;

const string NE = "North East",
             NW = "North West",
             SE = "South East",
             SW = "South West";

double inputValidate(double);
double getSales(string);
void findHighest(double, double, double, double);
void checkIfHighest(double, double, double, double, string);

int main() 
{
    double NE_sales,
           NW_sales,
           SE_sales,
           SW_sales;
           
    NE_sales = getSales(NE);
    NW_sales = getSales(NW);
    SE_sales = getSales(SE);
    SW_sales = getSales(SW);

    findHighest(NE_sales, NW_sales, SE_sales, SW_sales);

    return 0;
}

double inputValidate(double num)
{
    while(!(cin >> num) || num < 0)
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return num;
}

double getSales(string division)
{
    double sales;
    cout << "What is the quarterly sales figure\n"
         << "for " << division << "? $";
    sales = inputValidate(sales);
    cout << endl;
    return sales;
}

void findHighest(double NE_sales, 
                 double NW_sales, 
                 double SE_sales, 
                 double SW_sales)
{
    cout << "The highest grossing division is\n";

    checkIfHighest(NE_sales, NW_sales, SE_sales, SW_sales, NE);
    checkIfHighest(NW_sales, NE_sales, SE_sales, SW_sales, NW);
    checkIfHighest(SE_sales, NE_sales, NW_sales, SW_sales, SE);
    checkIfHighest(SW_sales, NE_sales, NW_sales, SE_sales, SW);
  
    cout << endl << endl;
}

void checkIfHighest(double sales1, 
                     double sales2, 
                     double sales3, 
                     double sales4,
                     string division)
{
   if (sales1 >= sales2)
   {
       if (sales1 >= sales3)
       {
           if (sales1 >= sales4)
            {
                cout << division << " with a sales figure at: "
                     << "$" << sales1
					 << endl;
            }
       }          
   }
}
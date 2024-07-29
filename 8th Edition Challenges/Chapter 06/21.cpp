#include <iostream>
#include <string>

using namespace std;

void getInfo(string, double &);
double profit(double, double, double, double, double);
double inputValidate(double);
void displayCalculation(double, int);

int main()
{
    double NS,  // Number of shares
           PP,  // Purchase price per share
           PC,  // Purchase commission paid
           SP,  // Sale price per share
           SC,  // Sale commission paid
           profit_or_loss,
           number_of_stock_sales,
           total = 0;
    
    getInfo("How many stock sales? ", number_of_stock_sales);

    for (int i = 0; i < number_of_stock_sales; i++)
    {
        cout << "\nInfo for stock sale #" << (i + 1) << endl;

        getInfo("Number of shares: ", NS);
        getInfo("Purchase price per share: ", PP);
        getInfo("Purchase commission paid: ", PC);
        getInfo("Sale price per share: ", SP);
        getInfo("Sale commission paid: ", SC);

        profit_or_loss = profit(NS, PP, PC, SP, SC);

        total += profit_or_loss;

        displayCalculation(profit_or_loss, (i + 1));
    }

    cout << "\nTotal profit or loss = $"
         << total
         << endl;

    return 0;
} // END int main()

void getInfo(string prompt, double &user_input)
{
    cout << prompt;
    user_input = inputValidate(user_input);
}

double inputValidate(double num1)
{
    
    while(!(cin >> num1) || num1 < 0)
    {
        cout << "Error. Number must not be "
             << " 0 or greater:";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return num1;
}

double profit(double NS, 
              double PP, 
              double PC, 
              double SP, 
              double SC)
{
    cout << "NS = " << NS << endl; 
    cout << "PP = " << PP << endl; 
    cout << "PC = " << PC << endl; 
    cout << "SP = " << SP << endl; 
    cout << "SC = " << SC << endl;    

    return ((NS * SP) - SC) - ((NS * PP) + PC);
}

void displayCalculation(double profit_or_loss, int stock_number)
{
    cout << "The sale of stock #" << stock_number << " resulted in "
         << (profit_or_loss < 0 ? "LOSS." : "PROFIT.")
         << "At $" << profit_or_loss
         << endl;
}
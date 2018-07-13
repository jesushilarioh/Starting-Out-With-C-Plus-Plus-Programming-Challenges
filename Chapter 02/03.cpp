/********************************************************************
*
*	03. SALES PREDICTION
*       Write a program that will compute the total sales tax on a
*       $95 purchase. Assume the state sales tax is 4% and the
*       county sales tax is 2 percent.
*
* 	Jesus Hilario Hernandez
* 	December 17th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const float STATE_TAX = .04,
          COUNTY_TAX = .02;
    int purchase = 95;
        
    float total_state_purchase = purchase * STATE_TAX,
          total_county_purchase = purchase * COUNTY_TAX;

    cout << "The total state tax on $95 is $";
    cout << total_state_purchase << endl;
    cout << "The total county tax on $95 is $";
    cout << total_county_purchase << endl;
    return 0;
}

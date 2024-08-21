/********************************************************************
*
*	06. ANNUAL PAY
*       Suppose an employee gets paid every two weeks and earns $2,200
*       each pay period. In a year the employee gets paid 26 times.
*       Write a program that defines the following variables:
*
*       payAmount - 2200.0
*       payPeriods - 26
*       annualPay - to be calculated
*
*       The program should calculate the employee's total annual pay by
*       multiplying the employee's pay amount by the number of pay
*       periods in a year and store the result in the annualPay variable.
*       Display the total annual pay on the screen.
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    double payAmount = 2200.0, 
           payPeriods = 26,
           annualPay = payAmount * payPeriods;

    cout << endl 
         << "Total annual pay = $" << annualPay 
         << endl
         << endl;

    return 0;
}
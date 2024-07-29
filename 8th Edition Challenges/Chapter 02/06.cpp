/********************************************************************
*
*	06. ANNUAL PAY
*       Suppose an employee gets paid every two weeks and earns $2,200
*       each pay period. In a year the employee gets paid 26 times.
*       Write a program that defines the following variables:
*
*       payAmount - 2200.0.
*       payPeriods - 26.
*       annualPay - to be calculated.
*
*       The program should calculate the employee's total annual pay by
*       multiplying the employee's pay amount by the number of pay
*       periods in a year and store the result in the annualPay variable.
*       Display the total annual pay on the screen.
*
* 	Jesus Hilario Hernandez
* 	December 18th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    const double PERIODS = 26;
    double pay_amount = 2200.0,
           annual_pay = pay_amount * PERIODS;

    cout << endl << endl;
    cout << "Total annual pay = $" << annual_pay << endl;
    cout << endl;
    return 0;
}
/********************************************************************
*
*	  015. PAYROLL REPORT
*
*       Write a program that displays a weekly payroll report. A loop in
*       the program should ask the user for the employee number, gross pay,
*       state tax, federal tax, and FICA withholdings. The loop will
*       terminate when 0 is entered for the employee number. After the
*       data is entered, the program should display totals for gross
*       pay, state tax, federal tax, FICA withholdings, and net pay.
*
*       Input Validation:
*           Do not accept negative numbers for any of the items entered.
*           Do not accept values for state, federal, or FICA withholdings
*           that are greater than the gross pay. If the sum state
*           tax + federal tax + FICA withholdings for any employee is
*           greater than gross pay, print an error message and ask the
*           user to reenter the data for that employee.
*
* 	Jesus Hilario Hernandez
* 	June 9th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
    float employee_number,  // Sentinel
          // User input variables
          gross_pay,
          state_tax,
          federal_tax,
          FICA_withholds,
          // Accumulator Variables
          total_gross_pay,
          total_state_tax,
          total_federal_tax,
          total_FICA_withholds;

    // A loop in the program should ask the user for the employee number,
    // gross pay, state tax, federal tax, and FICA withholdings.
    // The loop will terminate when 0 is entered for the employee number.
    //  (while) loop
    cout << "Enter employee # (enter 0 to end): ";
    while (!(cin >> employee_number) || employee_number < 0)
    {
        cout << "Error. Employee # must be greater that 0. Employee #: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    while (employee_number != 0)
    {
        cout << "Enter gross pay: ";
        while (!(cin >> gross_pay) || gross_pay < 0)
        {
            cout << "Error. Gross pay must be greater that 0. Gross Pay: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        total_gross_pay += gross_pay;


        cout << "Enter state tax: ";
        while (!(cin >> state_tax) || state_tax < 0 || state_tax > gross_pay)
        {
            cout << "Error. State tax must be greater that 0 " << endl;
            cout << "and greater than gross pay." << endl;
            cout << "Re-enter state tax: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        total_state_tax += state_tax;


        cout << "Enter federal tax: ";
        while (!(cin >> federal_tax) || federal_tax < 0 || federal_tax > gross_pay)
        {
            cout << "Error. Federal tax must be greater that 0 " << endl;
            cout << "and greater than gross pay." << endl;
            cout << "Re-enter federal tax: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        total_federal_tax += federal_tax;


        cout << "Enter FICA withholdings: ";
        while (!(cin >> FICA_withholds) || FICA_withholds < 0 || FICA_withholds > gross_pay)
        {
            cout << "Error. FICA withholdings must be greater that 0 " << endl;
            cout << "and greater than gross pay." << endl;
            cout << "Re-enter FICA withholdings: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        total_FICA_withholds += FICA_withholds;


        // If the sum state tax + federal tax + FICA withholdings for any
        // employee is greater than gross pay, print an error message
        // and ask the user to reenter the data for that employee.
        float sum = total_state_tax + total_federal_tax + FICA_withholds;

        while (sum > gross_pay)
        {
            total_state_tax -= state_tax;
            total_federal_tax -= federal_tax;
            total_FICA_withholds -= FICA_withholds;

            cout << "Oops. The sum of state tax, federal, and FICA" << endl;
            cout << "withholdings is greater than gross pay. Re-enter" << endl;
            cout << "the information again: " << endl;

            cout << "Enter gross pay: ";
            while (!(cin >> gross_pay) || gross_pay < 0)
            {
                cout << "Error. Gross pay must be greater that 0. Gross Pay: ";
                cin.clear();
                cin.ignore(123, '\n');
            }
            total_gross_pay += gross_pay;

            cout << "Enter state tax: ";
            while (!(cin >> state_tax) || state_tax < 0 || state_tax > gross_pay)
            {
                cout << "Error. State tax must be greater that 0 " << endl;
                cout << "and greater than gross pay." << endl;
                cout << "Re-enter state tax: ";
                cin.clear();
                cin.ignore(123, '\n');
            }
            total_state_tax += state_tax;

            cout << "Enter federal tax: ";
            while (!(cin >> federal_tax) || federal_tax < 0 || federal_tax > gross_pay)
            {
                cout << "Error. Federal tax must be greater that 0 " << endl;
                cout << "and greater than gross pay." << endl;
                cout << "Re-enter federal tax: ";
                cin.clear();
                cin.ignore(123, '\n');
            }
            total_federal_tax += federal_tax;

            cout << "Enter FICA withholdings: ";
            while (!(cin >> FICA_withholds) || FICA_withholds < 0 || FICA_withholds > gross_pay)
            {
                cout << "Error. FICA withholdings must be greater that 0 " << endl;
                cout << "and greater than gross pay." << endl;
                cout << "Re-enter FICA withholdings: ";
                cin.clear();
                cin.ignore(123, '\n');
            }
            total_FICA_withholds += FICA_withholds;

            sum = total_state_tax + total_federal_tax + FICA_withholds;
        }


        cout << "Enter employee # (enter 0 to end): ";
        while (!(cin >> employee_number) || employee_number < 0)
        {
            cout << "Error. Employee # must be greater that 0. Employee #: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

    }

    // After the data is entered, the program should display totals for
    // gross pay, state tax, federal tax, FICA withholdings, and net pay.
    cout << "\nTotal gross pay for all employees = ";
    cout << total_gross_pay;
    cout << "\nTotal state tax for all employees = ";
    cout << total_state_tax;
    cout << "\nTotal federal tax for all employess = ";
    cout << total_federal_tax;
    cout << "\nTotal FICA withholdings for all employees = ";
    cout << total_FICA_withholds;
    cout << '\n' << endl;
    return 0;
}

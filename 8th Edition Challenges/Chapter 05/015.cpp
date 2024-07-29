#include <iostream>
using namespace std;
int main()
{
    float employee_number,  // Sentinel
          
          // User input variables
          gross_pay,
          state_tax_percentage,
          federal_tax_percentage,
          FICA_withholds,
          // Accumulator Variables
          total_gross_pay,
          total_state_tax,
          total_federal_tax,
          total_FICA_withholds;

    cout << "Enter employee # (enter 0 to end): ";
    while (!(cin >> employee_number) || employee_number < 0)
    {
        cout << "Error. Employee # must be greater "
             << "that 0. Employee #: ";
        cin.clear();
        cin.ignore(123, '\n');
    }

    while (employee_number != 0)
    {
        cout << "Enter gross pay: ";
        while (!(cin >> gross_pay) || gross_pay < 0)
        {
            cout << "Error. Gross pay must be greater " 
                 << "than 0. Gross Pay: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        total_gross_pay += gross_pay;

        cout << "Enter state tax (%): "; // 
        while (
                !(cin >> state_tax_percentage) || 
                 state_tax_percentage < 0      || 
                 state_tax_percentage > gross_pay
              )
        {
            cout << "Error. State tax must be greater "
                 << "that 0 \nand greater than gross pay." 
                 << "\nRe-enter state tax: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        total_state_tax += (gross_pay * (state_tax_percentage / 100));

        cout << "Enter federal tax (%): ";
        while (
                !(cin >> federal_tax_percentage) || 
                federal_tax_percentage < 0       || 
                federal_tax_percentage > gross_pay
              )
        {
            cout << "Error. Federal tax must be greater "
                 << "that 0 \nand greater than gross pay." 
                 << "\nRe-enter federal tax: ";
            cin.clear();
            cin.ignore(123, '\n');
        }

        total_federal_tax += (gross_pay * (federal_tax_percentage / 100));

        cout << "Enter FICA withholdings: ";
        while (
                !(cin >> FICA_withholds) || 
                FICA_withholds < 0       || 
                FICA_withholds > gross_pay
              )
        {
            cout << "Error. FICA withholdings must be "
                 << "greater that 0 \nand greater than "
                 << "gross pay.\nRe-enter FICA "
                 << "withholdings: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
        total_FICA_withholds += FICA_withholds;

        float sum = (gross_pay * (state_tax_percentage / 100))   + 
                    (gross_pay * (federal_tax_percentage / 100)) + 
                    FICA_withholds;

        while (sum > gross_pay)
        {
            total_state_tax -= state_tax_percentage;
            total_federal_tax -= federal_tax_percentage;
            total_FICA_withholds -= FICA_withholds;

            cout << "Oops. The sum of state tax,\n"
                 << "federal, and FICA withholdings\nis"
                 << "greater than gross pay. Re-enter\n"
                 << "the information again: \n";

            cout << "Enter gross pay: ";
            while (!(cin >> gross_pay) || gross_pay < 0)
            {
                cout << "Error. Gross pay must be greater\n"
                     << "that 0. Gross Pay: ";
                cin.clear();
                cin.ignore(123, '\n');
            }
            total_gross_pay += gross_pay;

            cout << "Enter state tax (%): ";
            while (
                    !(cin >> state_tax_percentage) || 
                    state_tax_percentage < 0       || 
                    state_tax_percentage > gross_pay
                  )
            {
                cout << "Error. State tax must be "
                     << "greater that 0\nand greater than"
                     << "gross pay.\nRe-enter state tax: ";
                cin.clear();
                cin.ignore(123, '\n');
            }
            total_state_tax += (gross_pay * (state_tax_percentage / 100));

            cout << "Enter federal tax (%): ";
            while (
                    !(cin >> federal_tax_percentage) || 
                    federal_tax_percentage < 0       || 
                    federal_tax_percentage > gross_pay
                  )
            {
                cout << "Error. Federal tax must be "
                     << "greater that 0\nand greater "
                     << "than gross pay.\nRe-enter "
                     << "federal tax: ";
                cin.clear();
                cin.ignore(123, '\n');
            }
            total_federal_tax += (gross_pay * 
                                 (federal_tax_percentage / 100));

            cout << "Enter FICA withholdings: ";
            while (
                    !(cin >> FICA_withholds) || 
                    FICA_withholds < 0       || 
                    FICA_withholds > gross_pay
                  )
            {
                cout << "Error. FICA withholdings must "
                     << "be greater that 0\nand greater "
                     << "than gross pay.\nRe-enter FICA "
                     << "withholdings: ";
                cin.clear();
                cin.ignore(123, '\n');
            }
            total_FICA_withholds += FICA_withholds;

            sum = (gross_pay * (state_tax_percentage / 100))   + 
                  (gross_pay * (federal_tax_percentage / 100)) + 
                  FICA_withholds;
        }

        cout << "Enter employee # (enter 0 to end): ";
        while (
                !(cin >> employee_number) || 
                employee_number < 0
              )
        {
            cout << "Error. Employee # must be greater "
                 << "than 0. Employee #: ";
            cin.clear();
            cin.ignore(123, '\n');
        }
    }

    cout << "\nTotal gross pay for all employees         = $"
         << total_gross_pay

         << "\nTotal state tax for all employees         = $"
         << total_state_tax

         << "\nTotal federal tax for all employees       = $"
         << total_federal_tax

         << "\nTotal FICA withholdings for all employees = $"
         << total_FICA_withholds

         << endl << endl;

    return 0;
}
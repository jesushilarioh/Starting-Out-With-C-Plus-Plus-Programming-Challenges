/************************************************************
 *
 *   09. Payroll
 * 
 *  Write a program that uses the following arrays:
 * 
 * • empId: an array of seven long integers to hold 
 * employee identification numbers. The array should be 
 * initialized with the following numbers:
 * 
 * 5658845 4520125 7895122 8777541 8451277 1302850 7580489
 * 
 * • hours: an array of seven integers to hold the number 
 * of hours worked by each employee
 * 
 * • payRate: an array of seven doubles to hold each 
 * employee’s hourly pay rate
 * 
 * • wages: an array of seven doubles to hold each 
 * employee’s gross wages
 * 
 * The program should relate the data in each array 
 * through the subscripts. For example, the number in 
 * element 0 of the hours array should be the number 
 * of hours worked by the employee whose identification 
 * number is stored in element 0 of the empId array.
 * That same employee’s pay rate should be stored in 
 * element 0 of the payRate array.
 * 
 * The program should display each employee number and 
 * ask the user to enter that employee’s hours and pay 
 * rate. It should then calculate the gross wages for that 
 * employee (hours times pay rate) and store them in the 
 * wages array. After the data has been entered for all the 
 * employees, the program should display each employee’s 
 * identification number and gross wages.
 * 
 * Input Validation: Do not accept negative values for 
 * hours or numbers less than 15.00 for pay rate.
 *
 *************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;

int inputValidate(int, int = 0);
double inputValidate(double, double = 15.00);
void getEmployeeInfo(const int, int[], double[], double[], double[]);
void displayEmployeeInfo(const int, const int, const double);

int main()
{
    const int NUMBER_OF_EMPLOYEES = 7;
    int empId[] = { 5658845, 
                     4520125, 
                     7895122, 
                     8777541, 
                     8451277, 
                     1302850, 
                     7580489 };

    double hours[NUMBER_OF_EMPLOYEES],
           payRate[NUMBER_OF_EMPLOYEES], 
           wages[NUMBER_OF_EMPLOYEES];

    getEmployeeInfo(NUMBER_OF_EMPLOYEES, empId, hours, payRate, wages);
    
    displayEmployeeInfo(NUMBER_OF_EMPLOYEES, empId, wages);

    return 0;
}

int inputValidate(int user_number, int condition_number)
{
    while (!(cin >> user_number) || user_number < condition_number)
    {
        cout << "Error. Your number must be "
             << condition_number
             << " or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    
    return user_number;
}

double inputValidate(double user_number, double condition_number)
{
    while (!(cin >> user_number) || user_number < condition_number)
    {
        cout << "Error. Your number must be "
             << condition_number
             << " or greater: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return user_number;
}

void getEmployeeInfo(const int NUMBER_OF_EMPLOYEES, 
                     int empId[],
                     double hours[],
                     double payRate[],
                     double wages[])
{
        for (int i = 0; i < NUMBER_OF_EMPLOYEES; i++)
    {
        cout << "Enter info for employee #" << empId[i] << " :" << endl; 

        cout << "hours worked =  ";
        hours[i] = inputValidate(hours[i]);

        cout << "pay rate     = $";
        payRate[i] = inputValidate(payRate[i]);

        wages[i] = hours[i] * payRate[i];

        cout << endl;
    }
}

void displayEmployeeInfo(const int NUMBER_OF_EMPLOYEES, 
                         const int empId[], 
                         const double wages[])
{
    cout << setprecision(2) << fixed;
    cout << "Employee ID number and wages below: " << endl;
    for (int i = 0; i < NUMBER_OF_EMPLOYEES; i++)
    {
        cout << "Wages for Employee #" << empId[i]
             << " = $"
             << wages[i]
             << endl;
    }

}
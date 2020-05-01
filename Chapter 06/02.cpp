#include <iostream>
#include <string>
using namespace std;

double inputValidate(double num);
double getLength(double);
double getWidth(double);
double getArea(double, double);
void displayData(double, double, double);

int main()
{
    double length,
           width,
           area;

    length = getLength(length);
    width  = getWidth(width);
    area   = getArea(length, width);
    displayData(length, width, area);

    return 0;
}

double getLength(double num)
{
    cout << "Enter rectangle's length: ";
    num = inputValidate(num);
    return num;
}

double getWidth(double num)
{
    cout << "Enter rectangle's width: ";
    num = inputValidate(num);
    return num; 
}

double getArea(double length, double width)
{
    return length * width;
}

void displayData(double l, double w, double a)
{
    cout << "Length = " << l << endl;
    cout << "Width  = " << w << endl;
    cout << "Area   = " << a << endl;
}

double inputValidate(double num)
{
    while(!(cin >> num))
    {
        cout << "Error. An integer above 0 must be entered: ";
        cin.clear();
        cin.ignore(1200, '\n');
    }
    return num;
}
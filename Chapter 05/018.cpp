/********************************************************************
*
*	  018. POPULATION BAR CHART
*
*       Write a program that produces a bar chart showing the 
*       population growth of Prairieville, a small town in the 
*       Midwest, at 20-year intervals during the past 100 years. 
*       The program should read in the population figures (rounded 
*       to the nearest 1,000 people) for 1900, 1920, 1940, 1960, 
*       1980, and 2000 from a file. For each year it should display 
*       the date and a bar consisting of one asterisk for each 1,000 
*       people. The data can be found in the People.txt file.
*
*       Here is an example of how the chart might begin:
*
*       PRAIRIEVILLE POPULATION GROWTH 
*       (each * represents 1,000 people) 
*       1900 **
*       1920 ****
*       1940 *****
*
* 	Jesus Hilario Hernandez
* 	July 5th 2018
*
********************************************************************/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream input_file;
    string years;

    cout << "\nPRAIRIEVILLE POPULATION GROWTH" << endl;
    cout << "(each * represents 1,000 people)\n" << endl;

    input_file.open("People.txt");

    while(getline(input_file, years))
        cout << years << endl;

    input_file.close();

    cout << endl;
    
    return 0;
}
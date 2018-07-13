/********************************************************************
*
*	14. PERSONAL INFORMATION
*       Write a program that displays the following pieces of
*       information, each on a separate line:
*
*       Your name
*       Your address, with city, state, and ZIP code
*       Your telephone number
*       Your college major
*
*       Use only a single cout statement to display all of this
*       information.
*
* 	Jesus Hilario Hernandez
* 	December 15th 2017
*
*
********************************************************************/
#include <iostream>
using namespace std;

int main()
{
    string name = "Jesus Hilario Hernandez",
           address = "1234 10 St. Texas",
           phone = "123-123-1234",
           major = "Comp. Sci.";

    cout << endl;
    cout << "Name: "    << name    << endl;
    cout << "Address: " << address << endl;
    cout << "Phone: "   << phone   << endl;
    cout << "Major: "   << major   << endl;
    cout << endl;
    return 0;
}
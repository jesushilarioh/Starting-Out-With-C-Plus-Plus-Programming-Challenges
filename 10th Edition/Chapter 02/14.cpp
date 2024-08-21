/*
14. Personal Information
Write a program that displays the following pieces of information, each on a separate line:

Your name
Your address, with city, state, and ZIP code 
Your telephone number
Your college major

Use only a single cout statement to display all of this information.

*/
#include <iostream>
using namespace std;

int main()
{
    string name = "John Doe",
           address = "12 address dr",
           phone = "444-444-4444",
           major = "Comp";

    cout << endl
         << "Name: "    << name    << endl
         << "Address: " << address << endl
         << "Phone: "   << phone   << endl
         << "Major: "   << major   << endl
         << endl;
         
    return 0;
}
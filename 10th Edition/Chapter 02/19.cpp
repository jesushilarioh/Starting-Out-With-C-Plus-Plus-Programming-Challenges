/*
19. Annual High Temperatures
The average July high temperature is 85 degrees Fahrenheit in New York City, 88 degrees Fahrenheit in Denver, and 106 degrees Fahrenheit in Phoenix. Write a program that calculates and reports what the new average July high temperature would be for each of these cities if temperatures rise by 2 percent.

*/
#include <iostream>
using namespace std;

int main()
{
    const float TEMP_RISE_PERCENT = 2;

    float newYorkTemp = 85,
          denverTemp = 88,
          phoenixTemp = 106;

    cout << endl
         << "Old Temps: "   << endl
         << "New York   = " << newYorkTemp << "˚F " << endl
         << "Denver     = " << denverTemp << "˚F " << endl
         << "Phoenix    = " << phoenixTemp << "˚F " << endl;

    // 2% rise calculation
    newYorkTemp = newYorkTemp + (newYorkTemp * (TEMP_RISE_PERCENT / 100));
    denverTemp = denverTemp + (denverTemp * (TEMP_RISE_PERCENT / 100));
    phoenixTemp = phoenixTemp + (phoenixTemp * (TEMP_RISE_PERCENT / 100));

    cout << endl
         << "New Temps: "   << endl
         << "New York   = " << newYorkTemp << "˚F " << endl
         << "Denver     = " << denverTemp << "˚F " << endl
         << "Phoenix    = " << phoenixTemp << "˚F " << endl
         << endl;

     // Screen Record
    
    return 0;
}
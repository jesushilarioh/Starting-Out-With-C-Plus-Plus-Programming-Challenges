/*
5. Male and Female Percentages
Write a program that asks the user for the number of males and the number of females registered in a class. The program should display the percentage of males and females in the class.

Hint: Suppose there are 8 males and 12 females in a class. There are 20 students in the class. The percentage of males can be calculated as 8/20 = 0.4, or 40 percent. The percentage of females can be calculated as 12/20 = 0.6, or 60 percent.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   
    int males,
        females;
    
    float malePercentage,
          femalePercentage,
          total; 
    
    cout << "\nHow many males in the class: ";
    cin >> males;
    cout << "\nHow many females: ";
    cin >> females;
    
    total = males + females;
    
    malePercentage = (males / total) * 100;
    femalePercentage = (females / total) * 100;
    
    cout << setprecision(1) << fixed;
    cout << endl
         << "Males      = " << males            << endl
         << "Females    = " << females          << endl
         << "Total      = " << total            << endl
         << "Male %     = " << malePercentage   << endl
         << "Female %   = " << femalePercentage << endl
         << endl;
    
    return 0;
}

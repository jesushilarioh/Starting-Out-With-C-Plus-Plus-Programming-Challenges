/********************************************************************
*
*	  05. Membership Fees Increase
*
*           A country club, which currently charges $2,500 per year
*           for membership, has announced it will increase its
*           membership fee by 4% each year for the next six years.
*           Write a program that uses a loop to display the
*           projected rates for the next six years.
*
* 	Jesus Hilario Hernandez
* 	March 12th 2018
*
********************************************************************/
#include <iostream>
using namespace std;
int main()
{
	// Constants
	const float CHARGES_PER_YEAR = 2500,
		        PER_OF_INCREASE_PER_YEAR = .04;
	// Variables
	float fee = CHARGES_PER_YEAR;

	// Use a loop to display projected rates for next 6 years
	for (int i = 0; i < 6; i++)
	{
		cout << "Fee for year " << (i + 1) << " = " << fee << endl;
		fee += (fee * PER_OF_INCREASE_PER_YEAR);
		// or
		// fee += (CHARGES_PER_YEAR * PER_OF_INCREASE_PER_YEAR);
	}
	// Terminate program
	return 0;
}

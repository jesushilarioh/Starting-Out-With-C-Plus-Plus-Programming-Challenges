#include <iostream>
using namespace std;
int main()
{
	const float CURRENT_CHARGE_PER_YEAR = 2500,
		        INCREASE_PERCENTAGE_PER_YEAR = .04;
				
	float fee = CURRENT_CHARGE_PER_YEAR;

	for(int i = 0; i < 6; i++)
	{
		cout << "Fee for year " << (i + 1) << " = " 
			 << fee 
			 << endl;
		// fee += (fee * INCREASE_PERCENTAGE_PER_YEAR);
		// or
		fee += (CURRENT_CHARGE_PER_YEAR * 
				INCREASE_PERCENTAGE_PER_YEAR);
	}
	
	return 0;
}
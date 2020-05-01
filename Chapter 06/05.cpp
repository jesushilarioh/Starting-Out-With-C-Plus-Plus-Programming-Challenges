#include <iostream>
#include <cmath>    // for pow() function
using namespace std;

const double g = 9.8; 

double fallingDistance(double);

int main()
{
	double d,
           t;

	for (int i = 0; i < 10; i++)
    {
		t = i + 1;
        d = fallingDistance(t);
        
        cout << t << " seconds =  "
             << d << " meters"
             << endl;
    }
	
  	return 0;
}

double fallingDistance(double falling_time)
{
    return (0.5) * g * pow(falling_time, 2);
}
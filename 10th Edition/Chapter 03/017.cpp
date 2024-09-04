/*

17. Math Tutor
Write a program that can be used as a math tutor for a young student. The program should display two random numbers to be added, such as

 247
+129
-----

The program should then pause while the student works on the problem. When the student is ready to check the answer, he or she can press a key and the program will display the correct solution:

 247
+129
-----
 376

*/
#include <iostream>
#include <cstdlib>  // For rand and srand functions
#include <ctime>    // For the time function
using namespace std;

int main()
{
    const int MIN_VALUE = 100,
              MAX_VALUE = 1000;
    
    int num_1,
        num_2,
        answer;
    
    // Get system time
    unsigned seed = time(0);
    
    // Seed the random number generator.
    srand(seed);
    
    cout << "\nThis program displays two random numbers to be added." << endl;
    
    num_1 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    num_2 = (rand() % (MAX_VALUE - MIN_VALUE + 1)) + MIN_VALUE;
    
    answer = num_1 + num_2;

    cout << " " << num_1 << endl
         << "+" << num_2 << endl
         << "-----"      << endl
         << endl;
    
    cout << "Press \"Enter\" to see solution";
    cin.get();
    cout << endl;
 
    cout << " "     << num_1    << endl
         << "+"     << num_2    << endl
         << "-----"             << endl
         << " "     << answer   << endl
         << endl;
    
    return 0;
}

/*
3. Test Average
Write a program that asks for five test scores. The program should calculate the aver- age test score and display it. The number displayed should be formatted in fixed-point notation, with one decimal point of precision.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const int NUM_OF_SCORES = 5;
    
    float score_1,
          score_2,
          score_3,
          score_4,
          score_5,
          average,
          total;
    
    cout << "\nEnter 5 test scores." << endl
         << "Press enter to continue";
    cin.get();
    
    cout << "\nScore 1: ";
    cin >> score_1;
    cout << "Score 2: ";
    cin >> score_2;
    cout << "Score 3: ";
    cin >> score_3;
    cout << "Score 4: ";
    cin >> score_4;
    cout << "Score 5: ";
    cin >> score_5;

    total = score_1 + 
            score_2 + 
            score_3 + 
            score_4 + 
            score_5;

    average = total / NUM_OF_SCORES;
    
    cout << setprecision(1) << fixed
         << "\nThe average test score is "
         << average << '\n' 
         << endl;
            
    return 0;
}

/**
 * 14. Lottery Application
 * 
 * Write a program that simulates a lottery. The program 
 * should have an array of five integers named lottery and 
 * should generate a random number in the range of 0 through 9 
 * for each element in the array. The user should enter five 
 * digits, which should be stored in an integer array named 
 * user. The program is to compare the corresponding elements 
 * in the two arrays and keep a count of the digits that 
 * match. For example, the following shows the lottery array 
 * and the user array with sample numbers stored in each. 
 * There are two matching digits (elements 2 and 4).
 * 
 * lottery array:
 * 74913
 * 
 * user array:
 * 42973
 * 
 * The program should display the random numbers stored 
 * in the lottery array and the number of matching digits. 
 * If all of the digits match, display a message proclaiming 
 * the user as a grand prize winner.
 * 
 **/
#include <iostream>
#include <vector>

using namespace std;

void getUserNumbers(int[], const int);

void findDuplicateNumbers(vector<int> &);

void getMatchingDigits(const vector<int>,
                       vector<int> &,
                       const int[],
                       int &,
                       const int);

void displayInfo(const int[],
                 const int[],
                 const vector<int>,
                 const int,
                 const int);


int main()
{
    const int ARRAY_SIZE = 5;
    int total_matching_digits = 0;
    int lottery_numbers[ARRAY_SIZE] = {7, 6, 5, 4, 3};
    int user_numbers[ARRAY_SIZE];
    vector<int> duplicate_numbers;
    vector<int> matching_digits;

    getUserNumbers(user_numbers, ARRAY_SIZE);

    for (int i = 0; i < ARRAY_SIZE; i++)
        duplicate_numbers.push_back(user_numbers[i]);  // 5 5 7 8 9

    findDuplicateNumbers(duplicate_numbers);

    getMatchingDigits(duplicate_numbers,
                      matching_digits,
                      lottery_numbers, 
                      total_matching_digits, 
                      ARRAY_SIZE);

    displayInfo(user_numbers,
                lottery_numbers,
                matching_digits,
                total_matching_digits,
                ARRAY_SIZE);

    return 0;
} // End int main()

void getUserNumbers(int user_numbers[], const int ARRAY_SIZE)
{
    cout << "Enter 5 digits: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        cout << "Number #" << (i + 1) << ": ";
        while (!(cin >> user_numbers[i]) || 
               (user_numbers[i] < 0 || user_numbers[i] > 9))
        {
            cout << "Error: enter a number between 0 and 9: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
    }
}

void findDuplicateNumbers(vector<int> &duplicate_numbers)
{
    int size_of_array = duplicate_numbers.size();

    for (int i = 0; i < size_of_array; i++)
    {
        for (int j = (i + 1); j < size_of_array;)
		{
			if (duplicate_numbers[i] == duplicate_numbers[j])
			{
				for(int k = j; k < (size_of_array - 1); k++)
					duplicate_numbers[k] = duplicate_numbers[k + 1];
					
                duplicate_numbers.pop_back();
				size_of_array--;
			}
			else
				j++;
		}
    }
}

void getMatchingDigits(const vector<int> duplicate_numbers,
                       vector<int> &matching_digits,
                       const int lottery_numbers[],
                       int &total_matching_digits,
                       const int ARRAY_SIZE)
{
    for (int i = 0; i < duplicate_numbers.size(); i++)
    {
        for (int j = 0; j < (ARRAY_SIZE); j++)
        {
            if (duplicate_numbers[i] == lottery_numbers[j])
            {
                total_matching_digits++;
                matching_digits.push_back(duplicate_numbers[i]);
            }
        }
        
    }
}

void displayInfo(const int user_numbers[],
                 const int lottery_numbers[],
                 const vector<int>matching_digits,
                 const int total_matching_digits,
                 const int ARRAY_SIZE)
{
    cout << "\nUser numbers:    { ";
	for(int i = 0; i < ARRAY_SIZE; ++i)
		cout << user_numbers[i] << " ";
    cout << "}" << endl;

    cout << "Lottery numbers: { ";
    for (int i = 0; i < ARRAY_SIZE; i++)
        cout << lottery_numbers[i] << " ";
    cout << "}" << endl;
    
    cout << "Matching digits: { ";
	for(int i = 0; i < matching_digits.size(); ++i)
		cout << matching_digits[i] << " ";
    cout << "}" << endl;

    cout << "\nTotal matching #s: " 
         << total_matching_digits 
         << endl;

    if(total_matching_digits == ARRAY_SIZE)
        cout << "You are the grand prize winner!!" << endl;
}

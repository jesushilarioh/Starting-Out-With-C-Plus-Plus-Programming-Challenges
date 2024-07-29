#include <iostream>
#include <vector>
#include <cctype>

using namespace std;

char inputValidate(char);
void displayArray(const char[], string, int);
void displayVector(vector<int>, string);
void getAnswers(char[], const int);
void checkAnswers(const char[], const char[], int &, vector<int> &, const int);
void displayResults(const int, const char[], const char[], vector<int>, const int);

int main()
{
    const int NUMBER_OF_QUESTIONS = 20;
    int number_of_correct_answers = 0;
    char correct_answers[NUMBER_OF_QUESTIONS] = {'A', 'D', 'B', 'B', 'D',
                                                 'B', 'A', 'B', 'C', 'D', 
                                                 'A', 'C', 'D', 'B', 'D',
                                                 'C', 'C', 'A', 'D', 'B'};

    char student_answers[NUMBER_OF_QUESTIONS];
    vector<int> incorrect_answers;

    getAnswers(student_answers, NUMBER_OF_QUESTIONS);

    checkAnswers(student_answers, 
                 correct_answers, 
                 number_of_correct_answers, 
                 incorrect_answers, 
                 NUMBER_OF_QUESTIONS);
    
    displayResults(number_of_correct_answers,
                   student_answers,
                   correct_answers,
                   incorrect_answers,
                   NUMBER_OF_QUESTIONS);

    return 0;
} // END int main()

void getAnswers(char student_answers[], const int NUMBER_OF_QUESTIONS)
{
    cout << "Enter answers for 20 questions: " << endl;
    for(int i = 0; i < NUMBER_OF_QUESTIONS; i++)
    {
        cout << "Answer #" << (i + 1) << ": ";
        student_answers[i] = inputValidate(student_answers[i]);
    }
}

char inputValidate(char letter)
{
    bool letter_bool = true;

    cin >> letter;
    while(letter_bool)
    {
        switch (letter)
        {
            case 'a':
            case 'A':
            case 'b':
            case 'B':
            case 'c':
            case 'C':
            case 'd':
            case 'D':
                letter_bool = false;
                break;
            
            default:
                cout << "Error. Must enter A, B, C, or D: ";
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cin >> letter;
                break;
        }
    }

    return toupper(letter);
}

void checkAnswers(const char student_answers[],
                  const char correct_answers[],
                  int &number_of_correct_answers,
                  vector<int> &incorrect_answers,
                  const int NUMBER_OF_QUESTIONS)
{
    for(int i = 0; i < NUMBER_OF_QUESTIONS; i++)
    {
        if (student_answers[i] == correct_answers[i])
            number_of_correct_answers++;
        else
            incorrect_answers.push_back(i + 1);

    }
}

void displayResults(const int number_of_correct_answers,
                    const char student_answers[],
                    const char correct_answers[],
                    vector<int> incorrect_answers,
                    const int NUMBER_OF_QUESTIONS)
{
    cout << "\n\nOutcome: " 
         << (number_of_correct_answers >= 15 ? "Pass" : "Fail") 
         << endl;

    cout << "Total number of correctly answered questions: " 
         << number_of_correct_answers
         << endl;

    cout << "Total number of incorrectly answered questions: "
         << NUMBER_OF_QUESTIONS - number_of_correct_answers
         << endl;

    displayArray(student_answers, "Student answers: ", NUMBER_OF_QUESTIONS);
    cout << endl;

    displayArray(correct_answers, "Correct answers: ", NUMBER_OF_QUESTIONS);
    cout << endl;

    displayVector(incorrect_answers, "Incorrect Answers: ");
    cout << endl
         << endl;
}

void displayArray(const char array[], string array_name, int ARRAY_SIZE)
{
    cout << array_name << endl;
    for(int i = 0; i < ARRAY_SIZE; i++)
    {
        if (i == (ARRAY_SIZE - 1))
            cout << array[i];
        else
            cout << array[i] << ", ";
        
    }
}

void displayVector(vector<int> vector, string vector_name)
{
    cout << vector_name << endl;
    for(int i = 0; i < vector.size(); i++)
    {
        if (i == (vector.size() - 1))
            cout << vector[i];
        else
            cout << vector[i] << ", ";
    }

}

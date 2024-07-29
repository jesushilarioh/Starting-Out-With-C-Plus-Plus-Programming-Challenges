#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

const int NUMBER_OF_QUESTIONS = 20;

void readFileContentsIntoArray(char[], string, const int);
void displayArray(const char[], const int);
void displayAnswers(const vector<int>, const char[]);
void checkAnswers(const char[], 
                  const char[], 
                  int &, 
                  vector<int> &, 
                  vector<int> &, 
                  int &, 
                  int &, 
                  const int);
void displayAllAnswers(const char[], const char[], const int);
double calculatePercentage(const int, const int);
void displayFinalInfo(const vector<int>,
                      const vector<int>,
                      const char[],
                      const char[],
                      int,
                      int,
                      double);

int main()
{
    char correct_answers[NUMBER_OF_QUESTIONS],
         student_answers[NUMBER_OF_QUESTIONS];

    int number_of_incorrect_questions,
        total_correct_questions = 0,
        total_missed_questions  = 0;
    
    double percentage_correctly_answered;

    vector<int> incorrect_questions;
    vector<int> correct_questions;

    readFileContentsIntoArray(correct_answers, "CorrectAnswers.txt", NUMBER_OF_QUESTIONS);
    readFileContentsIntoArray(student_answers, "StudentAnswers.txt", NUMBER_OF_QUESTIONS);

    displayAllAnswers(correct_answers, student_answers, NUMBER_OF_QUESTIONS);

    checkAnswers(student_answers, 
                 correct_answers, 
                 number_of_incorrect_questions,
                 correct_questions, 
                 incorrect_questions, 
                 total_missed_questions,
                 total_correct_questions,
                 NUMBER_OF_QUESTIONS);

    percentage_correctly_answered = calculatePercentage(total_correct_questions, 
                                                        NUMBER_OF_QUESTIONS);

    displayFinalInfo(correct_questions,
                     incorrect_questions,
                     correct_answers,
                     student_answers,
                     total_missed_questions,
                     total_correct_questions,
                     percentage_correctly_answered);
     
    return 0;
} // END int main()

void readFileContentsIntoArray(char array[], string fileName, const int ARRAY_SIZE)
{
    ifstream inputFile;

    inputFile.open(fileName);

    if (inputFile.fail())
        cout << "Error opening file." << endl;
    else
    {
        for (int i = 0; i < ARRAY_SIZE; i++)
            inputFile >> array[i];

        inputFile.close();

    }
    
}

void displayAllAnswers(const char correct_answers[], 
                       const char student_answers[], 
                       const int NUMBER_OF_QUESTIONS)
{
    cout << "Correct Answers: " << endl;
    displayArray(correct_answers, NUMBER_OF_QUESTIONS);
    cout << endl;

    cout << "Student Answers: " << endl;
    displayArray(student_answers, NUMBER_OF_QUESTIONS);
    cout << endl;
}

void displayArray(const char array[], const int ARRAY_SIZE)
{
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        if(i == (ARRAY_SIZE - 1))
            cout << array[i];
        else
            cout << array[i] << ", ";
        
    }
        
    cout << endl;
}

void checkAnswers(const char student_answers[], 
                  const char correct_answers[], 
                  int &number_of_incorrect_questions, 
                  vector<int> &correct_questions,
                  vector<int> &incorrect_questions, 
                  int &total_missed_questions,
                  int &total_correct_questions, 
                  const int NUMBER_OF_QUESTIONS)
{
    for (int i = 0; i < NUMBER_OF_QUESTIONS; i++)
    {
        if (student_answers[i] != correct_answers[i])
        {
            number_of_incorrect_questions++; 
            incorrect_questions.push_back(i);
            total_missed_questions++;
        }
        else
        {
            correct_questions.push_back(i); 
            total_correct_questions++;
        }
        
    }
}

double calculatePercentage(const int total_correct_questions, 
                           const int NUMBER_OF_QUESTIONS)
{
    return (total_correct_questions / static_cast<double>(NUMBER_OF_QUESTIONS)) * 100;
}

void displayFinalInfo(const vector<int> correct_questions,
                      const vector<int> incorrect_questions,
                      const char correct_answers[],
                      const char student_answers[],
                      int total_missed_questions,
                      int total_correct_questions,
                      double percentage_correctly_answered)
{
    cout << "Questions answered correctly: " << endl; 
    displayAnswers(correct_questions, correct_answers);
    cout << endl;

    cout << "Questions answered incorrectly: " << endl;
    displayAnswers(incorrect_questions, student_answers);
    cout << endl;
    
    cout << "Total missed questions : " 
         << total_missed_questions 
         << endl;

    cout << "Total correct questions: " 
         << total_correct_questions 
         << endl;
    cout << endl;

    cout << setprecision(1) << fixed;
    cout << "Percentage of questions answered: %" 
         << percentage_correctly_answered 
         << endl;

    cout << "You " 
         << (percentage_correctly_answered >= 70 ? "passed" : "failed")
         << " the exam."
         << endl;
}

void displayAnswers(const vector<int> vector, const char array[])
{
    for (int i = 0; i < vector.size(); i++)
    {
        cout << (vector[i] + 1) << ". "
             << array[vector[i]]
             << endl;
    }
    // Range-based for loop in C++11   
    // for (auto value : vector)
    //     cout << (value + 1) << ". " << array[value] << ", ";
}

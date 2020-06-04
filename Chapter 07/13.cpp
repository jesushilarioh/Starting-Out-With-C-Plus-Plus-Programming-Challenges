/************************************************************
 *
 *   13. Grade Book Modification
 * 
 *  Modify the grade book application in Programming 
 *  Challenge 13 so it drops each student’s lowest 
 *  score when determining the test score averages and 
 *  letter grades.
 *
 *************************************************************/
#include <iostream>

using namespace std;

const int NUMBER_OF_TESTS = 4;
const int NUMBER_OF_STUDENTS = 5;

double inputValidate(double);
void getStudentTestScores(double[]);
double calculateAverageOfArray(const double[], int);
double findLowest(const double[], int);
char getAverageLetterGrade(double);
void getStudentNames(string[]);
void getAllTestScores(const string[],
                      double[],
                      double[],
                      double[],
                      double[],
                      double[]);
void calculateAndDisplayAverages(const string[],
                                 const double[],
                                 const double[],
                                 const double[],
                                 const double[],
                                 const double[]);

int main()
{
    string studentNames[NUMBER_OF_STUDENTS];

    double student1TestScores[NUMBER_OF_TESTS];
    double student2TestScores[NUMBER_OF_TESTS];
    double student3TestScores[NUMBER_OF_TESTS];
    double student4TestScores[NUMBER_OF_TESTS];
    double student5TestScores[NUMBER_OF_TESTS];

    getStudentNames(studentNames);

    getAllTestScores(studentNames,
                     student1TestScores,
                     student2TestScores,
                     student3TestScores,
                     student4TestScores,
                     student5TestScores);

    calculateAndDisplayAverages(studentNames,
                                student1TestScores,
                                student2TestScores,
                                student3TestScores,
                                student4TestScores,
                                student5TestScores);
    
    return 0;
}

// 6. Input Validation: Do not accept test scores less than 0 or greater than 100.
double inputValidate(double number)
{
    while(!(cin >> number) || (number < 0 || number > 100))
    {
        cout << "Error. A number from 0 thru 100 must be entered: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return number;
}

void getStudentTestScores(double array[])
{
    for (int i = 0; i < NUMBER_OF_TESTS; i++)
    {
        cout << "Test #" << (i + 1) << ": ";
        array[i] = inputValidate(array[i]);
    }
}

double calculateAverageOfArray(const double array[], int ARRAY_SIZE)
{
    double sum = 0;

    for (int i = 0; i < ARRAY_SIZE; i++)
        sum += array[i];

    double lowest_grade = findLowest(array, ARRAY_SIZE);
    sum -= lowest_grade;

    return sum / (ARRAY_SIZE - 1);
}

double findLowest(const double array[], int ARRAY_SIZE)
{
    double lowest_number = array[0];

    for (int i = 1; i < ARRAY_SIZE; i++)
    {
        if (array[i] <= lowest_number)
            lowest_number = array[i];
        
    }
    
    return lowest_number;
}

char getAverageLetterGrade(double average)
{
    char letter;

    if (average <= 100 && average >= 90)
        letter = 'A';
    else if (average < 90 && average >= 80)
        letter = 'B';
    else if (average < 80 && average >= 70)
        letter = 'C';
    else if (average < 70 && average >= 60)
        letter = 'D';
    else if (average < 60 && average >= 0)
        letter = 'F';
    
    return letter;
}

void getStudentNames(string studentNames[])
{
    cout << "Enter student names: " << endl;
    for(int i = 0; i < NUMBER_OF_STUDENTS; i++)
    {
        cout << "Student " << (i + 1) << " name: ";
        getline(cin, studentNames[i]);
    }
}

void getAllTestScores(const string studentNames[],
                      double student1TestScores[],
                      double student2TestScores[],
                      double student3TestScores[],
                      double student4TestScores[],
                      double student5TestScores[])
{
    cout << "\nEnter test scores for " << studentNames[0] << endl;
    getStudentTestScores(student1TestScores);

    cout << "\nEnter test scores for " << studentNames[1] << endl;
    getStudentTestScores(student2TestScores);

    cout << "\nEnter test scores for " << studentNames[2] << endl;
    getStudentTestScores(student3TestScores);

    cout << "\nEnter test scores for " << studentNames[3] << endl;
    getStudentTestScores(student4TestScores);

    cout << "\nEnter test scores for " << studentNames[4] << endl;
    getStudentTestScores(student5TestScores);
}

void calculateAndDisplayAverages(const string studentNames[],
                                 const double student1TestScores[],
                                 const double student2TestScores[],
                                 const double student3TestScores[],
                                 const double student4TestScores[],
                                 const double student5TestScores[])
{
    // Student #1
    double average = calculateAverageOfArray(student1TestScores, NUMBER_OF_TESTS);
    cout << "\nAverage test score for " << studentNames[0] << " = " << average << endl;

    char average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;

    // Student #2
    average = calculateAverageOfArray(student2TestScores, NUMBER_OF_TESTS);
    cout << "Average test score for " << studentNames[1] << " = " << average << endl;

    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;

    // Student #3
    average = calculateAverageOfArray(student3TestScores, NUMBER_OF_TESTS);
    cout << "Average test score for " << studentNames[2] << " = " << average << endl;

    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;

    // Student #4
    average = calculateAverageOfArray(student4TestScores, NUMBER_OF_TESTS);
    cout << "Average test score for " << studentNames[3] << " = " << average << endl;

    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;

    // Student #5
    average = calculateAverageOfArray(student5TestScores, NUMBER_OF_TESTS);
    cout << "Average test score for " << studentNames[4] << " = " << average << endl;

    average_letter_grade = getAverageLetterGrade(average);
    cout << "Letter grade = " << average_letter_grade << endl;
    cout << endl;
}
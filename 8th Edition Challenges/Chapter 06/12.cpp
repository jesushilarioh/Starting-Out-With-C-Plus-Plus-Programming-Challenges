#include <iostream>
using namespace std;

const double NUMBER_OF_SCORES = 5;

// Function prototypes
double inputValidate(double);
void getJudgeData(double &, string);
void calcScore(double, double, double, double, double);
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);
double lowestNum(double, double, double, double, double);
double highestNum(double, double, double, double, double);

int main()
{
    double score1, 
           score2, 
           score3, 
           score4, 
           score5;

    getJudgeData(score1, "1");
    getJudgeData(score2, "2");
    getJudgeData(score3, "3");
    getJudgeData(score4, "4");
    getJudgeData(score5, "5");

    cout << endl
         << "score1 = " << score1 << endl
         << "score2 = " << score2 << endl
         << "score3 = " << score3 << endl
         << "score4 = " << score4 << endl
         << "score5 = " << score5 << endl
         << endl;

    calcScore(score1, score2, score3, score4, score5);

    return 0;
}

/****************************************************
 * Definition for inputValidate():                  *
 * inputValidate checks user input for a double     *
 * between 0 - 10. If a double bewteen 0 - 10       *
 * is not found, a while loop displays an error,    *
 * clears and ignores previous input, and prompts   *
 * the user to try again.                           *
 ****************************************************/
double inputValidate(double num)
{
    
    while(!(cin >> num) || (num < 0 || num > 10))
    {
        cout << "Error. Enter a integer between 0 - 10: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    return num;
}

/****************************************************
 * Function definition for void getJudgeData():     * 
 * getJudgeData() should ask the user for a judge’s * 
 * score, store it in a reference parameter         *
 * variable, and validate it. This function should  *
 * be called by main once for each of the five      *
 * judges.                                          *
 ****************************************************/
void getJudgeData(double &score, string score_name)
{
    if (score_name == "1")
        score_name = "1";
    else if (score_name == "2")
        score_name = "2";
    else if (score_name == "3")
        score_name = "3";
    else if (score_name == "4")
        score_name = "4";
    else if (score_name == "5")
        score_name = "5";
    
    cout << "What is the judge's score " 
         << score_name 
         <<  " ? ";

    score = inputValidate(score);
}

/****************************************************
 *  Definition for calcScore() should calculate     *
 * and display the average of the three scores that *
 * remain after dropping the highest and lowest     *
 * scores the performer received. This function     *
 * should be called just once by main and should be *
 * passed the five scores.                          *
 ****************************************************/ 
void calcScore(double score1,
               double score2,
               double score3,
               double score4,
               double score5)
{
    double lowest  = findLowest(score1, score2, score3, score4, score5),
           highest = findHighest(score1, score2, score3, score4, score5),
           average,
           sum = score1 + score2 + score3 + score4 + score5;

    sum -= lowest;
    sum -= highest;

    average = sum / (NUMBER_OF_SCORES - 2);

    cout << endl
         << "lowest  = " << lowest << endl
         << "highest = " << highest << endl
         << endl;
    cout << "average = " << average << endl
         << endl;
}

/****************************************************
 * Definition for findlowest():                     *
 * findLowest() finds and return the lowest of the  *
 * five scores passed to it.                        *
 ****************************************************/
double findLowest(double score1,
                  double score2,
                  double score3,
                  double score4,
                  double score5)
{
    double lowest;

    lowest = lowestNum(score1, score2, score3, score4, score5);
    lowest = lowestNum(score2, score1, score3, score4, score5);
    lowest = lowestNum(score3, score2, score1, score4, score5);
    lowest = lowestNum(score4, score2, score3, score1, score5);
    lowest = lowestNum(score5, score2, score3, score4, score1);
    
    return lowest;
}

/********************************************************
 * Definition of lowestNum():                           *
 * lowestNum() uses an if statmenent to find the lowest *
 * number.                                              *
 ********************************************************/
double lowestNum(double score1,
                 double score2,
                 double score3,
                 double score4,
                 double score5)
{
    double lowestNum;
    if (score1 <= score2)
    {
        if (score1 <= score3)
        {
            if (score1 <= score4)
            {
                if (score1 <= score5)
                {
                    lowestNum = score1;
                }
            }
        }
    }
    return lowestNum;
}

/************************************************
 * Definition for findHighest():                *
 * findHighest() finds and return the highest   *
 * of the five scores passed to it.             *
 ************************************************/
double findHighest(double score1,
                   double score2,
                   double score3,
                   double score4,
                   double score5)
{
    double highest;

    highest = highestNum(score1, score2, score3, score4, score5);
    highest = highestNum(score2, score3, score4, score5, score1);
    highest = highestNum(score3, score4, score5, score1, score2);
    highest = highestNum(score4, score5, score1, score2, score3);
    highest = highestNum(score5, score1, score2, score3, score4);

    return highest;
}

/********************************************************
 * Definition of highestNum():                          *
 * highestNum() uses an if statmenent to find the       *
 * highest number.                                      *
 ********************************************************/
double highestNum(double score1,
                  double score2,
                  double score3,
                  double score4,
                  double score5)
{
    double highestNum;

    if (score1 >= score2)
    {
        if (score1 >= score3)
        {
            if (score1 >= score4)
            {
                if (score1 >= score5)
                {
                    highestNum = score1;
                }
            }
        }
    }

    return highestNum;
}
#include <iostream>
using namespace std;

const int GRID_SIZE = 3; 

bool isLoShuMagicSquare(const double[][GRID_SIZE]);
bool sumOfEachRow(const double[][GRID_SIZE]);
bool sumOfEachColumn(const double[][GRID_SIZE]);
double sumOfDiagonalTopLeftToRight(const double[][GRID_SIZE]);
double sumOfDiagonalTopRightToLeft(const double[][GRID_SIZE]);

int main()
{
    double grid_array_1[GRID_SIZE][GRID_SIZE] = {{1, 2, 3},
                                                 {4, 5, 6},
                                                 {7, 8, 9}},

           grid_array_2[GRID_SIZE][GRID_SIZE] = {{4, 9, 2},
                                                 {3, 5, 7},
                                                 {8, 1, 6}};

    cout << "Array is";
    cout << (isLoShuMagicSquare(grid_array_1) ? " " : " NOT ");
    cout << "a Lo Shu Magic Square!" 
         << endl;
    
    return 0;
}

bool sumOfEachRow(const double array[][GRID_SIZE])
{
    double total;
    bool local_boolean = false;

    for(int row = 0; row < GRID_SIZE; row++)
    {
        total = 0;

        for(int column = 0; column < GRID_SIZE; column++)
            total += array[row][column];

        local_boolean = total == 15 ? true : false;

    }
    return local_boolean;
}

bool sumOfEachColumn(const double array[][GRID_SIZE])
{
    double total;
    bool local_boolean = false;
    
    for(int columns = 0; columns < GRID_SIZE; columns++)
    {
        total = 0;
        for (int row = 0; row < GRID_SIZE; row++)
            total += array[row][columns];

        local_boolean = total == 15 ? true : false;

    }
    return local_boolean;
}

double sumOfDiagonalTopLeftToRight(const double array[][GRID_SIZE])
{
    double total = 0;

    // [x][][]   [0][0]
    // [][x][]   [1][1]
    // [][][x]   [2][2]
    
    for(int i = 0; i < GRID_SIZE; i++)
        total += array[i][i];
    
    // cout << "diaganal top to bottom = " << total << endl;

    return total;
}

double sumOfDiagonalTopRightToLeft(const double array[][GRID_SIZE])
{
    double total = 0;

    // for (int row = 0, column = (GRID_SIZE - 1); row < GRID_SIZE; row++, column--)
    //     total += array[row][column];
    // OR
    
    // [][][x]   [0][2]
    // [][x][]   [1][1]
    // [x][][]   [2][0]

    int column = (GRID_SIZE - 1); // 3 - 1 = 2
    for (int row = 0; row < GRID_SIZE; row++)
    {
        total += array[row][column];
        column--;
    }

    // cout << "diaganal bottom to top = " << total << endl;

    return total;
}

bool isLoShuMagicSquare(const double array[][GRID_SIZE])
{
    if(
        sumOfEachRow(array) &&
        sumOfEachColumn(array) &&
        sumOfDiagonalTopLeftToRight(array)  == 15 &&
        sumOfDiagonalTopRightToLeft(array)  == 15
       )
        return true;
    else
        return false;
}
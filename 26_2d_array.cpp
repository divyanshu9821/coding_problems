#include <iostream>
using namespace std;

void spiral_matrix(int arr[][6], int rows, int cols)
{

    int row_start = 0;
    int row_end = rows - 1;
    int col_start = 0;
    int col_end = cols - 1;

    while (row_start <= row_end && col_start <= col_end)
    {
        // first row
        for (int col = col_start; col <= col_end; col++)
        {
            cout << arr[row_start][col] << " ";
        }

        row_start++;

        // last col
        for (int row = row_start; row <= row_end; row++)
        {
            cout << arr[row][col_end] << " ";
        }

        col_end--;

        // last row
        if (row_start <= row_end)// this condition prevent the printing of element again
        {
            for (int col = col_end; col >= col_start; col--)
            {
                cout << arr[row_end][col] << " ";
            }
        }

        row_end--;

        // col_start
        if (col_start <= col_end)// this condition prevent the printing of element again
        {
            for (int row = row_end; row >= row_start; row--)
            {
                cout << arr[row][col_start] << " ";
            }
        }

        col_start++;
    }
    return;
}

int main()
{
    int arr[5][6] = {
        {1, 5, 7, 9, 10, 11},
        {6, 10, 12, 13, 20, 21},
        {9, 25, 29, 30, 32, 41},
        {15, 55, 59, 63, 68, 70},
        {40, 70, 79, 81, 95, 105}};

    spiral_matrix(arr, 5, 6);

    return 0;
}
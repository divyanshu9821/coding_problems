#include <iostream>
using namespace std;

// check function
// check the columns for the particular row
// check the upper left diagonal
// check the lower left diagonal
bool is_safe(int **arr, int x, int y, int n)
{

    // column check
    for (int col = 0; col < y; col++)
    {
        if (arr[x][col] == 0)
        {
            return false;
        }
    }

    // upper diagonal check '\'
    int row = x;
    int col = y;
    while (row >= 0 && col >= 0)
    {
        if (arr[row][col] == 0)
            return false;
        row--;
        col--;
    }

    // lower diagonal check '/'
    row = x;
    col = y;
    while (row < n && col >= 0)
    {
        if (arr[row][col] == 0)
            return false;
        row++;
        col--;
    }

    return true;
}

// for each column placing and checking queen position row wise
bool place_queen(int **arr, int column, int n)
{
    if (column >= n)
    {
        return true;
    }

    for (int row = 0; row < n; row++)
    {
        if (is_safe(arr, row, column, n)) // checks is queen safe at this place?
        {
            arr[row][column] = 0; // place the queen

            if (place_queen(arr, column + 1, n)) // checks furthur placements for queen
                return true;

            arr[row][column] = 1; // remove the queen if not safe
        }
    }

    return false;
}

int main()
{

    int n;
    cin >> n;
    int **board = new int *[n];
    for (int i = 0; i < n; i++)
    {
        board[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 1;
        }
    }

    if (place_queen(board, 0, n))
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}
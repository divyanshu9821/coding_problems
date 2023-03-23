#include <iostream>
using namespace std;

// function to check that it is safe to move or not
bool isSafe(int **arr, int x, int y, int n) // arr pointer, x -> row, y -> column, n -> number of rows or columns, taking square matrix
{
    if (arr[x][y] == 1 && x < n && y < n)
        return true;
    else
        return false;
}

// rat in a maze
bool rat_in_maze(int **arr, int x, int y, int n, int **path_arr)
{
    if (x == n - 1 && y == n - 1) // last coordinate which is bottom right most
    {
        path_arr[x][y] = 1; // setting one at last coordinate
        return true;
    }

    if (isSafe(arr, x, y, n) == true) // safe to move
    {

        path_arr[x][y] = 1; // putting one to denote the path taken by mouse

        if (rat_in_maze(arr, x + 1, y, n, path_arr) == true) // moving down
            return true;

        // otherwise
        if (rat_in_maze(arr, x, y + 1, n, path_arr) == true) // moving forward
            return true;

        path_arr[x][y] = 0; // putting zero back because that not the path that lead to destination

    }

    return false;
}

int main()
{

    int n;
    cin >> n;

    int **maze = new int *[n]; // store binary, 0 are closed, 1 is open to move

    for (int i = 0; i < n; i++)
    {
        maze[i] = new int[n];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }

    int **path = new int *[n]; // store binary, 1 shows the path from top left to bottom right in maze

    for (int i = 0; i < n; i++) // creating
    {
        path[i] = new int[n];
    }

    for (int i = 0; i < n; i++) // intializing with 0
    {
        for (int j = 0; j < n; j++)
        {
            path[i][j] = 0;
        }
    }

    if (rat_in_maze(maze, 0, 0, n, path))
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << path[i][j] << " ";
            }
            cout << endl;
        }
    }

    else
        cout << "No path possible" << endl;

    return 0;
}
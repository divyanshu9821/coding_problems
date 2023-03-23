#include <iostream>
using namespace std;

// print all possible permutation of string
void permutation(string s, string ans)
{
    if (s.length() == 0)
    {
        cout << ans << endl;
        return;
    }

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        string ros = s.substr(0, i) + s.substr(i + 1); // remaining string except 'ch'
        permutation(ros, ans + ch);
    }
    return;
}

// count the number of paths possible from start point to end point in gameboard
int count_path(int start, int end)
{
    if (start == end)
    {
        return 1;
    }

    if (start > end)
    {
        return 0;
    }

    int count = 0;
    for (int i = 1; i < 6; i++) // dice
        count += count_path(start + i, end);

    return count;
}

// count number of paths from [0,0] to [n,n] in matrix
int count_paths_in_matrix(int n, int i, int j)
{
    if (i == n - 1 && j == n - 1)
        return 1;

    if (i >= n || j >= n)
        return 0;

    return count_paths_in_matrix(n, i + 1, j) + count_paths_in_matrix(n, i, j + 1); // move in forward row and downward column
}

// given a "2*n" board and tiles of size "2*1", count the number of ways to tile the given board using these tiles
int noOftiles(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return noOftiles(n - 1) + noOftiles(n - 2);
}

// find the number of ways in which n friends can remain single or can be paired up
int friend_pair_problem(int n)
{
    if (n == 0 || n == 1 || n == 2)
        return n;

    return friend_pair_problem(n - 1) + friend_pair_problem(n - 2) * (n - 1);
}


int main()
{

    // permutation("abcd", "");
    // cout << count_path(0, 3) << endl;
    // cout << count_paths_in_matrix(4, 0, 0) << endl;
    // cout << noOftiles(4) << endl;
    cout<<friend_pair_problem(4);
    return 0;
}
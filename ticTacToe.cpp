//  codeforces, Rudolph and Tic-Tac-Toe
#include <bits/stdc++.h>
using namespace std;

// this game is tictactoe

// #define ll unsigned long long int;
bool checkHorizontal(char result[3][3], char sym)
{
    if (result[0][0] == sym && result[0][1] == sym && result[0][2] == sym)
        return true;
    if (result[1][0] == sym && result[1][1] == sym && result[1][2] == sym)
        return true;
    if (result[2][0] == sym && result[2][1] == sym && result[2][2] == sym)
        return true;
    return false;
};
bool checkVertical(char result[3][3], char sym)
{
    if (result[0][0] == sym && result[1][0] == sym && result[2][0] == sym)
        return true;
    if (result[0][1] == sym && result[1][1] == sym && result[2][1] == sym)
        return true;
    if (result[0][2] == sym && result[1][2] == sym && result[2][2] == sym)
        return true;
    return false;
};
bool checkDiagonal(char result[3][3], char sym)
{
    if (result[0][0] == sym && result[1][1] == sym && result[2][2] == sym)
        return true;
    if (result[2][0] == sym && result[1][1] == sym && result[0][2] == sym)
        return true;
    return false;
};

void solve()
{
    char result[3][3];
    int countD = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> result[i][j];
        }
    }

    if(checkHorizontal(result,'X')||checkVertical(result,'X')||checkDiagonal(result,'X')){
        cout<<"X"<<endl;
        return;
    }
    
    if(checkHorizontal(result,'O')||checkVertical(result,'O')||checkDiagonal(result,'O')){
        cout<<"O"<<endl;
        return;
    }

    if(checkHorizontal(result,'+')||checkVertical(result,'+')||checkDiagonal(result,'+')){
        cout<<"+"<<endl;
        return;
    }

    cout<<"DRAW"<<endl;

    return;
}

signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int testCases;
    cin >> testCases;
    while (testCases--)
        solve();
    return 0;
}

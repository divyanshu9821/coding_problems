#include <iostream>
using namespace std;

void transpose()
{
    int n;
    cin >> n;

    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            // swap
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return;
}

// In a*b matrix and c*d matrix, b == c and multiplication matrix is of a*d.
void matrix_mutliplication()
{
    int fr, fc_sr, sc;
    cout << "first matrix input" << endl;
    cout << "Rows: ";
    cin >> fr;
    cout << "Columns: ";
    cin >> fc_sr;

    int fm[fr][fc_sr];
    for (int i = 0; i < fr; i++)
    {
        for (int j = 0; j < fc_sr; j++)
        {
            cin >> fm[i][j];
        }
    }

    cout << endl;
    cout << "second matrix input" << endl;
    cout << "Rows: " << fc_sr << endl; // rows of second matrix should equal to the columns of first matrix
    cout << "Columns: ";
    cin >> sc;

    int sm[fc_sr][sc];
    for (int i = 0; i < fc_sr; i++)
    {
        for (int j = 0; j < sc; j++)
        {
            cin >> sm[i][j];
        }
    }

    int mm[fr][sc];

    for (int i = 0; i < fr; i++)
    {
        for (int j = 0; j < sc; j++)
        {
            int sum = 0;
            for (int k = 0; k < fc_sr; k++)
            {
                sum += fm[i][k] * sm[k][j];
            }
            mm[i][j] = sum;
        }
    }

    for (int i = 0; i < fr; i++)
    {
        for (int j = 0; j < sc; j++)
        {
            cout << mm[i][j] << " ";
        }
        cout << endl;
    }
}

// matrix is in sorted order 
/*
1 4 7 11
2 5 8 12
3 6 9 16
10 13 14 17
*/
void two_d_mtrx_srch(){
    int n,m;
    cout<<"Input rows and columns"<<endl;
    cin>>n>>m;

    int mtrx[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>mtrx[i][j];
        }
    }


    int key;
    cin>>key;

    int i = 0, j = m-1;
    while(i<n&&j>=0){
        if(mtrx[i][j]==key){
            cout<<key<<" @["<<i<<","<<j<<"]"<<endl;
            return;
        }

        if(mtrx[i][j]>key)
            j--;

        else
            i++;    
    } 

    cout<<"Key not found"<<endl;
    return;
}

int main()
{

    // transpose();
    // matrix_mutliplication();
    two_d_mtrx_srch();

    return 0;
}
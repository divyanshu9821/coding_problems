#include <iostream>
using namespace std;
// recursive function for factorial (n)*(n-1)*(n-2)...1
int fact(int num)
{
    if (num <= 1)
    {
        return 1;
    }
    return num * fact(num - 1);
}

// nCr = n!/(n-r)!
int combi(int n, int r)
{
    int num = fact(n);
    int den = fact(r) * fact(n - r);
    return num / den;
}

// pascal triangle

// 1            ->0C0
// 11           ->1C0 1C1
// 121          ->2C0 2C1 2C2
// 1331          so on..
// 14641

int main()
{
    int rows;
    cin >> rows;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << combi(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}
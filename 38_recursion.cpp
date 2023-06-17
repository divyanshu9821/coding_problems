#include <iostream>
using namespace std;

// sum(0->n) n+(n-1)+(n-2)+(n-3)....0
// sum(n) = n + sum(n-1)
int recursive_sum(int n)
{
    if (n == 0)
        return 0;

    return n + recursive_sum(n - 1);
}

// n^p = n*n*n*n*...n
// n^p = n * n^(p-1)
int recursive_power(int n, int p)
{
    if (p == 0)
        return 1;

    return n * recursive_power(n, p - 1);
}

// n! = n*(n-1)*(n-2)....1
// n! = n * (n-1)!
int recursive_fact(int n)
{
    if (n == 1)
        return 1;

    return n * recursive_fact(n - 1);
}

// fibbonacci(n) = 1 1 2 3 5 8 ... (nth-1 + nth-2)
// fibbonacci(n) = fibbonacci(n-1)+fibbonacci(n-2)
int fibbonacci(int n)
{
    if (n <= 1)
        return n;

    return fibbonacci(n - 1) + fibbonacci(n - 2);
}

int main()
{

    // cout << recursive_sum(4) << endl;
    // cout << power(2, 10);
    // cout << recursive_fact(5) << endl;
    cout << fibbonacci(6) << endl;
    return 0;
}
// codechef, MEANMEDIAN
#include <iostream>
using namespace std;

void solve()
{
    int mean, median;
    cin >> mean >> median;
    int b = median;
    int a_c = mean * 3 - median;
    int a, c;
    a = b;
    c = mean * 3 - (2 * b);
    while (c < b)
    {
        c++;
        a--;
    }
    cout << a << " " << b << " " << c << endl;
}

int main()
{

    solve();

    return 0;
}
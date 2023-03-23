// codechef, ODDEVENBS
#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int bin[n];
    int count_odd = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> bin[i];
        if (bin[i] == 1)
            count_odd++;
    }

    // (parity of array length == parity of totol array) yes : no;
    if ((count_odd % 2 == 0 && n % 2 == 0) || (count_odd % 2 != 0 && n % 2 != 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return;
}

int main()
{

    solve();

    return 0;
}
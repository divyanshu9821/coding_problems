// codechef, SPBALL
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007
#define limits 1000001

ll facts[limits]; // because limit is 10^6

void fact_cal() // stores the factorial of all the numbers till limits
{
    facts[0] = 0;
    facts[1] = 1;
    for (ll i = 2; i < limits; i++)
    {
        facts[i] = ((i * (facts[i - 1])) % mod) % mod; // because factorial is very large cannot be hold by any data type
    }
}

void solve()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    ll ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans = (ans+(facts[arr[i]]%mod))%mod;
    }

    cout << ans << endl;

    return;
}

int main()
{
    fact_cal();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
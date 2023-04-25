// codeforces, Bun Lover
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin>>n;
    cout<<(n*4) + ((n-1)*(n)/2) + ((n-2)*(n-1)/2) + 1<<endl;
    
}

signed main()
{

    // for multiple testcases
    ll t;
    cin >> t;
    for(ll i = 0 ; i < t ; i++){
        solve();
    }

    // for single test case
    //solve();

    return 0;

}
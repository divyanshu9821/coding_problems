// codeforces, TubeTube Feed
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll n, t;
    cin >> n >> t;
    ll tm[n];
    ll en[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> tm[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> en[i];
    }

    ll ent = INT_MIN;
    ll ind =-1;
    for(ll i = 0;i<n;i++){
        if(tm[i]<=t--) {
            if(ent<en[i]){
                ent =en[i];
                ind  = i+1;

            }
        }
        
    }
 
    cout<<ind<<endl;
    return;


    // ll ind = -1;
    // ll ans = -1;
    // for(int i = 0;i<n;i++){
    //     int sec = tm[i];
    //     int rem = t-i;
    //     if(sec<=rem){
    //         if(en[i]>ans){
    //             ans = en[i];
    //             ind = i+1;
    //         }
    //     }
    // }

    // cout<<ind<<endl;
}

signed main()
{

    // for multiple testcases
    ll t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        solve();
    }

    // for single test case
    // solve();

    return 0;
}
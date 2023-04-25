// codeforces, Karina and Array
#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    for(ll i = 0;i<n;i++){
        cin>>arr[i];
    }

    sort(arr,arr+n);

    ll first = arr[0];
    ll second = arr[1];
    ll last = arr[n-1];
    ll secLast = arr[n-2];

    ll proF = first*second;
    ll proL = last*secLast;

    cout<<max(proF,proL)<<endl;
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
// codechef, AIRM
#include<bits/stdc++.h>
using namespace std;

// #define ll unsigned long long int;


void solve()
{
    int n;
    cin>>n;
    map<int, int> ad;
    for(int i = 1;i<=2*n;i++){
        int minute;
        cin>>minute;
        ad[minute]++;
    }

    map<int, int> :: iterator it = ad.begin();
    int ans = 0;
    int maxi = 0;
    while(it!=ad.end()){
        ans = max(ans,it->second);
        it++;
    }
    cout<<ans<<endl;
    return;
}


signed main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int testCases;
    cin>>testCases;
    while(testCases--)
        solve();
    return 0;
}
//  codeforces, Rudolph and Cut the Rope
#include<bits/stdc++.h>
using namespace std;

// #define ll unsigned long long int;


void solve()
{
    int ropes;
    cin>>ropes;
    int count=0;
    for(int i = 0;i<ropes;i++){
        int height;cin>>height;
        int length;cin>>length;
        if(height-length>0) count++;
    }
    cout<<count<<endl;

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
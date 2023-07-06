// codechef, CAESAR
#include<bits/stdc++.h>
using namespace std;

// #define ll unsigned long long int;


void solve()
{
    int leng;
    cin>>leng;
    string s,t,u;
    cin>>s>>t>>u;
    
    int down = t[0]-s[0]; //0-25
    if(down<0){ 
        down = 25+(-1*down);
    }    
    string ans = "";
    for(int i = 0;i<leng;i++){
        if(u[i]+down>122) ans+=('a'+((u[i]+down)%122)-1);
        else ans+=u[i]+down;
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
// codechef, SMILEY
#include<bits/stdc++.h>
using namespace std;

// #define ll unsigned long long int;


void solve()
{
    int len;
    cin>>len;
    string schrodinger;
    cin>>schrodinger;
    bool open = false;
    bool presentFrawn = false;
    bool presentSmilie = false;
    int count=0;
    for(int i = 0;i<len;i++){
        if(schrodinger[i]==':'){
            if(open && !presentFrawn && presentSmilie){
                open = false;
                count++;
            }
            if(open && presentFrawn){
                open = false;
                presentFrawn = false;
            }
            if(!open){
                open = true;
                presentFrawn = false;
                presentSmilie = false;
            }
        }
        else if(schrodinger[i]=='('&& open) 
            presentFrawn = true;
        else if(schrodinger[i]==')'&& open) 
            presentSmilie = true;
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
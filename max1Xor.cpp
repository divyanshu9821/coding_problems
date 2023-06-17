// codechef , MAX1XOR
#include <bits/stdc++.h>
using namespace std;

// #define ll long long

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int arrS[n];
    for(int i = 0;i<n;i++){
        (s[i]=='0')?arrS[i]=0:arrS[i]=1;
    }

    cout<<endl;

    int arrX[n]={0};
    int arrX2[n]={0};
    
    arrX2[0] = 1; 
    for(int i = 0;i<n-1;i++){
        arrX[i+1] = arrX[i]^arrS[i];
        arrX2[i+1] = arrX2[i]^arrS[i];
    }
    
    int count = 0;
    int count2 = 0;
    for(int i = 0;i<n;i++){
        if(arrX[i]==1) count++;
        if(arrX2[i]==1) count2++;
    }
    
    
    
    cout<<max(count,count2)<<endl;    

    
}

int main()
{

    // for multiple testcases
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    // for single test case
    solve();

    return 0;

}
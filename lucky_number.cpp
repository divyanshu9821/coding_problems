// codeforces, lucky number
#include<bits/stdc++.h>
using namespace std;

int maxi(int n){
    int num = INT_MIN;
    while(n>0){
        num = max(num,n%10);
        n/=10;
    }
    return num;
}

int mini(int n){
    int num = INT_MAX;
    while(n>0){
        num = min(num,n%10);
        n/=10;
    }
    return num;
}

void solve(){
    int l,r;
    cin>>l>>r;
    int lower = max(l,r-100);
    int ans = 0;
    int maxDig = -1;
    for(int i = lower;i<=r;i++){
        int diff = maxi(i)-mini(i);
        if(maxDig<diff){
            maxDig = diff;
            ans = i;
        }
    }
    cout<<ans<<endl;
}

int main(){
    // int t;
    // cin>>t;
    // while(t--){
    //     solve();
    // }

    solve();
}
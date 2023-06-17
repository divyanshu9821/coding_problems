// codechef, GDOG
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        
        int profit = INT_MIN;
        for(int i = 2;i<=k;i++){
            profit = max(profit,n%i);
        }
        cout<<profit<<endl;
    }
    return 0;
}
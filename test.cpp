#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    char bin[n];
    for(int i = 0;i<n;i++){
        cin>>bin[i];
    }
    
    int zeros=0,ones=0;
    
    for (int i = 0; i < n; i++) {
        if(bin[i]=='0')
            zeros++;
        else
            ones++;
    }
    
    cout<<ones<<" "<<zeros<<endl;
    // int ans = 0;
    
    // if(zeros==0)
    //     ans = 1;
    // else if(ones==0)
    //     ans = 0;
    // else if(ones>zeros)
    //     ans = zeros+1;
    // else
    //     ans = ones;
    
    // cout<<ans<<endl;    

}

int main(){
    // int t;
    // cin>>t;
    // while(t--) solve();

    solve();
}
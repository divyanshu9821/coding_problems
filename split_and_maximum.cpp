// codechef, SPLITMAX
#include<iostream>
using namespace std;

#define modulo 998244353
#define ll long long

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    ll ans = 0;

    for(int i = 0;i<n;i++){
        ans = (ans+arr[i])%modulo;
    }
    
    ans = (ans*(ans-1))%modulo;

    cout<<ans<<endl;
    return;
}

int main()
{

    int t = 0;
    cin>>t;
    while(t--){
        solve();
    }
    

    return 0;
}
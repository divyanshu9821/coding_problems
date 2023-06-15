// codechef, DOTIFYPLAY
#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n,k,l;
    cin>>n>>k>>l;
    vector<ll> list;
    for (ll i = 0; i < n; i++)
    {
        ll mi,li;
        cin>>mi>>li;
        if(li==l) list.push_back(mi);
    }

    if(list.empty()) {
        cout<<-1<<endl;
        return;
    }

    if(list.size()<k){
        cout<<-1<<endl;
        return;
    }
    sort(list.begin(),list.end(),greater<ll>());
    ll ans = 0;
    for(ll i = 0;i<k;i++){
        ans+=list[i];
    }
    cout<<ans<<endl;
}

signed main(){

    ll t;
    cin>>t;
    while(t--)
        solve();

}
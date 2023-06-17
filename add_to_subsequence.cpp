// codechef, SUBSEQDIST
#include<iostream>
#include<vector>
#include<map>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }

    map<int,int> freq;
    for(int i:v)
        freq[i]++;

    int max_freq = 0;
    for(auto it:freq)
        max_freq =max(max_freq,it.second);
    
    int ans = 0, temp = 1;
    while(temp<max_freq){
        ans++;
        temp*=2;
    }
    cout<<ans<<endl;
    return;
}

int main()
{

    solve();

    return 0;
}
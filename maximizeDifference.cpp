// codechef contest DIF_GCD, not solved
#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    // solution from codechef's tutor
    int mx = -1, ansA = 0, ansB = 0;
    for(int a = n;a <2*n;++a){
        int b = (m/a)*a;
        if(b-a>mx){
            mx = b-a;
            ansA = a;
            ansB = b;
        }
    }
    cout<<ansA<<" "<<ansB<<endl;
}

int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        solve();
    }
}
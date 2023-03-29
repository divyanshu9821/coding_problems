#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n], b[n];
    int maxa=INT_MIN, maxb=INT_MIN;
    for(int i = 0;i<n;i++){
        cin>>a[i];
    }

    for(int i = 0;i<n;i++){
        cin>>b[i];
        if(b[i]<a[i]){
            int temp = a[i];
            a[i] = b[i];
            b[i] = temp;
        } 
    }

    for(int i = 0;i<n;i++){
        maxa = max(maxa,a[i]);
        maxb = max(maxb,b[i]);
    }

    if(a[n-1]==maxa&&b[n-1]==maxb) cout<<"yes"<<endl;
    else cout<<"no"<<endl;




}

int main(){
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        solve();
    }
}
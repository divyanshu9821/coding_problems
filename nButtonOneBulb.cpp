//codechef , ON_OFF
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n = 0, count = 0;
        cin>>n;
        string s,r;
        cin>>s>>r;
        for(int i = 0;i<n;i++){
            if(s[i]!=r[i]){
                count++;
            }
        }
        (count%2==0)?cout<<1<<endl:cout<<0<<endl;
    }
    return 0;
}
// codechef, PERMCLEAR
#include<iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    int k;
    cin>>k;
    int b[k];
    for(int i = 0;i<k;i++){
        cin>>b[i];
    }

    for(int i = 0;i<n;i++){
        int flag = 1;
        for(int j = 0;j<k;j++){
            if(a[i]==b[j]){
                flag = 0;
                break;
            }
        }
        if(flag == 1)
            cout<<a[i]<<" ";
        }        
    }

int main(){

    int t;
    cin>>t;
    while(t--){
        solve();
    }

    return 0;
}
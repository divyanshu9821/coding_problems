// codechef, ARRAYBREAK
#include<iostream>
using namespace std;

#define int long

void solve(){
    int n;
    cin>>n;
    int arr[n] = {0};
    int odds = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];

        if(arr[i]%2!=0)
            odds++;
    }

    if(odds==n || odds ==0)
        cout<<0<<endl;
    else{
        cout<<n-odds<<endl;
    }    
    return;
}

signed main()
{

    solve();

    return 0;
}
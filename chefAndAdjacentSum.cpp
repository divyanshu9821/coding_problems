// codechef, CHFADJSUM
#include <bits/stdc++.h>
using namespace std;


// #define ll long long
#define f(a,b,c) for(int i = a;i<b;i+=c)

void solve(){
    int n;
    cin>>n;
    int arr[n];
    int maxi = INT_MIN;
    f(0,n,1){
        cin>>arr[i];
        maxi = max(arr[i],maxi);
    }

}

int main()
{

    // for multiple testcases
    // int t;
    // cin >> t;
    // while (t--)
    // {
    //     solve();
    // }

    // for single test case
    solve();

    return 0;

}
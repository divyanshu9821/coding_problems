// codechef, XOR_ORDER
#include <bits/stdc++.h>
using namespace std;
// #define ll long long
void solve()
{
    int a=7,b=72,c=99,ans;
    bool flag = false;
    for (int i = 0; i < 10; i++)
    {
        /* code */
        if((i^a)<(i^b)&&(i^b)<(i^c)){
            flag = true;
            ans =i;
        }
    }
    if(flag) cout<<ans<<endl;
    else cout<<-1<<endl;
    
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
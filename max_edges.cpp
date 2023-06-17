#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll vertices = 0, sources = 0, sinks = 0, fin_ans = 0;
    cin >> vertices >> sources >> sinks;

    int so_si = sources + sinks;

    if (so_si <= vertices)
    {

        // extra vertices except source or sinks
        ll xtra = vertices - so_si;

        // edges from source to other vertices
        fin_ans = sources * (xtra + sinks);

        // edges from extra to sinks
        fin_ans += xtra * sinks;

        // edges in-between extra vertices
        fin_ans += xtra * (xtra - 1) / 2;
    }
    else
    {
        ll xtra = so_si-vertices;
        
        // some vertices are both source and sinks
        sources -= xtra; 
        
        // same reason
        sinks -= xtra;

        fin_ans = sources * sinks;

    }

    cout<<fin_ans<<endl;
    return;
}

int main()
{

    // for multiple testcases
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    // for single test case
    // solve();

    return 0;
}
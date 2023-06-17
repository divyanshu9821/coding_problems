// codechef, BAB_I
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> pos, neg;
    for (int i = 0; i < n; i++)
    {
        int ele;
        cin >> ele;
        if (ele < 0)
            neg.push_back(ele);
        else
            pos.push_back(ele);
    }
    
    int max_neg = INT_MIN;
    int min_pos = INT_MAX;
    if(!neg.empty())
    max_neg = *max_element(neg.begin(), neg.end());
    if(!pos.empty())
    min_pos = *min_element(pos.begin(), pos.end());

    if (min_pos == 0)
    {
        cout << -1 << endl;
        return;
    }

    if (max_neg == -1 || min_pos == 1)
    {
        cout << 0 << endl;
        return;
    }

    if(neg.empty()){
        cout<<--min_pos<<endl;
        return;
    }
    else if(pos.empty()){
        cout<<(++max_neg)*-1<<endl;
        return;   
    }

    // cout<<max_neg<<endl<<min_pos<<endl;
    cout<<min((++max_neg)*-1,--min_pos)<<endl;
    return;
}

int main()
{

    solve();

    return 0;
}
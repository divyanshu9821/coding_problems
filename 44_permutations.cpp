#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

// for array having distinct elements
void permutations(vector<int> a, int ndx)
{
    if (ndx == a.size())
    {
        ans.push_back(a);
        return;
    }

    for (int i = ndx; i < a.size(); i++)
    {
        swap(a[i], a[ndx]);
        permutations(a, ndx + 1);
        swap(a[i], a[ndx]);
    }
}

// for array having repeating elements
void permutations2(vector<int> a,int idx){
    if(idx==a.size()){
        ans.push_back(a);
        return;
    }

    for(int i = idx;i<a.size();i++){
        if(i!=idx && a[i]==a[idx])
            continue;

        swap(a[i],a[idx]);
        permutations2(a,idx+1);
    }
}

void permutations3(vector<int> a){
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &i : a)
    {
        cin >> i;
    }

    permutations(a,0);

    // sort(a.begin(),a.end());// its compulsory
    // permutations2(a, 0);

    // permutations3(a);

    for (auto i : ans)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}
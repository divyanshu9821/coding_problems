// codechef, SUBARRY
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    long int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long int min_ele = a[0];
    long int max_ele = a[0];

    for (int i = 0; i < n; i++)
    {
        min_ele = min(min_ele, a[i]);
        max_ele = max(max_ele, a[i]);
    }

    if (min_ele > 0 && max_ele > 0 || min_ele == 0 && max_ele==0)
        cout << min_ele * min_ele << " " << max_ele * max_ele << endl;

    else if (min_ele < 0 && max_ele < 0)
        cout << max_ele * max_ele << " " << min_ele * min_ele << endl;

    else if(-min_ele == max_ele)
        cout<<min_ele*min_ele<<" "<<max_ele*max_ele<<endl;

    else if(-min_ele > max_ele)
        cout<< max_ele*min_ele<<" "<<min_ele*min_ele<<endl;

    else if(-min_ele < max_ele)
        cout<< max_ele*min_ele<<" "<<max_ele* max_ele<<endl;            
    
    // brute force
    // int max_int = INT_MIN, min_int = INT_MAX;// maximum and minimum intresting number
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = i; j < n; j++)
    //     {
    //         int int_num;// intresting number
    //         int_num = a[i] * a[j];
    //         max_int = max(max_int,int_num);
    //         min_int = min(min_int, int_num);
    //     }
    // }

    // cout<<min_int<<" "<<max_int<<endl;

    return;
}

int main()
{

    solve();

    return 0;
}
// codechef, DIVBY3
#include <bits/stdc++.h>
#include <string>
using namespace std;

// #define ll long long

// this function checks that all the digits are 1
int count_ones(int n, string str){
    int ones = 0;
    for(int i = 0;i<n;i++){
        ones+=(str[i]-'0');
    }
    return ones;
}

// all the digits are one and odd
bool case1(int n, string str){
    int ones = count_ones(n,str);
    if((ones==n)&&((n%2)!=0))
        return true;
    return false;    
}

// no digit one is present
bool case2(int n, string str){
    int ones = count_ones(n,str);
    if(ones==0||((ones==n)&&(ones%2==0)))
        return true;    
    return false;    
}

void solve(){
    string bin;
    cin>>bin;

    int n = bin.size();
    
    if(case1(n,bin)){
      cout<<-1<<endl;
      return;
    }
    
    if(case2(n,bin)){
        cout<<0<<endl;
        return;
    }
    
    cout<<1<<endl;    
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
// codechef, EQPAIR
#include<iostream>
#include<algorithm>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int a[n];
    for (int i = 0; i < n; i++){
        cin>>a[i];
    }

    sort(a,a+n);// sorting the arr

    int ans = 0, sum = 1;// ans is to print, sum store the no of occurrences of a particular number
    int ele = a[0];

    for (int i = 1; i < n; i++)
    {
        if(ele==a[i])// we got another occurrence
            sum++;

        else{// means encounter different number 
            ans+= sum*(sum-1)/2;
            ele = a[i];// new number is store
            sum = 1;// first occurence of a new number
        }    
    }

    cout<<ans<<endl;

    return;   
}

int main(){

    solve();

    return 0;
}
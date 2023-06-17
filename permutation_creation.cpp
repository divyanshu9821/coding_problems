// codechef, PREMCREATE
#include<iostream>
using namespace std;

void solve(){
    int n, val = 1;
    cin>>n;

    if(n<=3){
        cout<<-1<<endl;
        return;
    }

    if(n==4){
        cout<<"3 1 4 2"<<endl;
        return;
    }
    
    if(n%2==0){
        int i = n/2;
        while(i>0){
            cout<<val<<" "<<val+(n/2);
            val++;
            i--;
            if(i!=0)
                cout<<" ";
        }
        cout<<endl;
        return;
    }
    

    cout<<val<<" ";
    int i = n/2;
    while(i>0){
        cout<<1+val+n/2<<" ";
        val++;
        cout<<val;
        i--;
        if(i!=0)
            cout<<" ";
    }
    cout<<endl;
    return;
    
}

int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;
}
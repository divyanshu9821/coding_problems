// codechef, APPENDOR
#include<iostream>
using namespace std;

void solve(){
    int n, y;
    cin>>n>>y;
    int arr[n];
    int arr_or = 0;
    for(int i = 0;i<n;i++){
        cin>>arr[i];
        arr_or|=arr[i];
    }
    
    int num = 0;
    while(num<=y){
        if((arr_or|num)==y){
            cout<<num<<endl;
            return;
        }
        num++;
    }

    cout<<-1<<endl;
    return;

    
}

int main(){
    solve();
}
//codeforces
#include <bits/stdc++.h>
using namespace std;

int main(){
    int d, sumTime;
    cin>>d>>sumTime;
    int arr[d] = {0};
    for(int i = 0;i<d;i++){
        int minTime, maxTime;
        cin>>minTime>>maxTime;
        int time = sumTime - maxTime;
        if(time<0){
            arr[i] = sumTime;   
        }
        else arr[i] = maxTime;
        sumTime = time;
        
    }
    if(sumTime<=0){
        cout<<"YES"<<endl;
        for(int i = 0;i<d;i++) cout<<arr[i]<<" ";
    } 
    else cout<<"NO";
    return 0;
}
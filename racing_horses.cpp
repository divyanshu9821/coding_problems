// codechef, HORSES
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int skill_arr[n];
        for(int i = 0;i<n;i++){
            cin>>skill_arr[i];
        }

        sort(skill_arr,skill_arr+n);
        
        int min_diff = INT_MAX;
        for(int i = 1;i<n;i++){
            int diff = skill_arr[i]-skill_arr[i-1]; 
            if(diff<min_diff)
                min_diff =diff;
        }

        cout<<min_diff<<endl;
    }
    return 0;
}
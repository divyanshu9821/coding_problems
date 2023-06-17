#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        //input
        int size[n];
        for(int i = 0;i < n;i++){
            cin>>size[i];
        }

        char binary_char_arr[n];
        for(int j = 0;j < n;j++){
            cin>>binary_char_arr[i];
        }

        int min = INT_MAX;
        for(int k = 0;k<n;k++){
            if(binary_char_arr[k]=='0' && size[k]<=min){
                    min = size[k];
            }
        }

        cout<<min<<endl;
    }
    return 0;
}
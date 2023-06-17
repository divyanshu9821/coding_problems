// codechef, SUMOFPROD1 TLE
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int arrLength;
        cin>>arrLength;
        int arr[arrLength];
        
        for(int i = 0;i<arrLength;i++){
            cin>>arr[i];
        }
        
        // my solution with bad time complexity, TLE
        // int sum = 0;
        
        // for(int i = 0;i<arrLength;i++){
        
        //     for(int j = i;j<arrLength;j++){
        
        //         int product = 1;
        
        //         if(arr[j]==0){
        //             product = 0;
        //             break;
        //         }
            
        //         sum+=product;
        //     }
        // }
        // cout<<sum<<endl;
        
        // solution from codechef's tutor
        int sum = 0;
        int countOnes = 0;
        for(int i = 0;i<arrLength;i++){
            if(arr[i]==1){
                countOnes++;
            }
            else{
                sum+= (countOnes*(countOnes+1)/2);
                countOnes = 0;
            }
        }
        sum+= (countOnes*(countOnes+1)/2);
        cout<<sum<<endl;
    }
    return 0;
}
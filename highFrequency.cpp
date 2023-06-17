//codechef, HIGHFREQ
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        int arr[n];
        int maxElementInArr = -1;

        for(int i = 0;i<n;i++){
            cin>>arr[i];
            if(maxElementInArr<=arr[i])
                maxElementInArr = arr[i];
        }


        int hashTable[maxElementInArr+1]={0};
        for(int i = 0;i<n;i++){
            hashTable[arr[i]]++;
        }

        sort(hashTable, hashTable+maxElementInArr+1, greater<int>());
        int max = hashTable[0];
        int secondMax = hashTable[1];
        
        if((max+1)/2>=secondMax)
            cout<<(max+1)/2<<endl;
        else
            cout<<secondMax<<endl;    

    }
    return 0;
}
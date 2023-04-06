//codechef, CONSTR

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    

    int count = 0;
    char first = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]==first){
            count++;
        }
        else{
            if(count%2==0)
                cout<<first<<first;
            else cout<<first;
            count = 1;
            first = arr[i];    
        }
    }
    if(count%2==0)
                cout<<first<<first;
            else cout<<first;

    cout<<endl;        

}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num, ans = 0;
        cin>>num;

		while (num > 0) {
		    if(num % 2==1)
		        ans++;
		    num /= 2;
		}
        
        cout<<ans-1<<endl;
    }
    return 0;
}
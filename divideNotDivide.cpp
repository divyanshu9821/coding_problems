// codechef, DIVAB 
#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCases;
    cin>>testCases;
    while(testCases--){
        int a,b,n;
        cin>>a>>b>>n;
        if(a%b==0){
            cout<<-1<<endl;
        }
        else if(n%a==0&&n%b!=0){
            cout<<n<<endl;
        }
        else{
            int desireNumber = (n/a)*a+a;
            
            // this is my solution
            // while(1){
            //     if(desireNumber%b==0){
            //         desireNumber+=a;
            //     }
            //     else{
            //         cout<<desireNumber<<endl;
            //         break;
            //     }
            // } 
            
            // this solution is from codechef's tutor
            if(desireNumber%b==0)
                desireNumber+=a;
            cout<<desireNumber<<endl;    
            
        }     
    }
}
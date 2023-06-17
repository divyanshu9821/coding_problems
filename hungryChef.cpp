// codechef, BURGERS2 TLE
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int testCases;
	cin>>testCases;
	while(testCases--){
			
		// my 1st solution with worst time complexities among two of my solutions
		// int x,y,n,r;
		// cin>>x>>y>>n>>r;
		// int no_of_pb = n;
		// int no_of_nb = 0;
		// for (int i = 0; i < n; i++) {
		//     if(((no_of_nb*x)+(no_of_pb*y))<=r){
		//         break;
		//     }
		//     else{
		//         no_of_pb--;
		//         no_of_nb++;
		//     }
		// }
		// cout<<no_of_nb<<" "<<no_of_pb<<endl;
	    
		
		
		//my 2nd solution with much better time complexity still TLE
		// int x,y,n,r;
	    // cin>>x>>y>>n>>r;
		// if(n*x>r){
		// 	cout<<-1<<endl;
		// }
		// else{

		// 	int no_of_pb = 0;
		// 	int no_of_nb = 0;

		// 	int start = 0;
		// 	int end = n;
		// 	while(start<=end){
				
		// 		int mid = start +(end-start/2);
				
		// 		no_of_pb = mid;
				
		// 		no_of_nb = n-mid;
				
		// 		int cost = (no_of_nb*x)+(no_of_pb*y);
				
		// 		if(cost>r){
		// 			end = mid-1;
		// 		}
				
		// 		else if(cost<=r){
		// 			start = mid;
		// 		}			

		// 		if(start==mid){
		// 			cout<<no_of_nb<<" "<<no_of_pb<<endl;
		// 			break;
		// 		}
		// 	}
		// }
	
		// solution from codechef's tutor
		int x,y,n,r;
		cin>>x>>y>>n>>r;
		int nx = n*x;
		int ny = n*y;
		if(nx>r){
			cout<<-1<<endl;
		}
		else if(ny<=r){
			cout<<0<<" "<<n<<endl;
		}
		else{
			int b = (r-nx)/(y-x);
			cout<<n-b<<" "<<b<<endl; 
		}
	}
	return 0;
}
// codeforces, Blank Space
#include<bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){

  int len; cin>>len;
  int space=0;
  int maxSpace = 0;
  for(int i = 0;i<len;i++){
    int curr;
    cin>>curr;
    if(curr==0) ++space;
    else space = 0;
    maxSpace = max(maxSpace,space);
  }

  cout<<maxSpace<<"\n";
  return;
}

int main(){
//	solve();
//	return 0;
  int testCases;
  cin>>testCases;
  while(testCases--) solve();
  return 0;
}
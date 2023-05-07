// codeforces, Love Story
#include<bits/stdc++.h>

using namespace std;

#define ll long long

void solve(){

  string real = "codeforces";
  string given;
  cin>>given;
  int ans = 0;
  for(int i = 0;i<10;i++){
    if(real[i]!=given[i]) ans++;
  }
  cout<<ans<<"\n";
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
// codeforces, Mr. Perfectly fine
#include <bits/stdc++.h>

using namespace std;

#define ll long long

ll binToInt(string s)
{
  if (s[0] == '1')
  {
    if (s[1] == '1')
      return 3;
    else
      return 2;
  }
  else
  {
    if (s[1] == '1')
      return 1;
    else
      return 0;
  }
}

void solve()
{

  ll books;
  ll tm_1 = INT_MAX;
  ll tm_2 = INT_MAX;
  ll tm_3 = INT_MAX;
  bool f1 = false;
  bool f2 = false;
  bool f3 = false;

  cin >> books;

  for (ll i = 0; i < books; i++)
  {
    ll tm;
    ll skl;
    string s;

    cin >> tm;
    cin >> s;
    skl = binToInt(s);

    if (skl == 1){
      tm_1 = min(tm, tm_1);
      f1 = true;
    }
    else if (skl == 2){
      tm_2 = min(tm, tm_2);
      f2 = true;
    }
    else if (skl == 3){
      tm_3 = min(tm, tm_3);
      f3 = true;
    }
  }

  if ((!f1 || !f2)&&!f3)
  {
    cout << -1 << "\n";
    return;
  }

  cout << min((tm_1 + tm_2), tm_3) << "\n";

  return;
}

signed main()
{
  //	solve();
  //	return 0;
  ll testCases;
  cin >> testCases;
  while (testCases--)
    solve();
  return 0;
}
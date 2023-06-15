// codechef, VOWMTRX

#include <bits/stdc++.h>
using namespace std;

bool checkVowel(char c)
{
  if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    return true;
  return false;
}

void solve()
{
  int n, k;
  cin >> n >> k;
  string str;
  cin >> str;
  int volCount = 0;
  int consoBetween = 0;
  bool flag = true;
  bool mul = false;
  int ans = 1;
  for (int i = 0; i < str.length(); i++)
  {
    if (checkVowel(str[i]))
    {
      if (volCount == k)
        mul = true;
      if (mul)
      {
        ans *= consoBetween;
        mul = false;
      }
      volCount++;
      flag = true;
    }

    if (volCount == k)
    {
      volCount = 0;
      flag = false;
    }

    if (flag != true)
    {
      consoBetween++;
    }
  }
  cout << ans << endl;
  return;
}

int main()
{
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
  int t;
  cin >> t;
  while (t--)
  {
    solve();
  }
}
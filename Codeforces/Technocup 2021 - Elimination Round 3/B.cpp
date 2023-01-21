//2020-12-20 18:57:01
/*
 * Djivs, 2020
 */
#include <bits/stdc++.h>

#define Max(a,b) (a > b ? a : b)
#define Min(a,b) (a < b ? a : b)

#define test

#define mod 1000000007

typedef long long ll;

using namespace std;



bool check(ll x)
{
  ll c = x;
  while(c > 0)
  {
    if((c % 10) && (x % (c % 10)))
      return 0;
    c /= 10;
  }
  return 1;
}




void solve()
{
  ll n, i;
  cin >> n;
  for(i = n; !check(i); ++i);
  cout << i << endl;
}
int main()
{
  ios_base::sync_with_stdio(false);
  #ifdef test
    int t; cin >> t;
    while(t--)
      solve();
  #else
    solve();
  #endif
  return 0;
}

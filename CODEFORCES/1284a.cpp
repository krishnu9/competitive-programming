// https://codeforces.com/contest/1284/submission/68203276
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define mod 1000000007
#define inf 100000000000000
#define MM(a, x) memset(a, x, sizeof(a))
#define ALL(x) (x).begin(), (x).end()
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz(x) x.size()

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int n, m;
  cin >> n >> m;
  string s[n], t[m];

  rep(i, n) cin >> s[i];
  rep(i, m) cin >> t[i];

  int q;
  cin >> q;

  while (q--) {
    int y;
    string ans = "";
    cin >> y;
    y--;
    ans += s[y % n];
    ans += t[y % m];
    cout << ans << endl;
  }

  return 0;
}
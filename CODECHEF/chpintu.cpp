#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define int ll
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

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    int n, m, ans = INT_MAX;
    cin >> n >> m;
    int f[n], p[n];
    rep(i, n) cin >> f[i];
    rep(i, n) cin >> p[i];

    for (int i = 1; i <= m; i++) {
      bool found = false;
      int sum = 0;
      for (int j = 0; j < n; ++j) {
        if (f[j] == i) {
          found = true;
          sum += p[j];
        }
      }
      if (found)
        ans = min(sum, ans);
    }
    cout << ans << '\n';
  }

  return 0;
}
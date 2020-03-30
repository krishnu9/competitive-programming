#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define int long long
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define mod 1000000007
#define inf 100000000000000
#define MM(a, x) memset(a, x, sizeof(a))
#define all(x) (x).begin(), (x).end()
#define sz(x) x.size()

int32_t main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int w[n];
    vector<int> pos;
    rep(i, n) cin >> w[i];
    int mx = 0;
    int h = n / 2;
    for (int i = 0; i < n; i++) {
      mx = max(mx, w[i]);
    }
    for (int i = 0; i < n; i++) {
      if (w[i] == mx)
        pos.push_back(i + 1);
    }
    vector<int> d;
    for (int i = 0; i < sz(pos) - 1; i++) {
      d.push_back(pos[i + 1] - pos[i] - 1);
    }
    d.push_back(n - pos[n - 1] + pos[0] - 1);
    sort(all(d));
    int maxdis = *max_element(all(d));
    cout << maxdis - h + 1 << '\n';
  }

  return 0;
}
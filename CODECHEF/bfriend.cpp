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

  int t;
  cin >> t;
  while (t--) {
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    ll f[n];
    ll ans = inf;
    rep(i, n) { cin >> f[i]; }
    sort(f, f + n);
    rep(i, n) { ans = min(abs(f[i] - b) + abs(f[i] - a) + c, ans); }
    cout << ans << endl;
  }

  return 0;
}
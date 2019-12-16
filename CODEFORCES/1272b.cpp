#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ulli unsigned long long int
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define FOR(i, n, m) for (int i = (int)n; i <= (int)m; i++)
#define FOD(i, n, m) for (int i = (int)n; i >= (int)m; i--)
#define mod 1000000007
#define inf 100000000000000
#define MM(a, x) memset(a, x, sizeof(a))
#define ALL(x) (x).begin(), (x).end()
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz(x) x.size()
#define bs binary_search
#define NL cout << endl

int main() {
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    int l = 0, r = 0, u = 0, d = 0;

    rep(i, s.size()) {
      if (s[i] == 'L')
        l++;
      if (s[i] == 'R')
        r++;
      if (s[i] == 'U')
        u++;
      if (s[i] == 'D')
        d++;
    }
    if (l > r)
      l = r;
    if (r > l)
      r = l;
    if (u > d)
      u = d;
    if (d > u)
      d = u;
    if (l == 0 && u > 0) {
      u = 1;
      d = 1;
    }
    if (u == 0 && l > 0) {
      l = 1;
      r = 1;
    }
    cout << (l + r + u + d) << endl;
    rep(i, l) cout << 'L';
    rep(i, u) cout << 'U';
    rep(i, r) cout << 'R';
    rep(i, d) cout << 'D';
    NL;
  }

  return 0;
}
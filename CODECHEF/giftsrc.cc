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
    string s;
    cin >> s;
    int x = 0, y = 0;
    string m = "";
    string d = "";
    m += s[0];
    d += (s[0] == 'L' || s[0] == 'R' ? 'x' : 'y');
    for (int i = 1; i < n; i++) {
      d += (s[i] == 'L' || s[i] == 'R' ? 'x' : 'y');
      if (d[i] != d[i - 1])
        m += s[i];
    }
    for (int i = 0; i < m.length(); i++) {
      if (m[i] == 'L')
        x--;
      if (m[i] == 'R')
        x++;
      if (m[i] == 'U')
        y++;
      if (m[i] == 'D')
        y--;
    }
    cout << x << ' ' << y << '\n';
  }

  return 0;
}
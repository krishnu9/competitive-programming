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
    vector<ull> pn = {};
    ull m, a, n, d, na;
    cin >> a >> m;
    n = m / a;
    d = m - (n * a);
    if (d == 0) {
      cout << 0 << endl;
      cout << endl;
      continue;
    }
    while (d <= n) {
      if (n % d == 0)
        pn.push_back(n);
      n--;
      d = m - (n * a);
    }
    sort(ALL(pn));
    cout << pn.size() << endl;
    for (auto n : pn) {
      cout << n << ' ';
    }
    cout << endl;
  }
  return 0;
}
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
    int a, b;
    cin >> a >> b;
    if (b < a)
      swap(a, b);
    int o1 = a % 10;
    int t1 = a / 10;
    int o2 = b % 10;
    int t2 = b / 10;
    int n0 = a + b;
    int n1 = (o2 * 10 + o1) + (t2 * 10 + t1);
    int n2 = (t1 * 10 + t2) + (o1 * 10 + o2);
    int ans = max(n0, max(n1, n2));
    if (a < 10)
      ans = max(n0, n2);
    if (a < 10 && b < 10)
      ans = a + b;
    cout << ans << '\n';
  }

  return 0;
}
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

  int n, q;
  cin >> n >> q;

  int a[n];
  rep(i, n) cin >> a[i];

  int peak[n] = {};
  peak[0] = 0, peak[n - 1] = 1;

  for (int i = 1; i < n - 1; i++) {
    if (a[i] > a[i - 1] && a[i] > a[i + 1])
      peak[i] = 1;
    else if (a[i] < a[i - 1] && a[i] < a[i + 1])
      peak[i] = 1;
  }

  int prefix[n];
  prefix[0] = 1;
  for (int i = 1; i < n; i++) {
    if (peak[i] == 1)
      prefix[i] = prefix[i - 1] + 1;
    else
      prefix[i] = prefix[i - 1];
  }

  // QUERIES
  for (int i = 0; i < q; i++) {
    int x, y, ans;
    cin >> x >> y;
    x--;
    y--;
    if (x == 0 && y == n - 1)
      ans = prefix[y] - 2;
    if (x == 0 && y < n - 1) {
      ans = prefix[y] - 1;
      if (peak[y])
        ans -= 1;
    }
    if (x > 0 && y == n - 1) {
      ans = prefix[y] - prefix[x - 1] - 1;
      if (peak[x])
        ans -= 1;
    } else {
      ans = prefix[y] - prefix[x - 1];
      if (peak[x])
        ans -= 1;
      if (peak[y])
        ans -= 1;
    }
    if (ans & 1)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
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

  int a[n];
  rep(i, n) { cin >> a[i]; }

  sort(a, a + n);
  ll ans = 0;
  rep(i, m) {
    if (a[i] <= 0)
      ans += a[i];
  }
  cout << -1 * ans << endl;
  return 0;
}
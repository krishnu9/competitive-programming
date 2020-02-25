#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ulli unsigned long long int
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define FOR(i, n, m) for (int i = (int)n; i <= (int)m; ++i)
#define FOD(i, n, m) for (int i = (int)n; i >= (int)m; --i)
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
  cin.tie(0);

  int n;
  cin >> n;
  int a[n];
  rep(i, n) { cin >> a[i]; }
  ll ans = INT_MAX;
  ll x, y;
  for (int i = 0; i < n - 1; i++) {
    if (abs(a[i] - a[i + 1]) < ans) {
      ans = abs(a[i] - a[i + 1]);
      x = i;
      y = i + 1;
    }
  }
  if (abs(a[n - 1] - a[0]) < ans) {
    x = n - 1;
    y = 0;
  }
  cout << x + 1 << ' ' << y + 1 << endl;
  return 0;
}
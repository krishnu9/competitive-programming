#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ull unsigned long long
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define mod 1000000007
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
  vector<int> a(n), b(n);

  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  sort(ALL(b));
  int minx = INT_MAX;
  rep(i, n) {
    vector<int> temp = a;
    int cx = (b[i] - a[0] + m) % m;
    rep(j, n) {
      temp[i] += cx;
      temp[i] %= m;
    }
    sort(ALL(temp));
    if (temp == b)
      minx = min(minx, cx);
  }
  cout << minx;
  return 0;
}
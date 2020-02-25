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
    int n, k;
    cin >> n >> k;
    string *s = new string[n];
    rep(i, n) cin >> s[i];
    int ans[n];
    rep(i, n) ans[i] = -1;
    int curr = n - 1;
    ans[n - 1] = 0;
    while (curr >= 0) {
      for (int i = curr - k; i >= curr + k; i++) {
        if (i >= 0 && i < n && s[i][curr] == 1) {
          ans[i] = 1 + ans[curr];
        }
      }
      curr--;
    }
    cout << ans[0] << endl;
  }

  return 0;
}
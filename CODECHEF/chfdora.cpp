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
    int n, m;
    cin >> n >> m;
    int a[n][m];
    rep(i, n) {
      rep(j, m) { cin >> a[i][j]; }
    }
    int ans = n * m;
    for (int i = 1; i < n - 1; i++) {
      for (int j = 1; j < m - 1; j++) {
        int x = 1;
        while (i - x >= 0 && i + x < n && j + x < m && j - x >= 0) {
          if (a[i - x][j] == a[i + x][j] && a[i][j - x] == a[i][j + x]) {
            ans++;
            x++;
          } else {
            break;
          }
        }
      }
    }
    cout << ans << endl;
  }
  return 0;
}
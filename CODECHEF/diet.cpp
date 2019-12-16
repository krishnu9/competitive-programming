// I'M CLUELESS ABOUT HOW CLUELESS I AM
// - Krishnu Pradhan, NITR
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
    int n, k;
    int rem = 0, tot;
    cin >> n >> k;
    int a[n];
    rep(i, n) { cin >> a[i]; }
    rep(i, n) {
      tot = a[i] + rem;
      if (tot < k) {
        cout << "NO" << ' ' << i + 1;
        break;
      }
      if (i == n - 1 && tot >= k) {
        cout << "YES";
      }
      rem = tot - k;
    }
    NL;
  }

  return 0;
}
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

  int t, n;
  string s;
  cin >> t;

  while (t--) {
    int k = INT_MAX;
    cin >> n;
    cin >> s;
    for (int i = 0; i < n - 1; ++i) {
      for (int j = i + 1; j <= n - 1; ++j) {
        if (s[i] == s[j]) {
          k = min(k, j - i);
          break;
        }
      }
    }
    if (k > n)
      cout << 0;
    else
      cout << n - k;
    NL;
  }

  return 0;
}
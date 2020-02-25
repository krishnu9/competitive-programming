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

bool checkp(string h, string p, int i) {
  string hashed = h.substr(i, p.size());
  sort(hashed.begin(), hashed.end());
  string sortedp = p;
  sort(sortedp.begin(), sortedp.end());
  if (hashed == sortedp)
    return true;
  else
    return false;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin >> t;
  while (t--) {
    string p, h;
    string ans = "NO";
    cin >> p >> h;
    if (h.size() < p.size())
      ans = "NO";
    else
      for (int i = 0; i <= h.size() - p.size(); i++) {
        bool pp = checkp(h, p, i);
        if (pp) {
          ans = "YES";
          break;
        }
      }
    cout << ans << endl;
  }

  return 0;
}
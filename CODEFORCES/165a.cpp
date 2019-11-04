#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define FOR(i, n, m) for (int i = (int)n; i <= (int)m; i++)
#define FOD(i, n, m) for (int i = (int)n; i >= (int)m; i--)
typedef long long ll;
#define mod 1000000007
#define inf 100000000000000
#define MM(a, x) memset(a, x, sizeof(a))
#define ALL(x) (x).begin(), (x).end()
#define UN(v) sort(ALL(v)), v.resize(unique(ALL(v)) - v.begin())
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz() size()
#define bs binary_search
#define NL cout << endl

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int n;
  cin >> n;
  pair<int, int> a[n];
  rep(i, n) cin >> a[i].F >> a[i].S;
  int tot = 0;
  rep(i, n) {
    bool l = 0, r = 0, u = 0, d = 0;
    rep(j, n) {
      if (a[j].F == a[i].F && a[j].S < a[i].S)
        d = 1;
      else if (a[j].F == a[i].F && a[j].S > a[i].S)
        u = 1;
      else if (a[j].S == a[i].S && a[j].F > a[i].F)
        r = 1;
      else if (a[j].S == a[i].S && a[j].F < a[i].F)
        l = 1;
    }
    if (l && r && u && d)
      tot++;
  }
  cout << tot;

  return 0;
}
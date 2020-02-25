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

  ll t;
  cin >> t;

  while (t--) {
    ll n, s;
    cin >> n >> s;
    vector<ll> a(n);
    vector<ll> suf(n);
    ll sufs[n][n];

    rep(i, n) cin >> a[i];
    suf[0] = a[0];
    cout << "Suf: " << suf[0] << ' ';
    for (ll i = 1; i < n; i++) {
      suf[i] = a[i] + suf[i - 1];
      cout << suf[i] << ' ';
    }
    cout << endl;

    for (ll i = 0; i < n; i++) {

      ll tosubtract = suf[i];
      ll maxn = 0, curj = -1, ansi = -1, maxj = -1;

      cout << "sufs[" << i << "]: ";

      for (ll j = 0; j < n; j++) {

        if (j < i)
          sufs[i][j] = suf[j];
        else
          sufs[i][j] = suf[j] - tosubtract;

        cout << sufs[i][j] << ' ';

        if (sufs[i][j] > s) {
          maxn = max(maxn, sufs[i][j - 1]);
          curj = j;
          break;
        }
      }
      if (curj > maxj) {
        maxj = curj;
        ansi = i;
      }
      cout << "\tmaxj: " << maxj << ansi;
      cout << endl;
    }
  }

  return 0;
}
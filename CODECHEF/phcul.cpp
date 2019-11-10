#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ld long double
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

ld dist(pair<ll, ll> p1, pair<ll, ll> p2) {
  return sqrtl((p1.F - p2.F) * (p1.F - p2.F) + (p1.S - p2.S) * (p1.S - p2.S));
}

ld min_dist(pair<ll, ll> p1, vector<pair<ll, ll>> b) {
  ld d, m = dist(p1, b[0]);
  rep(i, sz(b)) {
    d = dist(p1, b[i]);
    if (d < m)
      m = d;
  }
  return m;
}

int main() {
  ios_base::sync_with_stdio(0);

  int t;
  cin >> t;
  while (t--) {
    ll x, y;
    cin >> x >> y;
    int n, m, k;
    cin >> n >> m >> k;
    pair<ll, ll> p;
    p.F = x;
    p.S = y;
    vector<pair<ll, ll>> a, b, c;
    rep(i, n) {
      cin >> x >> y;
      a.PB(MP(x, y));
    }
    rep(i, m) {
      cin >> x >> y;
      b.PB(MP(x, y));
    }
    rep(i, k) {
      cin >> x >> y;
      c.PB(MP(x, y));
    }
    map<pair<ll, ll>, ld> ca, cb, pa, pb;
    rep(i, a.size()) {
      ca[a[i]] = min_dist(a[i], c);
      pa[a[i]] = dist(a[i], p);
    }
    rep(i, b.size()) {
      cb[b[i]] = min_dist(b[i], c);
      pb[b[i]] = dist(b[i], p);
    }
    ld d, min = dist(a[0], b[0]) + pa[a[0]] + cb[b[0]];
    rep(i, sz(a)) {
      rep(j, sz(b)) {
        d = dist(a[i], b[j]);
        if (min > d + pa[a[i]] + cb[b[j]])
          min = d + pa[a[i]] + cb[b[j]];
        if (min > d + pb[b[j]] + ca[a[i]])
          min = d + pb[b[j]] + ca[a[i]];
      }
    }
    cout << fixed << setprecision(7) << min << endl;
  }

  return 0;
}
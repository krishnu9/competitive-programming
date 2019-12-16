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
#define UN(v)                                                                  \
  sort(ALL(v));                                                                \
  v.resize(unique(ALL(v)) - v.begin())
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz(x) x.size()
#define bs binary_search
#define NL cout << endl

long double dis(const pair<long long, long long> &a,
                const pair<long long, long long> &b) {
  return sqrtl((a.first - b.first) * (a.first - b.first) +
               (a.second - b.second) * (a.second - b.second));
}
long double mdis(const pair<long long, long long> &a,
                 vector<pair<long long, long long>> b) {
  long double d, m = dis(a, b[0]);
  for (auto g = b.begin(); g != b.end(); ++g) {
    d = dis(a, *g);
    if (d < m)
      m = d;
  }
  return m;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t--) {
    int i, n, m, k;
    long long x, y, X, Y;
    cin >> x >> y;
    pair<long long, long long> p;
    p.first = x;
    p.second = y;
    cin >> n >> m >> k;
    vector<pair<long long, long long>> a;
    vector<pair<long long, long long>> b;
    vector<pair<long long, long long>> c;
    for (i = 0; i < n; i++) {
      cin >> X >> Y;
      a.push_back(make_pair(X, Y));
    }
    for (i = 0; i < m; i++) {
      cin >> X >> Y;
      b.push_back(make_pair(X, Y));
    }
    for (i = 0; i < k; i++) {
      cin >> X >> Y;
      c.push_back(make_pair(X, Y));
    }
    map<pair<long long, long long>, long double> ac, bc, pi, pj;
    for (auto g = a.begin(); g != a.end(); ++g) {
      ac[*g] = mdis(*g, c);
      pi[*g] = dis(*g, p);
    }
    for (auto g = b.begin(); g != b.end(); ++g) {
      bc[*g] = mdis(*g, c);
      pj[*g] = dis(*g, p);
    }
    long double d, min = dis(a[0], b[0]) + pi[a[0]] + bc[b[0]];
    for (auto i = a.begin(); i != a.end(); ++i)
      for (auto j = b.begin(); j != b.end(); ++j) {
        d = dis(*i, *j);
        if (min > d + pi[*i] + bc[*j])
          min = d + pi[*i] + bc[*j];
        if (min > d + pj[*j] + ac[*i])
          min = d + pj[*j] + ac[*i];
      }
    cout << min << endl;
  }

  return 0;
}

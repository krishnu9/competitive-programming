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

struct node {
  ll val;
  ll index;
};

bool f(node n1, node n2) {
  if (n1.val != n2.val) {
    return n1.val < n2.val;
  } else {
    return n1.index < n2.index;
  }
}

ll camc(node nodes[], int n, int m) {
  sort(nodes, nodes + n, f);
  ll md = INT_MAX;
  FOR(i, 0, n - m) {
    if ((nodes[i + m - 1].index - nodes[i].index) % m != 0) {
      ll cd = nodes[i + m - 1].val - nodes[i].val;
      if (cd < md)
        md = cd;
    }
  }
  return md;
}

int main() {
  ios_base::sync_with_stdio(0);

  int t, n, m;
  cin >> t;

  while (t--) {
    cin >> n >> m;
    ll A[n + 1];
    node nodes[n + 1];
    rep(i, n) {
      cin >> A[i];
      nodes[i].val = A[i];
      nodes[i].index = i;
    }
    ll ans = camc(nodes, n, m);
    cout << ans;
    NL;
  }

  return 0;
}
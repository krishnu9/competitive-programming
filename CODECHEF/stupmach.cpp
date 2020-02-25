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

ull sum;

void addtoken(ll s[], ll l) {
  if (l == 0) {
    return;
  }
  ll index;
  ull min = *(min_element(s, s + l));
  rep(i, l) {
    if (s[i] == min) {
      index = i;
      break;
    }
  }
  sum += min * l;
  rep(i, index) s[i] -= min;
  addtoken(s, index);
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  ll t;
  cin >> t;
  while (t--) {
    sum = 0;
    ll n;
    cin >> n;
    ll s[n];
    rep(i, n) { cin >> s[i]; }
    addtoken(s, n);
    cout << sum << endl;
  }

  return 0;
}
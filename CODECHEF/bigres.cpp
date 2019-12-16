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
    int n, sum = 0;
    cin >> n;
    ll x[n];
    rep(i, n) {
      cin >> x[i];
      sum += x[i];
    }
    ll min1 = INT_MAX, min2 = INT_MAX;
    rep(i, n) {
      min1 = min(min1, x[i]);
      if (x[i] != min1)
        min2 = min(min2, x[i]);
    }
  }

  return 0;
}
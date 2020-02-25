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

  int t;
  cin >> t;

  ull a[1000000];
  a[1] = 2;
  a[2] = 3;
  for (int i = 3; i <= 1000000; i++) {
    a[i] = a[i - 1] + a[i - 2];
  }
  while (t--) {
    int n;
    cin >> n;
    int ans = a[n] % mod;
    cout << ans << endl;
  }

  return 0;
}
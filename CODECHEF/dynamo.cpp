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
  int n;
  ull s, a, b, c, d, e;
  while (t--) {
    cin >> n;
    ull tot = pow(10, n);
    cin >> a;
    cout << (2 * tot) + a << endl;
    cin >> b;
    cout << tot - b << endl;
    cin >> d;
    cout << tot - d << endl;
    int v;
    cin >> v;
    if (v == -1)
      return 0;
  }
  return 0;
}
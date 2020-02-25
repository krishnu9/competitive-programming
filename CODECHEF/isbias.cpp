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

  int n, q;
  cin >> n >> q;
  int a[n + 1], mi[n + 1], md[n + 1];
  mi[1] = 0, md[1] = 0;
  if (a[2] > a[1])
    mi[2] = 1;
  else
    mi[2] = 0;
  if (a[2] < a[1])
    md[2] = 1;
  else
    md[2] = 0;
  rep(i, n) cin >> a[i + 1];
  for (int i = 2; i <= n; i++) {
    if (a[i] < a[i - 1] && a[i] < a[i + 1])
      mi[i + 1] = mi[i] + 1;
    else
      mi[i + 1] = mi[i];
    if (a[i] > a[i - 1] && a[i] > a[i + 1])
      md[i + 1] = md[i] + 1;
    else
      md[i + 1] = md[i];
  }
  rep(i, q) {
    int l, r;
    cin >> l >> r;
    // cout << "Maximal increasing ss: ";
    // rep(i, n) cout << mi[i + 1] << ' ';
    // cout << "\nNo. of maximal increasing subsequences between " << l << " and
    // "
    //      << r << ": " << mi[r] - mi[l] << endl;
    // cout << "Maximal decreasing ss: ";
    // rep(i, n) cout << md[i + 1] << ' ';
    // cout << "\nNo. of maximal decreasing subsequences between " << l << " and
    // "
    //      << r << ": " << md[r] - md[l] << endl;
    if ((md[r] - md[l]) == (mi[r] - mi[l]))
      cout << "YES\n";
    else
      cout << "NO\n";
  }
  return 0;
}
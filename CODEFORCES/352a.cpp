#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define ulli unsigned long long int
#define rep(i, n) for (int i = 0; i < (int)n; ++i)
#define FOR(i, n, m) for (int i = (int)n; i <= (int)m; ++i)
#define FOD(i, n, m) for (int i = (int)n; i >= (int)m; --i)
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
  cin.tie(0);

  int n;
  cin >> n;
  int a;
  int n0 = 0, n5 = 0;
  rep(i, n) {
    cin >> a;
    a == 0 ? n0++ : n5++;
  }

  if (n0 == 0)
    cout << -1;
  else if (n0 > 0 and n5 < 9)
    cout << 0;
  else if (n0 > 0 and n5 >= 9) {
    rep(i, n5 / 9) cout << "555555555";
    rep(i, n0) cout << 0;
  }
  cout << endl;
  return 0;
}
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

  vector<string> a(n), b(n);
  rep(i, n) cin >> a[i];
  rep(i, n) cin >> b[i];

  map<string, int> freqa, freqb;
  rep(i, n) freqa[a[i]]++;
  rep(i, n) freqb[b[i]]++;

  int ans = n;

  for (auto it : freqa)
    ans -= min(it.S, freqb[it.F]);

  cout << ans << endl;

  return 0;
}
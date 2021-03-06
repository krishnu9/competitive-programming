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

  int n, k;
  cin >> n >> k;
  string s, a;
  char ch;
  cin >> s;

  rep(i, k) {
    cin >> ch;
    a.push_back(ch);
  }

  rep(i, s.size()) {
    string::size_type loc = a.find(s[i], 0);
    if (loc == string::npos)
      s[i] = '0';
    else
      s[i] = '1';
  }

  int cnt = 0;
  ulli ans = 0;

  for (int i = 0; i < s.size(); ++i) {
    int j = i;
    while (j < n && s[j] == '1')
      ++j;
    ll len = j - i;

    ans += len * (len + 1) / 2;
    i = j;
  }

  cout << ans << endl;

  return 0;
}
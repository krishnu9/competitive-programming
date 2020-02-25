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
  string s, s1;
  while (t--) {
    int c = 1;
    cin >> s;
    s1 = "";
    for (int i = 0; i < s.size() - 1; i++) {
      if (s[i] == s[i + 1])
        c++;
      else {
        s1.push_back(s[i]);
        s1 += to_string(c);
        c = 1;
      }
    }
    s1.push_back(s[s.size() - 1]);
    s1 += to_string(c);
    // cout << s1 << endl;
    if (s1.size() < s.size())
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
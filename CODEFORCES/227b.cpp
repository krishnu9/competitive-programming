#include <bits/stdc++.h>
using namespace std;
#define lli long long int
#define ulli unsigned long long int
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define FOR(i, n, m) for (int i = (int)n; i <= (int)m; i++)
#define FOD(i, n, m) for (int i = (int)n; i >= (int)m; i--)
typedef long long ll;
#define mod 1000000007
#define inf 100000000000000
#define MM(a, x) memset(a, x, sizeof(a))
#define ALL(x) (x).begin(), (x).end()
#define UN(v) sort(ALL(v)), v.resize(unique(ALL(v)) - v.begin())
#define MP make_pair
#define PB push_back
#define F first
#define S second
#define sz() size()
#define bs binary_search
#define NL cout << endl

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(NULL);
  cout.tie(NULL);

  int pa[10000000];

  MM(pa, -1);

  int n, m, bi;
  ulli sum1, sum2;
  cin >> n;
  int a[n];
  rep(i, n) {
    cin >> a[i];
    pa[a[i]] = i + 1;
  }

  cin >> m;
  rep(i, m) {
    cin >> bi;
    sum1 += pa[bi];
    sum2 += n - pa[bi] + 1;
  }
  cout << sum1 << ' ' << sum2;

  return 0;
}